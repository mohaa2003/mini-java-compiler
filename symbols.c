#include "symbols.h"
#include <stdio.h>
#include <assert.h>

// ------------------------------------------
// Variables globales
// ------------------------------------------
Scope *current_scope = NULL; // Scope actuel (pile de scopes)

// ------------------------------------------
// Fonctions auxiliaires (interne au .c)
// ------------------------------------------

// Libère un symbole et son nom
static void free_symbol(Symbol *sym) {
    if (sym->name) free(sym->name);
    if (sym->type == SYM_CONSTANT && sym->data_type == DT_STRING && sym->value.str_val) {
        free(sym->value.str_val); // Libère les chaînes allouées
    }
}

// Affiche un symbole (pour débogage)
static void print_symbol(const Symbol *sym) {
    const char *type_str = symbol_type_to_str(sym->type);
    const char *data_str = data_type_to_str(sym->data_type);
    printf("[%s] %s (type: %s, scope: %d)", type_str, sym->name, data_str, sym->scope_level);
    if (sym->is_initialized) {
        printf(" = ");
        switch (sym->data_type) {
            case DT_INT:    printf("%d", sym->value.int_val); break;
            case DT_FLOAT:  printf("%f", sym->value.float_val); break;
            case DT_BOOLEAN: printf(sym->value.bool_val ? "true" : "false"); break;
            case DT_STRING: printf("\"%s\"", sym->value.str_val); break;
            default: break;
        }
    }
    printf("\n");
}

// ------------------------------------------
// API Publique
// ------------------------------------------

// Initialise la table des symboles (scope global)
void init_symbol_table() {
    assert(current_scope == NULL); // Vérifie qu'elle n'est pas déjà initialisée
    push_scope(); // Crée le scope global (level 0)
}

// Empile un nouveau scope
void push_scope() {
    Scope *new_scope = (Scope *)malloc(sizeof(Scope));
    new_scope->symbols = NULL;
    new_scope->count = 0;
    new_scope->scope_level = current_scope ? current_scope->scope_level + 1 : 0;
    new_scope->parent = current_scope;
    current_scope = new_scope;
}

// Dépile le scope courant
void pop_scope() {
    assert(current_scope != NULL); // Impossible de dépiler sans scope

    // Libère les symboles du scope
    for (int i = 0; i < current_scope->count; i++) {
        free_symbol(&current_scope->symbols[i]);
    }
    free(current_scope->symbols);

    Scope *parent_scope = current_scope->parent;
    free(current_scope);
    current_scope = parent_scope;
}

// Ajoutez cette fonction pour vérifier les accès
bool check_access(Symbol *sym, Scope *context) {
    if (sym->access == ACC_PUBLIC) return true;
    if (sym->access == ACC_PRIVATE) {
        return (context->scope_level == sym->scope_level);  // Même scope seulement
    }
    // Pour PROTECTED: ajoutez la logique d'héritage si nécessaire
    return false;
}

// Ajoute un symbole au scope courant
Symbol* add_symbol(const char *name, SymbolType type, DataType data_type, AccessModifier access) {
    if (find_symbol_in_current_scope(name) != NULL) {
        fprintf(stderr, "Erreur: symbole '%s' déjà déclaré dans ce scope\n", name);
        return NULL;
    }

    current_scope->symbols = (Symbol *)realloc(
        current_scope->symbols,
        (current_scope->count + 1) * sizeof(Symbol)
    );

    Symbol new_sym = {
        .name = strdup(name),
        .type = type,
        .data_type = data_type,
        .access = access,  // Nouveau champ
        .scope_level = current_scope->scope_level,
        .is_initialized = false,
        .value = {0}
    };

    current_scope->symbols[current_scope->count++] = new_sym;
    return &current_scope->symbols[current_scope->count - 1];
}

// Recherche un symbole dans tous les scopes (du plus local au global)
Symbol* find_symbol(const char *name) {
    Scope *scope = current_scope;
    while (scope != NULL) {
        for (int i = 0; i < scope->count; i++) {
            if (strcmp(scope->symbols[i].name, name) == 0) {
                return &scope->symbols[i];
            }
        }
        scope = scope->parent; // Remonte au scope parent
    }
    return NULL; // Non trouvé
}

// Recherche un symbole uniquement dans le scope courant
Symbol* find_symbol_in_current_scope(const char *name) {
    if (current_scope == NULL) return NULL;
    for (int i = 0; i < current_scope->count; i++) {
        if (strcmp(current_scope->symbols[i].name, name) == 0) {
            return &current_scope->symbols[i];
        }
    }
    return NULL;
}

// Libère toute la table des symboles
void free_symbol_table() {
    while (current_scope != NULL) {
        pop_scope(); // Dépile tous les scopes
    }
}

// Affiche la table complète (pour débogage)
void print_symbol_table() {
    Scope *scope = current_scope;
    while (scope != NULL) {
        printf("--- Scope Level %d ---\n", scope->scope_level);
        for (int i = 0; i < scope->count; i++) {
            print_symbol(&scope->symbols[i]);
        }
        scope = scope->parent;
    }
}

// Affiche le scope courant
void print_current_scope() {
    if (current_scope == NULL) {
        printf("Aucun scope actif.\n");
        return;
    }
    printf("--- Scope Level %d ---\n", current_scope->scope_level);
    for (int i = 0; i < current_scope->count; i++) {
        print_symbol(&current_scope->symbols[i]);
    }
}

// Convertit un AccessModifier en chaîne
const char* access_to_str(AccessModifier access) {
    switch (access) {
        case ACC_PUBLIC: return "public";
        case ACC_PRIVATE: return "private";
        case ACC_PROTECTED: return "protected";
        default: return "unknown";
    }
}

// Convertit un SymbolType en chaîne
const char* symbol_type_to_str(SymbolType type) {
    switch (type) {
        case SYM_VARIABLE: return "Variable";
        case SYM_FUNCTION: return "Fonction";
        case SYM_CONSTANT: return "Constante";
        default: return "Inconnu";
    }
}

// Convertit un DataType en chaîne
const char* data_type_to_str(DataType type) {
    switch (type) {
        case DT_INT: return "int";
        case DT_BOOLEAN: return "boolean";
        case DT_FLOAT: return "float";
        case DT_CHAR: return "char";
        case DT_STRING: return "String";
        case DT_VOID: return "void";
        default: return "unknown";
    }
}

#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Types de données (similaire à Java)
typedef enum {
    DT_INT, DT_BOOLEAN, DT_FLOAT, DT_CHAR, DT_STRING, DT_VOID
} DataType;

// Types de symboles
typedef enum {
    SYM_VARIABLE, SYM_FUNCTION, SYM_CONSTANT
} SymbolType;

typedef enum {
    ACC_PUBLIC,
    ACC_PRIVATE,
    ACC_PROTECTED  // Optionnel pour l'héritage futur
} AccessModifier;

// Structure d'un symbole
typedef struct Symbol {
    char *name;
    SymbolType type;
    DataType data_type;
    AccessModifier access;  // Nouveau champ
    int scope_level;
    bool is_initialized;
    union {
        int int_val;
        float float_val;
        bool bool_val;
        char *str_val;
    } value;
} Symbol;

// Structure d'un scope (simplifiée)
typedef struct Scope {
    Symbol *symbols;  // Tableau dynamique
    int count;        // Nombre de symboles
    int scope_level;  // Profondeur
    struct Scope *parent;
} Scope;

// API
void init_symbol_table();
void push_scope();
void pop_scope();
bool check_access(Symbol *sym, Scope *context) ;
Symbol* add_symbol(const char *name, SymbolType type, DataType data_type, AccessModifier access) ;
Symbol* find_symbol(const char *name) ;
Symbol* find_symbol_in_current_scope(const char *name) ;
void free_symbol_table() ;
void print_symbol_table() ;
void print_current_scope();
const char* access_to_str(AccessModifier access) ;
const char* symbol_type_to_str(SymbolType type) ;
const char* data_type_to_str(DataType type);

#endif

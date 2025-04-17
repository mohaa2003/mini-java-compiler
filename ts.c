#include "ts.h"
#include <stdio.h>
#include <string.h>


 elt_idf_cst ts_idf_cst[1000];
 elt_kw_sep ts_kw[50], ts_sep[50];
 int count_idf_cst = 0, count_kw = 0, count_sep = 0;

int search(char entity[], int t){
    int i=0;
    switch (t)
    {
    case 0:
        while (i<count_idf_cst)
        {
            if (strcmp(entity, ts_idf_cst[i].name) == 0) return i;
            i++;
        }
        return -1;
    case 1:
        while (i<count_sep)
        {
            if (strcmp(entity, ts_sep[i].name) == 0) return i;
            i++;
        }
        return -1;
    case 2:
        while (i<count_kw)
        {
            if (strcmp(entity, ts_kw[i].name) == 0) return i;
            i++;
        }
        return -1;
    }   
}

int insert(char entity[], char code[], char type[], float value, int t){
    switch (t)
    {
    case 0:
        if (search(entity, 0) == -1){
            strcpy(ts_idf_cst[count_idf_cst].name, entity);
            strcpy(ts_idf_cst[count_idf_cst].code, code);
            strcpy(ts_idf_cst[count_idf_cst].type, type);
            ts_idf_cst[count_idf_cst].value = value;
            count_idf_cst++;
        }
        break;
    case 1:
        if (search(entity, 1) == -1){
            strcpy(ts_sep[count_sep].name, entity);
            strcpy(ts_sep[count_sep].code, code);
            count_sep++;
        }
        break;
    case 2:
        if (search(entity, 2) == -1){
            strcpy(ts_kw[count_kw].name, entity);
            strcpy(ts_kw[count_kw].code, code);
            count_kw++;
        }
        break;
    }   
}

void print() {
    printf("\n================== TABLE DES SYMBOLES ==================\n");

    // Table des identificateurs et constantes
    printf("\n************** Table des symboles IDF / CONST **************\n");
    printf("+------------------+------------------+------------------+------------------+\n");
    printf("|      Name        |      Code        |      Type        |      Value       |\n");
    printf("+------------------+------------------+------------------+------------------+\n");
    for (int i = 0; i < count_idf_cst; i++) {
        printf("| %-16s | %-16s | %-16s | %-16.2f |\n", 
            ts_idf_cst[i].name, 
            ts_idf_cst[i].code, 
            ts_idf_cst[i].type, 
            ts_idf_cst[i].value);
    }
    if (count_idf_cst == 0) printf("|     (vide)       |                  |                  |                  |\n");
    printf("+------------------+------------------+------------------+------------------+\n");

    // Table des séparateurs
    printf("\n***************** Table des symboles SEPARATEURS *****************\n");
    printf("+------------------+------------------+\n");
    printf("|      Name        |      Code        |\n");
    printf("+------------------+------------------+\n");
    for (int i = 0; i < count_sep; i++) {
        printf("| %-16s | %-16s |\n", ts_sep[i].name, ts_sep[i].code);
    }
    if (count_sep == 0) printf("|     (vide)       |                  |\n");
    printf("+------------------+------------------+\n");

    // Table des mots clés
    printf("\n***************** Table des symboles MOTS CLÉS *****************\n");
    printf("+------------------+------------------+\n");
    printf("|      Name        |      Code        |\n");
    printf("+------------------+------------------+\n");
    for (int i = 0; i < count_kw; i++) {
        printf("| %-16s | %-16s |\n", ts_kw[i].name, ts_kw[i].code);
    }
    if (count_kw == 0) printf("|     (vide)       |                  |\n");
    printf("+------------------+------------------+\n");

    printf("\n===============================================================\n");
}

int check_declaration(char entity[]) {
    int pos=search(entity,0);
    if (pos!=-1 && strcmp(ts_idf_cst[pos].type,"")==0) return 0;
    return -1;
    }
void inserttype(char entity[], char type[]){
    int pos;
    pos=search(entity,0);
    if (pos!=-1)
    {
        strcpy(ts_idf_cst[pos].type,type);
    }
    
}

int updateType(char entity[] , char type[]){
    char* x = entity;
    int check = check_declaration(entity);
    if(check == 0) {
        int pos=search(entity,0);
        strcpy(ts_idf_cst[pos].type, type);
    }else{
        return -1;
    } 
    return 0;
}
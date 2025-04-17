#ifndef TS_H
#define TS_H

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char code[20];
    char type[20];
    float value;
} elt_idf_cst;

typedef struct {
    char name[20];
    char code[20];
} elt_kw_sep;

extern elt_idf_cst ts_idf_cst[1000];
extern elt_kw_sep ts_kw[50], ts_sep[50];


// Déclaration des fonctions SEULEMENT
int search(char entity[], int t);
int insert(char entity[], char code[], char type[], float value, int t);
void print(void);
int check_declaration(char entity[]);
void inserttype(char entity[], char type[]);
int updateType(char entity[] , char type[]);
// ... autres prototypes


#endif

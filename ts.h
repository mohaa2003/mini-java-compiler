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

// Déclaration des fonctions SEULEMENT
int search(char entity[], int t);
int insert(char entity[], char code[], char type[], float value, int t);
void print(void);
// ... autres prototypes

#endif

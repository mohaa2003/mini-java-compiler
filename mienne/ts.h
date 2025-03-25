// #ifndef MON_FICHIER_H
// #define MON_FICHIER_H


// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     char name[20];
//     char code [20];
//     char type[20];
//     float value;
//     } elt_idf_cst;


// typedef struct {
//     char name[20];
//     char code [20];
//     } elt_kw_sep;


// elt_idf_cst ts_idf_cst[1000];
// elt_kw_sep ts_kw[50], ts_sep[50];
// int count_idf_cst=0, count_kw=0, count_sep=0;//compteurs globaux pour les tables de symboles


// int search(char entity[], int t) {
//     int i = 0;
//     switch (t) {
//         case 0:
//             while (i < count_idf_cst) {
//                 if (strcmp(entity, ts_idf_cst[i].name) == 0) return i;
//                 i++;
//             }
//             return -1;

//         case 1:
//             while (i < count_sep) {
//                 if (strcmp(entity, ts_sep[i].name) == 0) return i;
//                 i++;
//             }
//             return -1;

//         case 2:
//             while (i < count_kw) {
//                 if (strcmp(entity, ts_kw[i].name) == 0) return i;
//                 i++;
//             }
//             return -1;
//     }
// }


// int insert(char entity[], char code[], char type[], float value, int t){
//     switch (t){
//         case 0:
//             if (search(entity,0) == -1) {
//                 strcpy(ts_idf_cst[count_idf_cst].name, entity);
//                 strcpy(ts_idf_cst[count_idf_cst].code, code);
//                 strcpy(ts_idf_cst[count_idf_cst].type, type);
//                 ts_idf_cst[count_idf_cst].value = value;
//                 count_idf_cst++;
//             }
//             break;

//         case 1:
//             if (search(entity,1) == -1) {
//                 strcpy(ts_sep[count_sep].name, entity);
//                 strcpy(ts_sep[count_sep].code, code);
//                 count_sep++;
//             }
//             break;

//         case 2:
//             if (search(entity,2) == -1) {
//                 strcpy(ts_kw[count_kw].name, entity);
//                 strcpy(ts_kw[count_kw].code, code);
//                 count_kw++;
//             }
//             break;
//     }
// }


// void print() {
//     printf("\n/****************Table des symboles IDF****************/\n");
//     printf("---------------------------------------------\n");
//     printf("\t|        Name        |   Code   |     Type     |   Value    |\n");
//     printf("---------------------------------------------\n");
    
//     int i = 0;
//     while (i < count_idf_cst) {
//         printf("\t|%20s | %10s | %14s | %12f |\n", 
//                ts_idf_cst[i].name, ts_idf_cst[i].code, ts_idf_cst[i].type, ts_idf_cst[i].value);
//         i++;
//     }

//     printf("\n/************Table des symboles Séparateurs************/\n");
//     printf("\n-------------------------------\n");
//     printf("\t|        Name        |   Code   |\n");
//     printf("-------------------------------\n");
    
//     i = 0;
//     while (i < count_sep) {
//         printf("\t|%20s | %10s |\n", ts_sep[i].name, ts_sep[i].code);
//         i++;
//     }

//     printf("\n/************Table des symboles mots clés************/\n");
//     printf("\n-------------------------------\n");
//     printf("\t|        Name        |   Code   |\n");
//     printf("-------------------------------\n");
    
//     i = 0;
//     while (i < count_kw) {
//         printf("\t|%20s | %10s |\n", ts_kw[i].name, ts_kw[i].code);
//         i++;
//     }
// }


// int check_declaration(char entity[]) {
//     int pos=search(entity,0);
//     if (pos!=-1 && strcmp(ts_idf_cst[pos].type,"")==0)
//     return 0;
//     return -1;
//     }


//     void insert_type(char entity[], char type[]) {
//         strcpy(ts_idf_cst[count_idf_cst].type, type);
//     }
    
// #endif //pour eviter la redifinition

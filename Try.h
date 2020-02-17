#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#ifndef DATA_A
#define DATA_A

typedef struct STumpuk Tumpuk;
typedef struct SGeneral General;

struct STumpuk{
    int x;
    int y;
};

struct SGeneral{
    char path_name[10][100];
    Tumpuk t1[100];
};


int i,many_structs,many_paths[1000],j;

#endif

 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

extern int *prezenta2(int , int );
extern int *activitate2(int , int );
extern void afisare_prezenta(int, int **);
//extern void citire_grupa1(struct grupa *);
extern char ***alloc_matrix(int ,int );
extern void free_matrix(char **,int );
extern char *aloc_vector(int);

struct grupa
{
    char nume[30][25];
    int numar;

} v[6];

struct elev
{
    char nume[30][25];
    int note[10];
    int absente[10];

} el[90];






#endif // HEADER_H_INCLUDED

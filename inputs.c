#include "header.h"


int *aloc_vector_int(int m)
{
    int *vector = (int*)calloc(m,sizeof(int));

    return vector;
}

/*
void *citire_grupa1(struct grupa **v)
{
    int i = 0, j = 0, n = 0;
    printf("Numarul de grupe: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)

    {
       printf("Grupa %d\n",i + 1);
       printf("Numarul elevilor: ");
       scanf("%d",&(v[i]->numar));

       for( j = 0; j < v[i]->numar; j++)
       {
           printf("%d. ",j + 1);
           scanf("%s", v[i]->nume[j]);
       }
    }
}
*/


int *prezenta2(int n, int nr)
{
    int w = 0 , k = 0, j = 0, *prezenta1 = aloc_vector_int(30);

      printf("Tastati 1 pentru prezent si 0 pentru absent\n");

        for(j = 0; j < nr; j++)
       {

        printf("%s ",v[n-1].nume[j]);
        scanf("%d",&w);
        if(w == 1)
            prezenta1[k]++;
        k++;
        }
    return prezenta1;
}

/*
void afisare_prezenta(int n, int **prezenta)
{
    int i = 0, j = 0;

   for(i = 0; i < n ;i++)
        for(j = 0; j < v[i].numar; j++)
        {
            printf("DA");
            printf("%s a fost prezent de %d ori\n",v[i].nume[j],prezenta[i][j]);
        }
}  */


int *activitate2(int n, int nr)
{
    int k = 0, j = 0, *activitate1 = aloc_vector_int(30);
    char w[5];

      printf("Tastati + daca elevul a fost activ sau 0 daca nu a fost. \n");

        for(j = 0; j < nr; j++)
       {

        printf("%s ",v[n-1].nume[j]);
        scanf("%s",&w);
        if(strcmp(w,"+") == 0)
            activitate1[k]++;
        k++;
        }
    return activitate1;
}

void observatii(FILE *fptr)
{

    char observatii[250];
    int x;
    printf("Scrieti observatiile: \n");
    scanf("%*d",&x);
    gets(observatii);
    fprintf(fptr,"%s",observatii);
    fclose(fptr);
}

void meniu()
{
    printf("Alegeti o optiune: \n");
    printf("1.Prezenta \n");
    printf("2.Activitate \n");
    printf("3.Observatii  \n");
    printf("4.Afiseaza prezenta \n");
    printf("5.Afiseaza activitatea \n");
    printf("6.Corectarea prezentei \n");
    printf("7.Note\n");
    printf("8.Medii finale\n");

    printf("0.Inchideti programul \n");
}






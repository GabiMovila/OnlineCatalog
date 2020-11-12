#include "header.h"

int note()
{
    int nr_grupa = 0, j = 0, k = 0,int i = 0;

    printf("Alegeti grupa \n");
    scanf("%d",&nr_grupa);

    printf("\nAlegeti numarul elevului\n");

    for(j = 0; j < v[nr_grupa].numar; j++)
        {
            printf("%d.%s \n", k, &v[i].nume[j]);
            k ++;
        }
    printf("-1. Iesire\n");
    scanf("%d",&k);
    if(k == -1)
        return 1;
    i = 0;
    printf("Dati nota: ");
    while(k != -1)
    {
       if(el[k].note[i] == 0)
        scanf("%.2f",&el[k].note[i]);
    i ++;
    }
    return 0;
}

float medie_note(int numar,int k)

{
    int i = 0, w = 0;
    float S = 0.00;
    for(i = 0; i < numar; i++)
    {
        S += el[k].note[i];
        w++;
    }
    return S/w;
}

void medie_finala (int n)
{
    int i = 0, j = 0, k = 0, w = 0, medie_note1[90];

   /* printf("Cat % reprezinta partialul?\n");
    scanf("%d",&procent_partial);
    printf("Cat % notele?\n");
    scanf("%d",&procent_note);  */
    for(i = 0; i < n ;i++)
        for(j = 0; j < v[i].numar; j++)
           if(el[k].note[w])
            w++;
           else
            {
               medie_note1[k] = medie_note(w,k);
               k++;
            }
    for(i = 0; i < k -1 ; i ++)
        printf("%d. %d\n",i,medie_note1[i]);
}



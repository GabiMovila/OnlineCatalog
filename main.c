#include "header.h"


int main()
{


    FILE *fptr;
    fptr = fopen("C:\\Users\\Gabi\\Desktop\\Proiect v2.0\\observatii.txt","w");

    if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

    int *prezenta1 = {0},prezenta[3][25] = {0}, *activitate1 = {0}, activitate[3][25] = {0};
    int   n = 0, i =0 , j = 0,w =0, x = 0, *saptamana, c = 1 , nr_note = 0;

    printf("Numarul de grupe: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)

    {
       printf("Grupa %d\n",i + 1);
       printf("Numarul elevilor: ");
       scanf("%d",&v[i].numar);

       for( j = 0; j < v[i].numar; j++)
       {
           printf("%d. ",j + 1);
           scanf("%s", v[i].nume[j]);
       }
    }


    for(i = 0; i < n; i++)
       {
           for(j = 0; j < v[i].numar; j++)
                printf("%s ",&v[i].nume[j]);
            printf("\n");
       }


       while (c)
    {

  /*  printf("Introduceti saptamana: ");
    scanf("%d",&saptamana);
    system("CLS");   */

    meniu();

    scanf("%d", &c);
    system("CLS");
    switch(c)
    {

    case 1:
        printf("Alegeti grupa: ");
        scanf("%d",&w);
        prezenta1 = prezenta2(w,v[w-1].numar);
        for(j = 0; j < v[w - 1].numar; j ++)
            prezenta[w - 1][j] += prezenta1 [j];

        break;


    case 2:

        printf("Alegeti grupa: ");
        scanf("%d",&x);
        activitate1 = activitate2(x,v[x-1].numar);
        for(j = 0; j < v[x - 1].numar; j ++)
            activitate[x - 1][j] += activitate1 [j];

        break;

    case 3:
         observatii(fptr);

        break;

    case 4:
        for(i = 0; i < n ;i++)
        for(j = 0; j < v[i].numar; j++)
        {

            printf("%s a fost prezent de %d ori\n",v[i].nume[j],prezenta[i][j]);
        }
      //  afisare_prezenta(n,prezenta);;
    break;

    case 5:
         for(i = 0; i < n ;i++)
            for(j = 0; j < v[i].numar; j++)
            printf("%s are %d plus-uri pe activitate\n",v[i].nume[j],activitate[i][j]);

    break;

    case 6:


    /**********************************************************************/


    case 7:
     /*   nr_note = note(nr_note);
        printf("Nr note: %d",nr_note);  */

        while(note() != 1)
        {
        }

        for(i = 0; i < n ;i++)
        for(j = 0; j < v[i].numar; j++)
        {

            printf("%s %d%d%d%d ori\n",v[i].nume[j],prezenta[i][j]);
        }
    break;

    case 8:
        medie_finala(n);

    case 0: return 0;
    break;

    }

}







return 0;
}

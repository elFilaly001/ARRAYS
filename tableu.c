#include <stdio.h>

/////////////////////////////// Array \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int main()
{
    // 1 creat array

    // type int float char[];

    int nameArray[5]; // 0 5 - 1;

    // 2 remblire

    // printf("ecrire : ");
    // scanf("%d", &nameArray[0]);

    // nameArray[0] = 5;
    // nameArray[1] = 8;
    // nameArray[2] = 9;
    // nameArray[3] = 15;
    // nameArray[4] = 12;

    // 3 affichire
    // printf("1 %d\n", nameArray[0]);
    // printf("2 %d\n", nameArray[1]);
    // printf("3 %d\n", nameArray[2]);
    // printf("4 %d\n", nameArray[3]);
    // printf("5 %d\n", nameArray[4]);

    // les tableux avec les boucle

    // for(int i = 0 ; i < 10 ; i++){//code}

    // %d = int

    // remblire
    for (int i = 0; i < 5; i++)
    {
        printf("ecrire le nimero  %d : ", i);
        scanf("%d", &nameArray[i]);
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("le nimero  %d : \n", nameArray[i]);
    // }

    // 4 max , min , moyanne
    // max

    // int max = 0;

    // for (int i = 0; i <= 5; i++)
    // {
    //     if (max < nameArray[i])
    //     {
    //         max = nameArray[i];
    //         printf("max = %d \n", max);
    //     }
    // }
    // printf("max = %d \n", max);
    // min

    // int min = nameArray[0];

    // for (int i = 1; i < 5; i++)
    // {
    //     if ( nameArray[i] <  min  )
    //     {
    //         min = nameArray[i];
    //     }
    // }
    // printf("min = %d \n", min);

    // claculer la somme

    // int somme = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     somme += nameArray[i];
    //     printf("somme f = %d \n", somme);
    // }
    // printf("somme = %d \n", somme);

    // // moyenne
    // int size = sizeof(nameArray);
    // printf("size = %d \n", size);
    // int longor = sizeof(nameArray) / sizeof(nameArray[0]);
    // printf("longor = %d \n", longor);

    // float moyen = (float)somme / longor;

    // printf("moyen = %.2f \n", moyen);

    // for(int i = 1 ; i <= 5 ; i++){
    //     printf("i = %d\n",i);//i
    //     for(int j = 1 ; j <= 5 ; j++){

    //         printf("j = %d\n", j);//j

    //         printf("%d * %d = %d\n",i , j ,i * j);//i*j

    //     }

    // }

    // 5 rechirech

    // int rech;
    // int index = 0;
    // printf("entre le valeur suppremi :  ");
    // scanf("%d", &rech);

    // for (int i = 0; i < 5; i++)
    // {

    //     if (rech == nameArray[i])
    //     {
    //         printf("index = %d\n", i);
    //         printf("valeur = %d\n", nameArray[i]);
    //         index = i;
    //         break;
    //     }
    //     else
    //     {
    //         printf("no value");
    //     }
    // }

    // 6 modifier
    // int nv ;
    // printf("neville value");
    // scanf("%d",&nv);

    // nameArray[index] = nv ;

    // 7 suprime

    // for (int i = index; i < 5; i++)
    // {
    //     nameArray[i] = nameArray[i+1];
    // }

    // 8 trie de plus grand au plus petit

    int swap = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (nameArray[i] < nameArray[j])
            {
                swap = nameArray[i];
                nameArray[i] = nameArray[j];
                nameArray[j] = swap;
                
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("le nimero  %d : \n", nameArray[i]);
    }

    return 0;
}
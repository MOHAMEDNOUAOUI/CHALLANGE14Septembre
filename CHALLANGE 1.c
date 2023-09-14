#include <stdio.h>
#include <stdlib.h>
/*Challenge 1 : Paire ou Impaire
Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire*/
int main()
{
    int n;

    printf("enter the number you want Sir! : ");
    scanf("%d",&n);
    if(n%2!=0)
        printf("this number is not pair");
        else if(n%2==0)
            printf("this number is pair!!\n");

            else
                printf("enter a number next time");


    return 0;
}

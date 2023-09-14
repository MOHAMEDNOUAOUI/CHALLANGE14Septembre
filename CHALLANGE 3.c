#include <stdio.h>
#include <stdlib.h>
/*challenge 3*/
int main()
{
    int N1,N2,S;
    printf("programme qui calcule la somme de deux valeurs entiers \n");
    printf("enter your first and second number : ");
    scanf("%d%d",&N1,&N2);
    S=0;
    if(N1!=N2)
        printf("la somme de %d est %d = %d",N1,N2,N1+N2);
    else
        printf("le triple d somme de %d est %d = %d",N1,N2,(N1+N2)*3);

    return 0;
}

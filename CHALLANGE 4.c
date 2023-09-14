#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int delta,a,b,c;
    float s,x1,x2;

    printf("programme C qui permet de calculer les solutions possible d une equation 2eme degre.\n");
    printf("entrer a,b,c :");
    scanf("%d%d%d",&a,&b,&c);

/*example a=2
 ; b=−9
 ;  c=−5
 Δ=b2−4ac=121;*/

    delta=(pow(b,2))-(4*a*c);
    printf("delta is %d\n",delta);
    if (delta==0){
            s=(-b/(2*a));
        printf("there is only one solution = %f",s);
    }
    else if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("the solutions are x1 = %f and x2 = %f",x1,x2);
    }
    else
     printf("there is no solution for this equation");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*Challenge 2 :
Ecrivez un programme en C qui vérifie si un caractère saisi par
l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.*/
int main()
{
    char C;
    printf("enter a character : ");
    scanf("%c",&C);

    switch(C){
case 'A':
    {printf("%c est voyelle",C);
    break;
    }
    case 'U':
    {printf("%c est voyelle",C);
    break;
    }
    case 'E':
    {printf("%c est voyelle",C);
    break;
    }
    case 'I':
    {printf("%c est voyelle",C);
    break;
    }
    case 'O':
    {printf("%c est voyelle",C);
    break;
    }
    case 'Y':
    {printf("%c est voyelle",C);
    break;
    }
    default:
        printf("this character you entred is not voyelle");


    }
    return 0;
}

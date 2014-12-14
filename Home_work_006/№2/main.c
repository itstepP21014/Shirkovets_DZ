#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Hello, enter the number a:\n");
    scanf("%d",&a);
    int b;
    printf("Hello, enter the number b:\n");
    scanf("%d",&b);
    int resultat;
    int Ostatok;
    int c;
    if (a>b)
     {
        c=a;
        while (Ostatok!=0)
        {
         resultat=a;
         Ostatok=a%b;
         a+=c;
        }

    }
    else
    {if (a<b)
    {
        c=b;
        while (Ostatok!=0)
        {
         resultat=b;
         Ostatok=b%a;
         b+=c;
        }


     resultat=b;
    }
    }

    printf("NOK of two your numbers:%d",resultat);
    return 0;
    }

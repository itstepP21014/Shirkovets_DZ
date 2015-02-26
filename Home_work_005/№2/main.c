#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,p;
    printf("Enter the number x:");
    scanf("%d",&x);
    printf("Enter the stepen p:");
    scanf("%d",&p);
    x= pow(x,p);
  printf("%d^%d\n",&x,&p);


    return 0;
}

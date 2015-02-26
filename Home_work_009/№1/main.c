#include <stdio.h>
#include <stdlib.h>
int main()
{
int m,n;
printf("Input two numbers: ");
scanf("%d%d",&n,&m);
for(int i=0;i<n;i++){
for(int p=0;p<m;p++){
i%2==0?
printf("%c", p%2==0?'*':' '):
printf("%c", p!=0?'*':' ');
}
printf("\n");
}
return 0;
}

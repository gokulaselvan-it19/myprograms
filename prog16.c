#include <stdio.h>
int main() {
  int a,i,n;
 printf("Enter the number:");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      a=a+i;
  }
   printf("Sum of the number %d is %d",n,a);
    return 0;
}


#include<stdio.h>

int main()
{
int x,y,z;
printf("enter any three numbers:\t");
scanf("%d %d %d",&x,&y,&z);
if((x>y) && (x>z))
{
printf("%d is the greatest number",x);
}
else if((y>x) && (y>z))
{
printf("%d is the greatest number",y);
}
else if((z>x) && (z>y))
{
printf("%d is the greatest number",z);
}
return 0;
}

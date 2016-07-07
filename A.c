#include<stdio.h>
int main()
{
int n,k=1;
int a[1000]={0,1};
a[0]=3;
a[1]=4;
for(int m=0;m<1000;m++)
{
a[++k]=(a[m]*10)+3;
a[++k]=(a[m]*10)+4;
}
scanf("%d",&n);
printf("%d",a[n-1]);
return 0;
}

#include<stdio.h>

int main()
{
    int n,m,min,max,l,k,o;
    scanf("%d %d",&n,&m);
    max=(n-m)*(n-m+1)/2;
    l=n%m;
    k=n/m;
    o=n/m+1;
    min=(m-l)*(k-1)*(k)/2+l*o*(o-1)/2;
    printf("%d %d\n",max,min);
    return 0;
}
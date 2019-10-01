#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i;
    char a[100];
    scanf("%s\n",&a);
    
    a[0]= toupper(a[0]);
    printf("%s\n",a);
    return 0;
}
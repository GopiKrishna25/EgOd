#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    
    
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='A')
        a[i]='0';
            else if(a[i]=='O')
            a[i]='0';
                else if(a[i]=='Y')
                a[i]='0';
                    else if(a[i]=='E')
                    a[i]='0';
                        else if(a[i]=='U')
                        a[i]='0';
                            else if(a[i]=='I')
                            a[i]='0';
                                else if(a[i]=='a')
                                a[i]='0';
                                    else if(a[i]=='o')
                                    a[i]='0';
                                        else if(a[i]=='y')
                                        a[i]='0';
                                            else if(a[i]=='e')
                                            a[i]='0';
                                                else if(a[i]=='u')
                                                a[i]='0';
                                                    if(a[i]=='i')
                                                    a[i]='0';
    }
    
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]!='0')
        {
            printf(".%c",a[i]);
        }
    }

    return 0;
}

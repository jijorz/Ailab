#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,k,flag=0;
    char var[15],typ[15],b[15],c ;
    printf("enter the number of variable :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the variable [%d]:",i);
        scanf("%c",&var[15]);
        printf("enter the varisblke - type[%d](float-f,int-i):",i);
        scanf("%c",&var[i]);
        if(typ[i]=='f')
        {flag=1;}
            }
            printf("enter the expression (end with $):");
            i=0;
            getchar();
            while ((c=getchar())!='$')
            {
                b[i]=c;
                i++;
            }
                k=1;
                for(i=0;i<k;i++)
                {
                    if(b[i]=='/')
                    {
                        flag=1;
                        break;
                    }
                }
                for(i=0;i<n;i++)
                {
                    if(b[0]==var[i])
                    {
                        if(flag==1)
                        {
                            if(typ[1]=='f')
                            {
                                printf("the datatype is correctly defined ...!");
                                break;
                            }
                            else
                            {
                                printf("identifier %c must be a float type...!",var[i]);
                                break;
                            }
                        }
                        else
                        {
                            printf("the datatype is correctly defined ...!");
                            break;
                        }
                    }
                }
                return 0;
}

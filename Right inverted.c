#include<stdio.h>
int main()
{
    int n,row,col,space;
    printf("enter the no of rows:");
    scanf("%d",&n);
   
    for(row=0;row<=n;row++)
    {
        for(col=0;col<row;col++)
        {
        printf(" ");
        }
        for(space=row;space<=n;space++)
            {
            printf("*");
            }
            
         printf("\n");
         }
    return 0;
    }

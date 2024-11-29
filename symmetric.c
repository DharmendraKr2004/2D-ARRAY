#include<stdio.h>
int main()
{
    int r,c,i,j,flag=0;
    printf("Enter the No of Rows amd Columns:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the (%d %d)th element :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=1;
                break;

            }
            
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    printf("Not Symmetric");
    else
    printf("Symmetric");

    }
    else
    printf("Not a square matrix");
    return 0;

}

#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("Enter the No of Rows and Columns :");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the (%d%d)th element",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The First Matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the No of Rows and Columns :");
    scanf("%d%d",&r2,&c2);
    int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the (%d%d)th element",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The Second Matrix is :\n");
    for(i=0;i<r2;i++)    
    {
        for(j=0;j<c2;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    if(c1==r2)
    {
        int c[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {

                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];

                }
                
            }
        }
        printf("The Matrix Multiplication :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }
    return 0;
}
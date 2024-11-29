#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the no of rows and columns :");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the (%d%d)th element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }   
    printf("The matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int trans[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=a[i][j];
        }
        
    }
    printf("The transpose of matrix is :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
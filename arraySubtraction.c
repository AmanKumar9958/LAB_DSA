#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], d[3][3], i, j, k;
    printf("Enter the element of matrix A: ");
    for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                {
                    scanf("%d", &a[i][j]);
                }
        }
    printf("Enter the element of matrix B: ");
    for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                {
                    scanf("%d", &b[i][j]);
                }
        }
    //FOR SUBTRACTION
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j]= a[i][j]-b[i][j];
        }
        
    }
    printf("SUBTRACTION of two matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        
    printf("\n");
    }
    
    getch();
    return 0;
    
}
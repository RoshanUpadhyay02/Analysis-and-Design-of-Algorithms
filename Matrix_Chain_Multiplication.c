#include <stdio.h>
#include <limits.h>

int Matrix_mul(int d[], int n)
{
    int i,j,k,l;
    int M[n][n];

    for(i=1;i<n;i++)
        M[i][i] = 0;
    
    for(l=2;l<n;l++)
    {
        for(i=1;i<n;i++)
        {
            j = i+l-1;
            M[i][j] = INT_MAX;
            for(k=i;k<j;k++)
            {
                int value = M[i][k] + M[k+1][j] + d[i-1]*d[k]*d[j];
                if(value < M[i][j])
                    M[i][j] = value;
            }
        }
    }
    return M[1][n-1];

}

int main()
{
    int n,i;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int m[n];

    for(i=0;i<n;i++)
        scanf("%d",&m[i]);

    printf("The min no. of multiplications are: %d",Matrix_mul(m,n));

    return 0;
}
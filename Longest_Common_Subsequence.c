#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int longest_subsequence(char *s1, char *s2, int n, int m)
{
    int L[n+1][m+1];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1])
            {
                L[i][j] = 1 + L[i-1][j-1];
            }
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[n][m];
}

int main()
{
    int n,m;
    printf("Enter the size of the string: ");
    scanf("%d",&n);
    
    char s1[n];
    scanf("%s",s1);
    
    printf("Enter the size of second string: ");
    scanf("%d",&m);
    
    char s2[m];
    scanf("%s",s2);
    
    printf("The longest subsequence is: %d",longest_subsequence(s2,s1,m,n));

    return 0;
}

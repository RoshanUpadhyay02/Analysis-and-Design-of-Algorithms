# include <stdio.h>

void unique(int a[],int n)
{
    int i,j,v[n];

    for(i=0;i<n;i++)
        v[i] = 0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                v[i] = -1;
                v[j] = -1;
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(v[i] != -1)
            printf("%d",a[i]);
    }

}

int main()
{
    int n,i,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    unique(arr,n);
    return 0;
}
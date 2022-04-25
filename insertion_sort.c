# include <stdio.h>

void sort(int a[],int n)
{
    int i,key,j;
    for(i=1;i<=n;i++)
    {
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}

int main()
{
    int n,i,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n);
    return 0;
}
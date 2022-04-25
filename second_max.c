# include <stdio.h>

int second_max(int a[],int n)
{
    int max_1 = -1000, max_2 = -1000,i;

    for(i=0;i<n;i++)
    {
        if (a[i] > max_1)
        {
            max_2 = max_1;
            max_1 = a[i];
        }
        else if(a[i] > max_2 && a[i] < max_1)
            max_2 = a[i];
    }
    return max_2;
}

int main()
{
    int n,i,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    a = second_max(arr,n);
    printf("max_2 = %d",a);
    return 0;
}
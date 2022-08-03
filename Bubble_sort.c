#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp  = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The Sorted elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n,i;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubble_sort(a,n);

    return 0;
}
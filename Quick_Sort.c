#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Partition(int a[], int l, int h)
{
    int p = a[l];
    int i = l;
    int j = h;
    while(i < j)
    {
        while(a[i] < p)
        {
            i++;
        }
        while(a[j] > p)
        {
            j--;
        }
        if(i < j)
            swap(&a[i],&a[j]);
    }
    if(i >= j)
        swap(&p,&a[j]);
    return j;
}

int *Quicksort(int a[], int l, int h)
{
    if(l == h)
        return a;
    else
    {
        if(l<h)
        {
            int s = Partition(a,l,h);
            Quicksort(a,l,s-1);
            Quicksort(a,s+1,h);
        }
    }
    return a;
}

int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int a[n], *z;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    z = Quicksort(a,0,n-1);

    printf("Sorted Elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",z[i]);

    printf("\n\n");

    return 0;
}
#include <stdio.h>

void Merge(int arr[],int l,int h,int mid)
{

    int i,j,k,p,q;
    int n1 = mid - l + 1;
    int n2 = h - mid;

    int a[n1], b[n2];

    for(i=0;i<n1;i++)
        a[i] = arr[l+i];

    for(j=0;j<n2;j++)
        b[j] = arr[mid+1+j];

    i=0,j=0,k=l;

    p = n1;
    q = n2;
    while(i < p && j < q)
    {
        if(a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < p)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < q)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

int *Mergesort(int arr[], int l, int h)
{
    if(l == h)
        return arr;
    else
    {
        if(l<h)
        {
            int mid = (l + h)/2;
            Mergesort(arr,l,mid);
            Mergesort(arr,mid+1,h);
            Merge(arr,l,h,mid);
        }
    }
    return arr;
}

int main()
{
    int n,i,l,h;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n], *a;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    l = 0;
    h = n-1;
    a = Mergesort(arr,l,h);

    printf("The Sorted Elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\n");

    return 0;
}
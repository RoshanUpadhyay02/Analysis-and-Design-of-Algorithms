#include <stdio.h>

int merge(int arr[],int l,int h,int mid)
{
    int i,j,k,p,q;

    p = mid-l+1;
    q = h-mid;

    int a[p], b[q];
    
    for(i=0;i<p;i++)
        a[i] = arr[l+i];

    for(j=0;j<q;j++)
        b[j] = arr[mid+1+j];

    i = 0;
    j = 0;
    k = l;

    while(i < p && j < q)
    {
        if(a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else if(a[i] > b[j])
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

int merge_sort(int a[],int l,int h)
{
    if(l == h)
        return a[l];
    else
    {
        int mid = (l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,h,mid);
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

    merge_sort(a,0,n-1); 

    printf("The Sorted elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");  

    return 0;
}
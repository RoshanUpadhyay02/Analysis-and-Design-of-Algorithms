# include <stdio.h>

int search(int a[], int l, int h, int key)
{
    int mid = l + (h-l)/2;
    if(l >= h)
        return -1;
    if(a[mid] ==  key)
        return mid;
    else if(a[mid] < key)
        return search(a,mid+1,h,key);
    else
        return search(a,l,mid-1,key);
}

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    int a[n],i,x,z;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n Enter the no. to search: ");
    scanf("%d",&x);

    z = search(a,0,n-1,x);

    if(z == -1)
        printf("Not Found\n");
    else 
        printf("Found at index: %d\n",z);
    
    return 0;
}
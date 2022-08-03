#include <stdio.h>

int min_max(int a[],int l,int h,int *min,int *max)
{
    if(l == h)
    {
        if(*max < a[l])
            *max = a[l];
        if(*min > a[l])
            *min = a[l];
        return 0;
    }
    if(l == h-1)
    {
        if(a[l] > a[h])
        {
            if(*max < a[l])
                *max = a[l];
            if(*min > a[h])
                *min = a[h];
        }
        else
        {
            if(*max < a[h])
                *max = a[h];
            if(*min > a[l])
                *min = a[l];
        }
        return 0;
    }
    else
    {
        int mid = (l+h)/2;

        min_max(a,l,mid,min,max);
        min_max(a,mid+1,h,min,max);
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
        scanf("%d",&a[i]);

    int min = a[0], max = a[0];

    min_max(a,0,n-1,&min,&max);

    printf("Minimum Element is: %d\nMaximum Element is: %d\n\n",min,max);

    return 0;
}
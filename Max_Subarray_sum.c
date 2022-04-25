#include <stdio.h>

int max(int x,int y,int z)
{
    if(x > y && x > z)
        return x;
    else if(y > x && y > z)
        return y;
    else
        return z;
}

int crossum(int a[], int l, int h, int mid)
{
    int i,sum=0,lhs=0,rhs=0,s=0,j;
    for(i=mid;i>=l;i--)
    {
        s = s + a[i];
        if(lhs < s)
            lhs = s;
    }   
    s = 0;
    for(j=mid+1;j<=h;j++)
    {
        s = s + a[j];
        if(rhs < s)
            rhs = s;
    }
    return (max(lhs,rhs,lhs+rhs));
}

int maxsum(int a[], int l, int h)
{
    if(l == h)
        return a[l];
    else
    {
        int mid = (l+h)/2;
        return(maxsum(a,l,mid),maxsum(a,mid+1,h),crossum(a,l,h,mid));
    }
}

int main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int a[n],i;

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int z = maxsum(a,0,n-1);

    printf("The maximum Subarray sum is: %d\n\n",z);
}
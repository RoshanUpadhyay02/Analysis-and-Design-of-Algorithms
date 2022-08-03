#include <stdio.h>

int linear_search(int a[],int n,int target)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] == target)
            return i;
    }

    return -1;
}

int main()
{
    int n,i,target;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the target value: ");
    scanf("%d",&target);

    int ans = linear_search(a,n,target);

    if(ans == -1)
        printf("VALUE NOT FOUND!");
    else
    {
        printf("VALUE FOUND AT : %d",ans+1);
    }

    return 0;
}
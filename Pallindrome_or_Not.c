#include <stdio.H.>

void Pallindrome(int a[], int n)
{
    
}

int main()
{
    int n,i,x;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    Pallindrome(arr,n);
    
    return 0;
}
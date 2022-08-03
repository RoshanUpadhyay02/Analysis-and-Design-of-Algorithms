#include <stdio.h>

void swap(int *x,int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

void swap_f(float *x,float *y)
{
    float temp = *y;
    *y = *x;
    *x = temp;
}

int main()
{
    int n,i,j;

    printf("Enter the no. of items: ");
    scanf("%d",&n);

    int p[n],w[n],m;
    float p_w[n];

    printf("Enter the profits: ");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Enter the weights: ");
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);

    printf("Enter the Bag capacity: ");
    scanf("%d",&m);

    printf("Profit/Weight: ");
    for(i=0;i<n;i++)
        p_w[i] = (float)p[i]/w[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p_w[j] < p_w[j+1])
            {
                swap_f(&p_w[j],&p_w[j+1]);
                swap(&p[j],&p[j+1]);
                swap(&w[j],&w[j+1]);
            }
        }
    }

    printf("\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",w[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%.4f ",p_w[i]);
    }


    float x[n],profit = 0.0;

    for(i=0;i<n;i++)
        x[i] = 0;
    
    int bs = m;

    i=0;
    while(bs != 0)
    {
        if(bs < w[i])
        {
            x[i] = (float)bs/w[i];
            profit += x[i]*p[i];
            bs = 0;
        }
        if(bs > w[i])
        {
            x[i] = 1;
            profit += x[i]*p[i];
            bs -= w[i];
        }
        i++;

    }

    printf("\n\nThe maximum profit is: %.4f\n",profit);

    return 0;
}
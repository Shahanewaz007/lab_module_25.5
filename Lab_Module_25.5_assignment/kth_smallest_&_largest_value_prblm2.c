#include<stdio.h>

void get_sorted_array(int ar[], int sz);

int get_kth_largest_value(int ar[], int n, int k);

int get_kth_smallest_value(int ar[], int n, int k);

int main()
{
    int n;

    scanf("%d",&n);

    int ar[n+1];

    for(int i=1; i<=n; i++)
        scanf("%d",&ar[i]);

    get_sorted_array(ar,n);

    int k;
    scanf("%d",&k);

    int val1, val2;

    val1 = get_kth_largest_value(ar,n,k);
    val2 = get_kth_smallest_value(ar,n,k);

    printf("\n%dth largest element = %d\n", k, val1);
    printf("%dth smallest element = %d\n", k, val2);

    return 0;
}

void get_sorted_array(int ar[], int sz)
{
    for(int i=1; i<=sz; i++)
    {
        for(int j=1; j<=sz-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp;
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
}

int get_kth_largest_value(int ar[], int n, int k)
{
    int count=0;
    for(int i=n; i>=1; i--)
    {
        count++;
        if(count==k)
        {
            return ar[i];
        }
    }
}

int get_kth_smallest_value(int ar[], int n, int k)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        count++;
        if(count==k)
        {
            return ar[i];
        }
    }
}

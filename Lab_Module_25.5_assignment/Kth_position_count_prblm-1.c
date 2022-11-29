#include<stdio.h>

void array_input(int ar[], int sz)
{
    for(int i=0; i<sz; i++)
        scanf("%d",&ar[i]);
}

void get_sorted_array(int ar[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz-1; j++)
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

int get_less_or_greater_kth_count(int ar[], int sz, int key)
{
    int count=0;
    for(int i=0; i<sz; i++)
    {
        if(ar[i]==key)
        {
            continue;
        }
        else
            count++;
    }

    return count;
}

int main()
{
    int n;

    scanf("%d",&n);

    int ar[n+1];

    array_input(ar,n);

    get_sorted_array(ar,n);

    int k;
    scanf("%d",&k);

    int val;
    val = get_less_or_greater_kth_count(ar,n,k);

    printf("\n%d\n",val);

    return 0;
}

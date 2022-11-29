#include<stdio.h>

void reverse_print(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        reverse_print(n-1);
    }

}

int main()
{
    int n;

    scanf("%d",&n);

    reverse_print(n);


    return 0;
}

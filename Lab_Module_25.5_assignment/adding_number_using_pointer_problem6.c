#include<stdio.h>

int adding_numbers(int* a, int* b, int* c)
{
    return *a+*b+*c;
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sum = adding_numbers(&a, &b, &c);

    printf("SUM = %d",sum);


    return 0;
}

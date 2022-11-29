 #include<stdio.h>

 int get_addition_using_recursion(int n)
 {
     if(n==1)
     {
         return 1;
     }
     else
        return n + get_addition_using_recursion(n-1);
 }

 int main()
 {
     int n;

     scanf("%d",&n);

     int val;

     val = get_addition_using_recursion(n);

     printf("%d\n",val);


     return 0;
 }

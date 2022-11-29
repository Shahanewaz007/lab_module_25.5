#include<stdio.h>
#include<string.h>
#include<math.h>

int two_power_or_not(char s[], int n);

int main()
{
   char s[100];

   scanf("%s",s);

   int n = strlen(s);

   int val;

   val = two_power_or_not(s,n);

   if(val==0)
   {
       printf("N0\n");
   }
   else
    printf("YES\ncost = 2^%d",val);


    return 0;
}

int two_power_or_not(char s[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += (s[i]-'a')+1;
    }



    for(int i=1; i<=50; i++)
    {
        if(pow(2,i)==sum)
        {
            return i;
        }
        else if(pow(2,i)>sum)
        {
            break;
        }
    }
    return 0;

}

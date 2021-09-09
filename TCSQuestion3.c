#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long number;
    int odd=0,even=0;
    int i=0,diff,n;
    scanf("%lld",&number);
    while(number !=0)
    {
        if (i%2==0)
        {
            even=even +number%10;
            number=number/10;
            i++;
                               }
        else
        {
            odd =odd+number%10;
            number=number/10;
            i++;
            
        }
        
    }
    printf("difference=%d",abs(odd-even));
    return 0;

}
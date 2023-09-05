//wap to check whether a number is even or odd.
#include <stdio.h>
int main()
{
    int n;
    printf("\n enter a number=");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n entered number is even.");
    }
    else
    {
        printf("\n entered number is odd.");
    }
    printf("\n Thank you.");
    return 0;
}
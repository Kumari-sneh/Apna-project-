//wap to find the average of n no.
#include<stdint.h>

int main()
{
    int i,n;
    float avg,sum=0,a[100];
    printf("\n enter number of terms for array=");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%e",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%f",sum);
    avg=sum/n;
    printf("average=%f",avg);
    printf("Thank you.");
    return 0;
}




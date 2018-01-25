#include <stdio.h>
 
int main(void)
{
    int n,k,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    int max=a[0],max_i=0;
    for(int i=1;i<k;i++)
        if(max<a[i])
        {
            max=a[i];
            max_i=i;
        }
    printf("%d ",max);
    for(int i=1;i<=n-k;i++)
    {
        if(a[i+k-1]>max)
        {
            max=a[i+k-1];
            max_i=i+k-1;
        }
        else if(i>max_i)
        {
            max=a[i];
            max_i=i;
            for(int j=i+1;j<i+k;j++)
                if(a[j]>max)
                {
                    max=a[j];
                    max_i=j;
                }
        }
        printf("%d ",max);
    }
    return 0;
} 

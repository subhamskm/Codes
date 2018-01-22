#include <iostream>
#include <climits>
 
using namespace std;
 
int main(void)
{
    long long t,n,b,a[1000000];
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long start=0,end=0,l=0;
        long long sum=0,min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            end++;
            while(sum>b)
                sum-=a[start++];
            if(l<(end-start))
            {
                min=sum;
                l=end-start;
            }
            else if(l==(end-start)&&sum<min)
                min=sum;
        }
        cout<<min<<" "<<l<<endl;
    }
} 

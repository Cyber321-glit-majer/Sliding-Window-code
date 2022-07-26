
#include <bits/stdc++.h>

using namespace std;
int kadan(int a[],int n)
{
    int mx_far=INT_MIN;
    int mx_end=0;
    for(int i=0;i<n;i++)
    {
        mx_end+=a[i];
        if(mx_far<mx_end)
        {
            mx_far=mx_end;
        }
        if(mx_end<0)
        {
            mx_end=0;
        }
    }
    return mx_far;
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadan(a,n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=sum+kadan(a,n);
    cout<<max(wrapsum,nonwrapsum);

    return 0;
}

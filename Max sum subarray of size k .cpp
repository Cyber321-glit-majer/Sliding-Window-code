
#include <iostream>

using namespace std;
void solve(int a[],int n,int k)
{
    int sum=0;
 
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
  int curr=sum;
    for(int i=k;i<n;i++)
    {
        curr+=a[i]-a[i-k];
       sum=max(sum,curr);
    }
    cout<<sum;
    
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
    int k;
    cin>>k;
   
    solve(a,n,k);
    

    return 0;
}

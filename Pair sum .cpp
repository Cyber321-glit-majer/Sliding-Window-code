
#include <bits/stdc++.h>

using namespace std;
bool solve(int a[],int n,int k)
{
   int l=0;
   int h=n-1;
   while(l<h)

    {
        //int sum=a[l]+a[h];
        if(a[l]+a[h]==k)
        {
            cout<<l<< " "<<h<<endl;
            return true;
            
        }
        else if(a[l]+a[h]>k)
        {
            h--;
        }
        else
        {
            l++;
        }
        
    }
    return false; 
}

int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }int k;
     cin>>k;
     cout<<solve(a,n,k);
    

    return 0;
}

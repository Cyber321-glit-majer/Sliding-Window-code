/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
void solve(int a[],int n)
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
    cout<<mx_far;
    
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
     solve(a,n);

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        n=n-3;
        cout<<n/2+1<<endl;
        for(i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}

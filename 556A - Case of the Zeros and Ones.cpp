#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(char ch : s )
    {
        if(ch=='1')
            a++;
        else
            b++;
    }
    cout<<abs(a-b)<<endl;
    return 0;
}

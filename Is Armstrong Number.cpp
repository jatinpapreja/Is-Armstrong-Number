#include<iostream>
using namespace std;
int main()
{
    int n,r,q,sum=0;
    cin>>n;
    q=n;
    while(n)
    {
        r=n%10;
        sum += r*r*r;
        n=n/10;
    }
    if(sum==q)cout<<"true";
    else cout<<"false";
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,n,e=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<=b)
            e=b*4+19;
        else
            e = (2*a-b)*4+19;
        cout<<"Case "<<i+1<<": "<<e<<endl;
    }
    return 0;
}

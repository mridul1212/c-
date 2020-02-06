#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
            cout<<"Case "<<i+1<<": Yes"<<endl;
        else
            cout<<"Case "<<i+1<<": no"<<endl;
    }
    return 0;
}

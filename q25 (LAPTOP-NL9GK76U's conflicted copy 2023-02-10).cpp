#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=1;
    cout<<"Enter the value "<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
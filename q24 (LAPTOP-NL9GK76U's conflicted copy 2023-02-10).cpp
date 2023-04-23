#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"even number"<<endl;
        }
        i=i+1;
    }
    cout<<even<<endl;
}

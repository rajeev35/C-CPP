#include<iostream>
using namespace std;
int main()
{
   int n;
   int i=2;
    cout<<"Enter the value"<<endl;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime "<<endl;
        }
        i=i+1;
        
    }
    

}
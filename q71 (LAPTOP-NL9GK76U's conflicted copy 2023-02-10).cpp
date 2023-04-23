#include<iostream>
using namespace std;
int power()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int ans =1;
    for(int i=0;i<=b;i++){
    ans=ans*a;
    }
    return ans;
}
int main()
{
   cout<<"Answer is "<<power()<<endl;
   return 0;
}
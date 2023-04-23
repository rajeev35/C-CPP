#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the value of ch"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"this is lower case "<<endl;
    }
    if(ch>='A'&&ch<='Z')
    {
        cout<<"this is upper case"<<endl;

    }
    if(ch>='0'&&ch<='9')
    {
        cout<<"this is an intiger"<<endl;
            }
}
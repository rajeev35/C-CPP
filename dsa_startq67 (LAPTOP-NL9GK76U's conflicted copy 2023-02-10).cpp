#include<iostream>
using namespace std;
void printArray()
{

}
int main()
{

     int num[15];
     cout<<num[0]<<endl;
     cout<<num[20]<<endl;
     cout<<"Everything is fine "<<endl;
     int second[3]={5,7,11};
     cout<<second[2]<<endl;
     int third[15]={2,5};
     
     int n=15;
     for(int i=0;i<n;i++)
     {
        cout<<third[i]<<" ";
     }
     int fourth[10]={0};
      int a=10;
     for(int i=0;i<a;i++)
     {
        cout<<fourth[i]<<" ";
     }




    return 0;
}
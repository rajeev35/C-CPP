#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<" Printing an array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    cout<<" Printing DONE "<<endl;
}
int main()
{
    int number[15];
    

    cout<< endl<<" Everything is fine "<<endl<<endl;
    cout <<"value at the index 20"<<number[20]<<endl; 
    int second[3]={2,3,5};
    cout<<"Value at the secod index"<<   second[2]  << endl;
    int third[15]={2,7};
    int n=15;
    printArray(third,15);
    int fourth[10]={0};
    n=10;
    printArray(fourth,10);



    return 0;
}
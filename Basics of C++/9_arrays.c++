#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printting the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){

    int num[15];
    cout<<"Value at 14 index: "<<num[14]<<endl; 

    int one[3] = {1,2,3};
    cout<<"value at second index: "<<one[2]<<endl;

    int second[15]= {2,1};
    printArray(second, 15);

    int forth[10] = {0};
    printArray(forth, 10);

    int fifth[10] = {1};
    printArray(fifth, 10);

}
// WAP in c++ to find Maxximum and Minimum element of an array

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;
    cout<<"Enter Array elements: "<<endl;
    int arr[size];
    int MaxValue= INT8_MIN;
    int MinValue = INT8_MAX;  
    //Inputting array elements
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    //Display Array Elements
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
        MaxValue = max(MaxValue,arr[i]);
        MinValue = min(MinValue,arr[i]);         
    }  
    cout<<"\n\nLargest Element is : "<<MaxValue;
    cout<<"\nSnallest Element is : "<<MinValue;
    return 0;
}
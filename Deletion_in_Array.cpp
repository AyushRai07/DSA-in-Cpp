// WAP in c++ to delete element from an array

#include<iostream>
using namespace std;
int main(){
    int arr[50],size,pos,item;
    cout<<"Enter Size of Array : ";
    cin>>size;

    //to make sure user does not input more than 50 elements
    if (size >= 50) {                               
        cout << "Array size exceeds the limit of 50." << endl;
        return 0;
    }

    cout<<"Enter Array elements: "<<endl;
       
    //Inputting array elements
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    //Display Array Elements
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the Position from where you want to delete the element : ";
    cin>>pos;

    //To check a valid position is inputted
    if (pos < 1 || pos > size + 1) {
        cout << "Invalid Position!" << endl;
        return 0;
    }
    else{
        item = arr[pos-1];
    for(int i = pos-1; i<size-1;i++)
    {
        arr[i] = arr[i+1];                 //Shifts Elements to left so that the vacant space after deletion gets occupied
    }
    }
    size--;                                //To decrease arayy size after insertion
    cout<<"\nDeleted Item : "<<item;
    cout<<"\n\n-----------Array after deletion--------------"<<endl;

    //Printing array elements
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;    
}



/* For Deletion at Beginning

for(int i = 0; i>=0-1;i--)
    {
        arr[i] = arr[i+1];                  
    }
    size++;    
*/
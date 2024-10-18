// WAP in c++ to insert element in an array

#include<iostream>
using namespace std;
int main(){
    int arr[50],size,num,pos;
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

    //Printing array elements
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the Number you want to insert : ";
    cin>>num;
    cout<<"\nEnter the Position where you want to insert : ";
    cin>>pos;

    //To check a valid position is inputted
    if (pos < 1 || pos > size + 1) {
        cout << "Invalid Position!" << endl;
        return 0;
    }
    else{
    for(int i = size-1; i>=pos-1;i--)
    {
        arr[i+1] = arr[i];                  //Shifts Elements to right so that the POSITION index becomes vacant
    }
    }
    arr[pos-1] = num;
    size++;                                 //To increase arayy size after insertion

    cout<<"\n-----------Arrray after insertion--------------"<<endl;

    //Printing array elements
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
return 0;
}


/* For insertion at Beginning

for(int i = size-1; i>=0-1;i--)
    {
        arr[i+1] = arr[i];                  
    }
    arr[0] = num;
    size++;    
*/


/* For insertion at End

    if (size < 50) 
    {                           //check OVERFLOW condition
        arr[size] = num;
        size++;             
    } else {
        cout << "Array is full, cannot insert the element!" << endl;
        return 0;
    }    

*/


                                // TIME COMPLEXITY for Insertion

/*
        BEST CASE
    Big Oh(1)   --------Insertion at End

        WORST CASE  
    Big Oh(n)   --------Insertion at Beginning


    Big Oh (n-pos)    ------> Time complexity for insertion in array
*/
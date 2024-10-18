//Brute Force Approach ------ Creates a new array to print the elements in array

#include<iostream>
using namespace std;
    void ReversedArrayBrute(int arr[], int size)
    {
        int RevArray[size];
        for(int i=0 ;i<size;i++)
        {
            RevArray[i]=arr[size-1 - i];
        }
        cout<<"\n\nArray After Reversal"<<endl;
        for(int i=0 ;i<size;i++)
        {
            cout<<RevArray[i]<<" | ";
        }
        cout<<endl;
    }

    // OPTIMAL APPROACH (using two pointers) ----------Overwrites the original array into reversed array

    void ReversedArrayOptimal(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout<<"\n\nReversed Array (Optimal)"<<endl;
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" | ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the Size of Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter Array Elements : ";
    for(int i=0 ;i<size;i++)
        {
            cin>>arr[i];
        }
    cout<<"\nOriginal Array"<<endl;
    for(int i=0 ;i<size;i++)
        {
            cout<<arr[i]<<" | ";
        }
    ReversedArrayBrute(arr,size);
    ReversedArrayOptimal(arr,size);
    return 0;
}

/*
                BRUTE force Approach
    SPACE COMPLEXITY :  O(n)     (since it creates a new array)
    TIME  COMPLEXITY :  O(n)

                Optimal  Approach
    SPACE COMPLEXITY :  O(1)     
    TIME  COMPLEXITY :  O(n)
*/




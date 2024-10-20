#include<iostream>
using namespace std;

    int MaximumElement(int array[], int size){
        int max = INT16_MIN;
        for(int i =0 ; i < size ; i++){
            if(array[i] > max){
                max = array[i];
            }
        }
    return max;
    }
    int SecondMaxximum(int array[], int size){
        int max = MaximumElement(array , size);
        for(int i = 0 ; i < size ; i++){
        if(array[i] == max){
            array[i] = INT16_MIN;
            }
        }
        int Secondmax = MaximumElement(array, size);
        return Secondmax;
    }
int main(){
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;
    int* array = new int[size];
    cout<<"Enter "<<size<<" Elements : ";
    for(int i = 0 ; i < size; i++){
        cin>>array[i];
    }
    cout<<"Second Largest Element is : "<<SecondMaxximum(array, size)<<endl;
    delete[] array;
    return 0;
}

/*
Given an array of integers nums and an integer target, return the indices of the two numbers such that,
they add up to target.
                        Input: nums = [2, 7, 11, 15], target = 9
                        Output: [0, 1]
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    int size, target;
    
    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size);
    
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter Target Sum: ";
    cin >> target;

    vector<int> result = twoSum(arr, target);
    
    if (!result.empty()) {
        cout << "Indices Pair: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found that adds up to the target." << endl;
    }

    return 0;
}

// Write a function that takes an array of integers as an argument and returns a value 
// based on the sums of the even and odd numbers in the array. Let X = the sum of the odd 
// numbers in the array and let Y = the sum of the even numbers. The function should return X – Y

#include <iostream>
using namespace std;

int oddMeven(int numbers[], int size);

int main() {
    int arr[] = {1, 8, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    cout << "Difference between sum of odd and even numbers is: " << oddMeven(arr, size) << endl;
    return 0;
}

int oddMeven(int numbers[], int size) {
    int oddsum = 0;
    int evensum = 0;

    for(int i = 0; i < size; i++) {
        if(numbers[i] % 2 == 0) {
            evensum += numbers[i];
        }
        else {
            oddsum += numbers[i];
        }
    }
    return oddsum - evensum;
}

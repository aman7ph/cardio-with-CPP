// An array with an odd number of elements is said to be centered if all elements (except the middle one)
// are strictly greater than the value of the middle element. Note that only arrays with an odd number of elements
// have a middle element. Write a function that accepts an integer array and returns 1 if it is a centered array,
// otherwise it returns 0.

#include <iostream>
using namespace std;

int centeredarray(int numbers[], int size); 

int main() {
    int arr[] = {1, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]); 
    if (centeredarray(arr, size)) {
        cout << "The array is centered.";
    } else {
        cout << "The array is not centered." ;
    }
    return 0;
}

int centeredarray(int numbers[], int size) {
    if (numbers == nullptr || size % 2 == 0) 
        return 0;
    int middleElement = (size - 1) / 2;
    for (int i = 0; i < size; i++) {
        if(numbers[i]<numbers[middleElement])
            return 0;
    }
    return 1; 
}

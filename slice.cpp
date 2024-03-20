// Write a function that accepts a character array, a zero-based start position and a length. It should return a
// character array containing containing lengthcharacters starting with the startcharacter of the input array. 
// The function should do error checking on the start position and the length and return null if the either value is not legal.


#include <iostream>
using namespace std;

char slice(char characters[], int start,int end);

int main() {
    int arr[] = {'b','e','t','w','e','e','n'}; 
    int start=1;
    int end=6;
    cout << "The Sliced Array is: " << slice(arr, start,end) << endl;
    return 0;
}

char slice(char characters[], int start,int end) {

    

    return 
}
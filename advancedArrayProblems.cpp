#include<iostream>
using namespace std;

//returns largest element in array
int findLargestElement(int array[], int capacity){
    int largest = array[0];
    for(int i = 1; i < capacity; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    return largest;
}

int main(){
    int array1[5] = {3, 1, 5, 2, 3};
    cout << findLargestElement(array1, 5) << endl;
}
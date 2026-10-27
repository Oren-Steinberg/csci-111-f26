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

//finds average of array elements
double findAverage(int array[], int capacity){
    double sum = 0;
    for(int i = 0; i < capacity; i++){
        sum += array[i];
    }
    return sum / capacity;
}

//prints array elements above average
void printAboveAverageElements(int array[], int capacity){
    double average = findAverage(array, capacity);
    for(int i = 0; i < capacity; i++){
        if(array[i] > average){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

bool areAllOdd(int array[], int capacity){
    for(int i = 0; i < capacity; i++){
        if(array[i] % 2 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int array1[5] = {3, 1, 5, 2, 3};
    cout << findLargestElement(array1, 5) << endl;
    printAboveAverageElements(array1, 5);
    cout << areAllOdd(array1, 5);
}
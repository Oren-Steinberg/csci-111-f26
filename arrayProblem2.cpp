#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//fills given array with integers from 1 to 20
void fillArray(int array[], int capacity){
    for(int i = 0; i < capacity; i++){
        array[i] = rand() % 20 + 1;
    }
}

//prints the contents of the array
void printArray(int array[], int capacity){
    for(int i = 0; i < capacity; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

//prints the even numbers from left to right
void printEvens(int array[], int capacity){
    for(int i = 0; i < capacity; i++){
        if(array[i] % 2 == 0){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

//prints the odd numbers from right to left
void printOdds(int array[], int capacity){
    for(int i = capacity - 1; i >= 0; i--){
        if(array[i] % 2 != 0){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    srand(time(0));
    int array[10];
    fillArray(array, 10);
    printArray(array, 10);
    printEvens(array, 10);
    printOdds(array, 10);
}
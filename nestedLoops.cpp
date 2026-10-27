#include<iostream>
using namespace std;

void printStarSquare(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printStarTriangle(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

int countEqualPairs(int array[], int capacity){
    int numPairs = 0;
    for(int i = 0; i < capacity; i++){
        for(int j = i + 1; j < capacity; j++){
            if(array[i] == array[j]){
                numPairs++;
            }
        }
    }
    return numPairs;
}

int main(){
    printStarSquare(5);
    printStarTriangle(5);
    int array1[5] = {3,3,4,5,4};
    cout << countEqualPairs(array1, 5);
}
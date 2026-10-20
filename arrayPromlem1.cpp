#include<iostream>
using namespace std;

int main(){
    int nums[5];
    for(int i = 0; i < 5; i++){
        cin >> nums[i];
    }
    for(int i = 4; i >= 0; i--){
        cout << nums[i] << " ";
    }
    return 0;
}
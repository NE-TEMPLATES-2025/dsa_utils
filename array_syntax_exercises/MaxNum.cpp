
#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10,8,12,4,5,6,7,8,9,1};
    int max = arr[0];
    int min= arr[0];
    for(int i=0; i<10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
}
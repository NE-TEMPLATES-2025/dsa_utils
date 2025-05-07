// #include<iostream>
// using namespace std;

// int main(){
//     int array[]{14,3,4,6,7,41,56,11,25,9},max,min;
//     max=array[0];
//     min=array[0];
//     for(int i=0;i<12;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//         if(array[i]<min){
//             min=array[i];
//         }
//     }
//     cout<<"The maximum number: "<<max<<endl;
//     cout<<"The minimum number: "<<min<<endl;
// }


// write a program to find the min and max number in an array

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
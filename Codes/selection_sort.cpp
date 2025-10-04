// selecting each and then sorting it out.

#include<iostream>
using namespace std;

int main(){
    int arr[]= {10, 4, 6, 7, 23, 656, 57, 89};
    // want to do selection sort
    // algo: set a max number, INT_MAX, if first number less than it, min is that sum, and then inside the loop, so on doing the same

    // int min = __INT_MAX__ ;
    // int temp;
    // for(int i=0; i<8; i++){
    //     if(arr[i]<min){
    //         min = arr[i];
    //         // how to update this into the array?
            
    //     }
    // }
    //cout<<min;  

    //rewriting the code

    //the outer loop which will go to each indexin the array
    for(int i=0;i<8; i++){

        int min = __INT_MAX__;
        //for finding the min
        for(int j=i; j<8; j++){
            if(arr[j]<min){
                min=arr[j];
                swap(arr[i], arr[j]);
            }
        }
    }
    //printing the sorted array
    for(int k=0;k<8; k++){
    cout<<arr[k]<<" ";
    }
}
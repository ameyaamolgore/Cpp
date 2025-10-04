//bubble sort, sorting the highest first, moving it to the last and comparing neighboring digits and sorting them round by round

#include<iostream>
using namespace std;

int main(){
    int arr[]={7, 4, 8, 1, 5};

    //outer loop or each round
    for(int i=0; i<5; i++){

        //for checking nenighbouring digits and comparing
        for(int j=0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }
}
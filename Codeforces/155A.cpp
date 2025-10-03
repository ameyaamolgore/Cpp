#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int best  = arr[0];   // ← arr (int), not arr (int*)
    int worst = arr[0];  // ← arr (int), not arr (int*)
    int count = 0;

    

    if(n>=1 && n<=1000){
        for(int i=1; i<n; i++){
            
            cin>>arr[i];

            // not telling the min and max number, but rather counting their occurances.
            if(arr[i]>best){
                best=arr[i];
                count++;
            }
            if(arr[i]<worst){
                worst=arr[i];
                count++;
            }
            
        }
    }

    cout<<count;
}
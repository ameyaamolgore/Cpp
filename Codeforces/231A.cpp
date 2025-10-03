#include<iostream>
using namespace std;

int main(){
    int n, count1, count2;
    count2=0;
    cin>>n;

        if (n>=1 && n<=1000){
        
        for(int i=1; i<=n; i++){
            int arr[3];
            count1=0;
            for(int i=0; i<3; i++){
                cin>>arr[i];
                count1+=arr[i]; //sum of the 3 numbers
                
            }
            if(count1>=2){
                    count2++;
            }
        }
        }
    
    cout<<count2;
}
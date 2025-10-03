#include<iostream>
using namespace std;

int main(){
    int x, ans;
    cin>>x;
    if(x>=1 && x<=1000000){
        if (x%5==0){
           ans=x/5;
        }
        else{
            ans=(x/5)+1;
        }
        
    }
    cout<<ans;
}
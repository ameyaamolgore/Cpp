#include<iostream>
using namespace std;

int main(){

    int num, rem, ans;
    ans=0;
    cin>>num;

    while(num!=0){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    cout<<ans;
}
#include<iostream>
using namespace std;

long sumofnum(){
    long num;
    cin>>num;

    long sum;
    for(long i=1; i<=num; i++){
        sum+=i;
    }
    cout<<sum;
}
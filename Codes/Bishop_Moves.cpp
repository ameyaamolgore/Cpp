#include<iostream>
using namespace std;

int count(int n, int m){

    int count;
    count=0;
    count+= min(8-n, 8-m);
    count+= min(8-m, n-1);
    count+= min(m-1, n-1);
    count+= min(m-1, 8-n);

    return count;
}

int main(){
    int n, m;
    cin>>n>>m;

    cout<<count(n, m);
}
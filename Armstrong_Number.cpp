#include<iostream>
#include<cmath> // Required for pow()
using namespace std;

int count(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}

bool Armstrong(int n, int digits){
    int original = n;
    int ans = 0, rem;

    while(n > 0){
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digits);
    }

    return (ans == original);
}

int main(){
    int num;
    cin >> num;

    int digitCount = count(num);
    cout << Armstrong(num, digitCount);
}
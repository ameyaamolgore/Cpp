#include<iostream>
using namespace std;

    
    bool Prime(int n){

        if(n<2){
            return 0;
        }

        for(int i=2; i<=n; i++){
            if(n%i==0){
                return 0;
            }
        }

        return 1;
    }

    int factorial(int n){
        int ans=1;

        for(int i=1; i<=n; i++){
            ans*=i;
        }
        return ans;
    }

    int main(){
        int a, b;
        cin>>a>>b;

        cout<<Prime(a)<<endl;
        cout<<Prime(b)<<endl;
        cout<<factorial(a)<<endl;
        cout<<factorial(b)<<endl;
    }


    

#include<iostream>
using namespace std;

int main(){
    char name;
    for(name='a'; name<='z'; name=name+1){
        cout<<name<<endl;
    }
    int rev;
        
        for(rev=10; rev>=1; rev=rev-1){
            cout<<rev<<endl;
        }
    //here name=name+1 converts the ascii value of a upto z and thus by adding 1 prints till z.
}
#include<bits/stdc++.h>
using namespace std;

long long fact(long long n){

    if(n==0 || n==1)
        return 1;

    return n * fact(n-1);
}

int main(){

    long long n;

    cout<<"Enter number"<<endl;
    cin>>n;

    if(n<0){
        cout<<"No negative numbers";
        return 0;
    }

    cout<<"Factorial = "<<fact(n);

    return 0;
}
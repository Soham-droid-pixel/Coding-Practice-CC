#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"No negative nos"<<endl;
    }
    int fiboans=fibo(n);
    cout<<"Fibonacci ans="<<fiboans;
    return 0;

}
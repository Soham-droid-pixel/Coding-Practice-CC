#include<bits/stdc++.h>
using namespace std;
int climb(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    
    return (climb(n-1)+climb(n-2)+climb(n-3));
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"No negative nos"<<endl;
        return 0;
    }
    int ways=climb(n);
    cout<<"Ways="<<ways;
    return 0;

}
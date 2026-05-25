#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return (n *fact(n-1));
    }
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"No negative nos"<<endl;
    }
    int factans=fact(n);
    cout<<"Factorial="<<factans;
    return 0;

}
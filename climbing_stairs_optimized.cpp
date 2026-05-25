#include<bits/stdc++.h>
using namespace std;
int climb(int n){
    if(n<=2){
        return n;
    }
    vector<int>dp(n+1);
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"No negative nos"<<endl;
        return 0;
    }
    cout<<climb(n);    
    return 0;

}
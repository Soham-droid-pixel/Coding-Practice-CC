#include<bits/stdc++.h>
using namespace std;

int houseRobber(int arr[], int n){

    // Base case
    if(n < 0){
        return 0;
    }

    // Rob current house
    int take = arr[n] + houseRobber(arr, n-2);

    // Skip current house
    int skip = houseRobber(arr, n-1);

    // Return maximum
    return max(take, skip);
}

int main(){

    int arr[] = {2, 7, 9, 3, 1};

    int n = 5;

    int ans = houseRobber(arr, n-1);

    cout << "Maximum money = " << ans;

    return 0;
}
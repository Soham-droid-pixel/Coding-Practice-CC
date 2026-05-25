#include<bits/stdc++.h>
using namespace std;

int transport(int apples, int distance){

    if(distance == 0 || apples <= 0){
        return apples;
    }

    int trips = ceil((double)apples / 1000);

    int consume = (2 * trips - 1);

    apples -= consume;

    return transport(apples, distance - 1);
}

int main(){

    int apples = 3000;
    int distance = 3000;

    int ans = transport(apples, distance);

    cout << "Apples left = " << ans;

    return 0;
}
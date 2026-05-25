#include<bits/stdc++.h>
using namespace std;

char grid[3][3] = {
    {'M', '.', '.'},
    {'.', 'C', '.'},
    {'.', '.', 'F'}
};

bool mouseWin(int mx, int my, int cx, int cy){

    // Mouse reached food
    if(grid[mx][my] == 'F'){
        return true;
    }

    // Cat caught mouse
    if(mx == cx && my == cy){
        return false;
    }

    // Directions
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    // Mouse moves
    for(int i = 0; i < 4; i++){

        int nx = mx + dx[i];
        int ny = my + dy[i];

        if(nx >= 0 && ny >= 0 && nx < 3 && ny < 3){

            if(mouseWin(nx, ny, cx, cy)){
                return true;
            }
        }
    }

    return false;
}

int main(){

    int mx = 0, my = 0;
    int cx = 1, cy = 1;

    if(mouseWin(mx, my, cx, cy)){
        cout << "Mouse can reach food";
    }
    else{
        cout << "Cat wins";
    }

    return 0;
}
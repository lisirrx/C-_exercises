#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int x,y;
char input[100][100];
int walked[100][100];
int step[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int dfs(int curx,int cury, int _x, int _y);
int main() {
    cin >> x >> y;
 
    string in;
    int flag = 0;
    for(int i = 0;i < x;++i) {
        for(int j = 0; j < y; ++j) {
            cin >> input[i][j];
        }
    }
 
    for(int i = 0;i < x ;++i) {
        for(int j = 0; j < y; ++j) {
            memset(walked,0,sizeof(int) * 10000);
            if(dfs(i,j,-1,-1))
                flag = 1;
        }
    }
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
}
 
int dfs(int curx,int cury, int _x, int _y) {
    if (walked[curx][cury]) {
        return 1;
    }
    walked[curx][cury] = 1;
    for (int i = 0; i < 4; ++i) {
        int tempx = curx + step[i][0];
        int tempy = cury + step[i][1];
        if (tempx <= x && tempx >= 0 && tempy <= y && tempy >= 0) {
            if (input[tempx][tempy] == input[curx][cury]) {
                if (! (tempx == _x && tempy == _y)) {
                    if(dfs(tempx,tempy, curx,cury))
                        return 1;
                }
            }
        }
    }
    return 0;
}
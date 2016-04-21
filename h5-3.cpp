#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int x,y,bottom,wall;
char input[501][501];
int walked[501][501];
int step[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int dfs(int curx,int cury, int _x, int _y, int _bottom);
int deep = 0;
int main() {
    cin >> x >> y >> bottom;

    string in;
    int flag = 0;
    for(int i = 0;i < x;++i) {
        for(int j = 0; j < y; ++j) {
            cin >> input[i][j];
        }
    }
    for(int i = 0;i < x;++i) {
        for(int j = 0;j < y; ++j) {
            if(input[i][j] == '#') {
                wall++;
            }
        }
    }
    for(int i = 0;i < x ;++i) {
        for(int j = 0; j < y; ++j) {
            memset(walked,0,sizeof(int) * 10000);
            if(input[i][j] == '.') {
                if(dfs(i,j,-1,-1,x * y - wall - bottom))
                    flag = 1;
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    for(int i = 0;i < x;++i) {
        for(int j = 0;j < y; ++j) {
            if(walked[i][j] == 0 && input[i][j] == '.') {
                input[i][j] = 'X';
            }
        }
    }
    for(int i = 0;i < x;++i) {
        for(int j = 0;j < y; ++j) {
            cout << input[i][j];
        }
        cout << endl;
    }
     return 0;
}

int dfs(int curx,int cury, int _x, int _y,int _bottom) {
    if (deep == _bottom) {
        return 1;
    }
    walked[curx][cury] = 1;
    deep++;
    for (int i = 0; i < 4; ++i) {
        int tempx = curx + step[i][0];
        int tempy = cury + step[i][1];
        if (tempx <= x && tempx >= 0 && tempy <= y && tempy >= 0) {
            if (input[tempx][tempy] == input[curx][cury] && (!walked[tempx][tempy])) {
                    if(dfs(tempx,tempy, curx,cury,_bottom))
                        return 1;
            }
        }
    }
    return 0;
}


#include <iostream>
using namespace std;
char input[4][4];
int judge(int i, int j);
int main()
{
    string in;
    int flag = 0;
    for(int i = 0;i < 4 ;++i) {
        cin >> in;
        for(int j = 0; j < 4; ++j) {
            input[i][j] = in[j];
        }
    }
    for(int i = 0;i < 3;++i) {
        for(int j = 0;j < 3;++j) {
            if(judge(i,j) != 1)
               flag = 1;
        }
    }
    if(flag)
        cout << "YES" <<endl;
    else
        cout <<"NO" << endl;
}
int judge(int i,int j) {
    int cnt = 0;
    char cur = input[i][j];
    if (input[i + 1][j] == cur)
        cnt++;
    if (input[i][j + 1] == cur)
        cnt++;
    if (input[i + 1][j + 1] == cur)
        cnt++;
    return cnt;
}
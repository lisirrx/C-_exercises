#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int table[n][n],cnt = 1,sum = 0;
    for(int i = 0;i < n;++i)
    {
        for(int j = 0;j < k-1;++j)
        {
            table[i][j] = cnt++;
        }
    }
     for(int i = 0;i < n;++i)
    {
        for(int m = k - 1;m < n;++m)
        {
            table[i][m] = cnt++;   
        } 
    }
    for(int i = 0;i < n;++i)
    {
        sum +=table[i][k-1];
    }
    cout<<sum<<endl;
    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j < n;++j)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<"\n";
    }
}
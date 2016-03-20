#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin>>input;
    char temp = '!';
    int cnt=0;
    for(int i = 0;i<input.length();++i)
    {
        if(temp == input[i])
        {
            cnt++;
        }
        else 
        {
            temp = input[i];
            cnt=1;
        }
        
        if(cnt>6)
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    if(cnt<=6)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
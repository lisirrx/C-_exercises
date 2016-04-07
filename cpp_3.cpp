#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    istream_iterator<int> input(cin);
    istream_iterator<int> eof;
    ofstream out1("3_3_1out.txt");
    ofstream out2("3_3_2out.txt");
    vector<int> input_vec;
    copy(input,eof, back_inserter(input_vec));
    for(auto i = input_vec.cbegin();i != input_vec.cend();++i)
    {
        if(*i % 2)
        {
            if(i != input_vec.cend() - 1)
                out1 << *i << " ";
            else
                cout << *i << endl; 
        }
        else
        {
            out2 << *i << endl;
        }
    }
    return 0;
    
    
    
}
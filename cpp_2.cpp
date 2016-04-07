#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;
bool camp(string &s1, string &s2)
{
    return s1.size() < s2.size();
}
function<bool(string &,string &)> cam_function = camp;

int main()
{
    vector<string> input;
    set<string> input_set;
    ifstream input_file;
    ofstream out1("3_2out.txt");
    
    string file_name;
    string str;
    
    cin >> file_name;
    input_file.open(file_name);
    
     while(input_file >> str)
    {
        transform(str.begin(),str.end(),str.begin(), ::tolower);
        input_set.insert(str);
        
    }
    for(auto i : input_set)
    {
       input.push_back(i);
    }
    
    sort(input.begin(), input.end(),
        cam_function);
    
    for(auto i : input)
    {
        out1 << i << endl;
    }
    
    return 0;
     
}
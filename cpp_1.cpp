#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
    set<string> exclusion_set;
    map<string, size_t> input_map;
    vector<pair<string, size_t> > output;
    ifstream input_file;
    ifstream exclusion_file("./exclusion.txt");
    ofstream out1("3_1_1out.txt");
    ofstream out2("3_1_2out.txt");
    string file_name;
    string str;
   
    cin >> file_name;
    input_file.open(file_name);
    
    while(exclusion_file >> str)
    {
        transform(str.begin(),str.end(),str.begin(), ::tolower);
        exclusion_set.insert(str);
    }
    
    while(input_file >> str)
    {
        transform(str.begin(),str.end(),str.begin(), ::tolower);
        if(exclusion_set.count(str) == 0)
        {
            auto i = input_map.insert(make_pair(str,1));
            if(!i.second)
            {
                ++i.first->second;
            }
        }
        
    }
    for(auto i : input_map)
    {
       output.push_back(i);
    }
    sort(output.begin(), output.end(),
        [](pair<string, size_t> &P1, pair<string, size_t> &P2){return P1.second > P2.second;});
   
    for(auto i : input_map)
    {
        out1 << i.first << ": " << i.second << endl;
    }
    
    for(auto i : output)
    {
        out2 << i.first << ": " << i.second << endl;
    }
    
    return 0;
}
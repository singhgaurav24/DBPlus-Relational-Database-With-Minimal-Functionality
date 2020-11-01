#include<vector>
#include<string>
#ifndef UTIL_HPP
#define UTIL_HPP
using namespace std;
vector <string> split2(const string &str, char del)
{
    string z="";
    vector<string> stream;
    for(auto x: str)
    {
        if(x==del)
        {
            stream.push_back(z);
            z="";
        }
        else z+=x;

    }
    stream.push_back(z);
    return stream;


}




#endif

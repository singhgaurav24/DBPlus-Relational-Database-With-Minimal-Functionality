#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector <string> split(const string &str, char del)
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
void toUpper(string& su)
{
    transform(su.begin(), su.end(), su.begin(), ::toupper); 
}

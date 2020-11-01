#include<iostream>
#include <string.h> 
#include<vector>
using namespace std;

enum CRUD{
    CREATE,
    INSERT,
    UPDATE,
    DELETE
};
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
int main() {

    string query;
   // string str;
   getline(cin,query);
   vector<string> token=split(query,' ');
   cout<<token[0]<<" "<<token[1];    
    
    return 0;

}
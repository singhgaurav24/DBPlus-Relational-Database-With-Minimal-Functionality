#include<iostream>
#include <string> 
#include<vector>
#include<map>
#include "util/util.hpp"
using namespace std;

int tokenHash(string str)
{
    map<string,int> hash;
    hash.insert({"CREATE",101});
    hash.insert({"INSERT",102});
    hash.insert({"DELETE",103});
    hash.insert({"SELECT",104});
    auto it=hash.find(str);
    return it->second;

}

int main() {
    string query;
    vector<string> token;
    cout<<"Runnig databse DBplus>>\nTo exit from database type q or quit \nFor any kind of help type --help \n\n";
    while (1)
    {
        cout<<"DBplus>> ";
        getline(cin,query);
        if(query=="q" || query=="quit") exit(1);

        
        token=split(query,' ');
        int hash=tokenHash(token[0]);
        //cout<<hash;
        switch (hash)
        {
        case 101:
            cout<<"crete";
            break;
        case 102:
            cout<<"i";
            break;
        case 103:
            cout<<"d";
            break;
        case 104:
            cout<<"s";
            break;
        
        default:
            cout<<"INVALID QUERY"<<endl;
            break;
        }
        
        
    }

    return 0;

}
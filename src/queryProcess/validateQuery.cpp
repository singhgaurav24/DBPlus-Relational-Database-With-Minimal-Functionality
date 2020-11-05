#include <string>
#include<vector>
#include<map>
#include <iostream>
#include "../include/validateQuery.hpp"
#include "../util/util.hpp"
#include "../include/create.hpp"
using namespace std;

int tokenHash(string su)
{
    map<string,int> hash;
    toUpper(su);
    hash.insert({"CREATE",101});
    hash.insert({"INSERT",102});
    hash.insert({"DELETE",103});
    hash.insert({"SELECT",104});
    auto it=hash.find(su);
    return it->second;

}
bool ValidateQuery::isValid(string query, char *err)
{

        vector<string> token;
        token=split(query,' ');
        int hash=tokenHash(token[0]);
        //cout<<hash;
        switch (hash)
        {
        case 101:
           //Cretae
           
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
}
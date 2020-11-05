#include<iostream>
#include <string> 
#include "util/util.hpp"
#include "util/enums.hpp"
#include "include/create.hpp"
#include "include/executeQuery.hpp"
#include "include/validateQuery.hpp"
#include "/usr/local/include/hsql/SQLParser.h"

using namespace std;



int main() {
    string query;
    string err_msg;
    QType qType;
    cout<<"Runnig databse DBplus>>\nTo exit from database type q or quit \nFor any kind of help type --help \n\n";
    while (1)
    {
        cout<<"DBplus>> ";
        getline(cin,query);
        if(query=="q" || query=="quit") exit(1);
        if(query.size()<1) continue;

        /**TODO**
         * Validte query
         * Execute query
         * Make data type as enum
         * 
        */
       //ValidateQuery executeQuery;
       //if(!executeQuery.isValid(query,err_msg,qType)) cout<<"\n"<<query<<" "<<err_msg<<endl;

       //else cout<<"valid"<<endl;
         hsql::SQLParserResult result;
         hsql::SQLParser::parse(query, &result);
         if (!result.isValid()) 
         {
             cout<<"Invalid\n";
         }
         else cout<<"Valid query\n";



    }
    return 0;

}

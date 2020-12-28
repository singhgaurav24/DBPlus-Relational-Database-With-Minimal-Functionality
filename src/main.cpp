#include<iostream>
#include <string>
#include<vector>
#include "util/util.hpp"
#include "util/enums.hpp"
#include "include/create.hpp"
#include "include/executeQuery.hpp"
#include "include/validateQuery.hpp"
#include "/usr/local/include/hsql/util/sqlhelper.h"
#include "/usr/local/include/hsql/SQLParser.h"

using namespace hsql;

using namespace std;

using namespace dbplus;

//class Driver

int main() {
    string query;
    string err_msg;
    
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


       hsql::SQLParserResult result;
       dbplus::ValidateQuery validateQuery;
       if(!validateQuery.isValid(query,err_msg,result)) 
       {
           cout<<err_msg<<endl;
           return 0;
       }

       ExecuteQuery e;
       e.executeQuery(result);
       

       



/* TODO
Execute query will have to parameters 1) stsmt 2)results
if the query is read type then it return a result
         
     /*
     s
     

    }

      // dbplus::ValidateQuery::isValid(query,err_msg,qType);
       //else cout<<"valid"<<endl;
    

    */

}
    return 0;

}

#include<iostream>
#include <string>
#include<vector>
#include "util/util.hpp"
#include "util/enums.hpp"
#include "include/create.hpp"
#include "include/executeQuery.hpp"
#include "include/validateQuery.hpp"
#include "/usr/local/include/hsql/util/sqlhelper.h"


using namespace hsql;

using namespace std;

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


       vector<const SQLStatement* > stmts;
       dbplus::ValidateQuery validateQuery;
       if(!validateQuery.isValid(query,err_msg,stmts)) 
       {
           cout<<err_msg<<endl;
           return 0;
       }

       cout<<stmts.size()<<endl;

         
     /*
     s
     switch (stmt->type())
     {
     case kStmtCreate:
     printInfo((const CreateStatement*) stmt);
      break;
     case kStmtSelect:
      //cout<<"Tbale name " <<((const SelectStatement *) stmt)->tableName;
      break;
    case kStmtInsert:
      printInsertStatementInfo((const InsertStatement*) stmt, 0);
      break;
    
    case kStmtUpdate:
     // cout<<"Tbale name" <<((const UpdateStatement *) stmt)->tableName;
      break;
    case kStmtExport:
      printExportStatementInfo((const ExportStatement*) stmt, 0);
      break;
    case kStmtTransaction:
      printTransactionStatementInfo((const TransactionStatement*) stmt, 0);
      break;
    default:
      break;
     }

    }

      // dbplus::ValidateQuery::isValid(query,err_msg,qType);
       //else cout<<"valid"<<endl;
    

    */

}
    return 0;

}

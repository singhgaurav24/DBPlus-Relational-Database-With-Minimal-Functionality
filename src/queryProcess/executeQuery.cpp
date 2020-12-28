#include <string>
#include "../include/executeQuery.hpp"
#include "../include/global.hpp"
#include "../include/create.hpp"
#include <iostream>
using namespace std;
using namespace hsql;
using namespace dbplus;
namespace dbplus{

void ExecuteQuery::executeQuery(hsql::SQLParserResult &result)
{


//First it preprocess the data


      //we will again call validate function to check if query exist or not,
    //cout<<"Tbale name " <<((const SelectStatement *) stmt)->tableName;

    PreprocessData data;
    data.preprocess();

    for (auto i = 0u; i < result.size(); ++i) {
     

        const SQLStatement* stmt = result.getStatement(i);
        switch (stmt->type())
        {
            case kStmtCreate:
                Create create;
                create.createStatement((const CreateStatement*)stmt);
            
            break;
            case kStmtSelect:
                cout<<"Select ";
            break;
            case kStmtInsert:
     
            break;
    
            case kStmtUpdate:
     // cout<<"Tbale name" <<((const UpdateStatement *) stmt)->tableName;
            break;
            case kStmtDelete:
      
            break;
   
            default:
            break;
     }
    }


    /*
    for(const hsql::SQLStatement*stmt: stmts) //x is sql statement
    {
        switch (stmt->type())
        {
            case kStmtCreate:
                cout<<"Create ";
                Create create;
                cout<<((const CreateStatement*)stmt)->tableName<<endl;
                create.createStatement((const CreateStatement*)stmt);
            
            break;
            case kStmtSelect:
                cout<<"Select ";
            break;
            case kStmtInsert:
     
            break;
    
            case kStmtUpdate:
     // cout<<"Tbale name" <<((const UpdateStatement *) stmt)->tableName;
            break;
            case kStmtDelete:
      
            break;
   
            default:
            break;
     }
    }
    */
}

}

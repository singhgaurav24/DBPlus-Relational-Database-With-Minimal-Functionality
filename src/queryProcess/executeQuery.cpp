#include <string>
#include "../include/executeQuery.hpp"

using namespace std;
using namespace hsql;
namespace dbplus{

void ExecuteQuery::executeQuery(std::vector<const hsql::SQLStatement* > &stmts)
{

    //we will again call validate function to check if query exist or not,
    //cout<<"Tbale name " <<((const SelectStatement *) stmt)->tableName;
    for(auto stmt: stmts) //x is sql statement
    {
        switch (stmt->type())
        {
            case kStmtCreate:

            
            break;
            case kStmtSelect:
      
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
}

}

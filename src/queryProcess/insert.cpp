#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "../include/insert.hpp"
#include"../util/util.hpp"
#include "../include/validateQuery.hpp"
#include "/usr/local/include/hsql//sql/statements.h"
using namespace std;
namespace dbplus{
    
    void Insert::insertStatement(const hsql::InsertStatement* stmt)
        {
            string table(stmt->tableName);
            ValidateQuery valid;

            if(valid.existTable(table))
            {
              cout<<"Error: Table already exist : "<<table<<endl;
              return;
              
            }

            string info=""; //structrure how table info will be stored in the file
            
            info+=table;
            

    
             if (stmt->columns != nullptr) {
      
             for (char* col_name : *stmt->columns) {
             cout<<col_name;
            }
         }

      for (auto expr : *stmt->values) {
        cout<<expr->name<<endl;
      } 
    
        }
        
    
    



}
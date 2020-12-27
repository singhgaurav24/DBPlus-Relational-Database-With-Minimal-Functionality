#include<iostream>
#include<vector>
#include<string>
#include "../include/create.hpp"
#include"../util/util.hpp"
#include "/usr/local/include/hsql//sql/statements.h"
using namespace std;
using namespace hsql;
namespace dbplus{
    
        void Create::createStatement(const CreateStatement* create_stmt)
        {

            //if()b table alredy exist
            string table(create_stmt->tableName);

            string info=""; //structrure how table info will be stored in the file
            
            info+=table;
    // std::vector<char*>* viewColumns = create_stmt->viewColumns;
     //cout<<viewColumns->size()<<endl;
     //cout<<viewColumns->at(0);  
     
     if (create_stmt->columns != nullptr) {
      
      for (auto col: *create_stmt->columns) {
        string col_name(col->name);
        info=info+" "+col_name+" varchar";

        col->nullable == true ? info+=" 0":info+=" 1";

        info+=" 0"; //not primary key


          
      }
      cout<<info<<" ";
    }
    
    
        }
        
    
    



}
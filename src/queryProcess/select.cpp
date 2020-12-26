#include<iostream>
#include<vector>
#include<string>
#include "../include/select.hpp"
#include"../util/util.hpp"
#include "/usr/local/include/hsql//sql/statements.h"
using namespace std;
namespace dbplus{
    
        void Select::selectStatement(const hsql::CreateStatement* create_stmt)
        {
            string str="";
            cout<<"create statement\n"<<endl;
     //const CreateStatement* create_stmt = (const CreateStatement*) stmt; //typecast
     cout<<"fields "<<endl;
     cout<<create_stmt->tableName<<endl;
    // std::vector<char*>* viewColumns = create_stmt->viewColumns;
     //cout<<viewColumns->size()<<endl;
     //cout<<viewColumns->at(0);  
     if (create_stmt->columns != nullptr) {
      
      for (auto col_name : *create_stmt->columns) {
        
          cout<<col_name->name<<endl;
      }
    }
    
        }
        
    
    



}
#include<vector>
#include<string>
#include "/usr/local/include/hsql//sql/statements.h"

#ifndef CREATE_H
#define CREATE_H
//using namespace std;
namespace dbplus{
    class Create{

        public:
        void createStatement(const hsql::CreateStatement* create_stmt);
        
        
    };
    



}






#endif

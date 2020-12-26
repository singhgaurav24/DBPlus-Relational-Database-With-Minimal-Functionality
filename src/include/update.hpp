#include<vector>
#include<string>
#include "/usr/local/include/hsql//sql/statements.h"

#ifndef UPDATE_HPP
#define UPDATE_HPP
//using namespace std;
namespace dbplus{
    class Update{

        public:
        void updateStatement(const hsql::CreateStatement* create_stmt);
        
        
    };
    



}






#endif

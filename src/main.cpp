#include<iostream>
#include <string> 
#include "util/util.hpp"
#include "include/create.hpp"
#include "include/executeQuery.hpp"
using namespace std;



int main() {
    string query;
    
    char *err;
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
        */
       ExecuteQuery executeQuery;
       if(executeQuery.isValid(query,err)) cout<<"Yes";






    return 0;

}

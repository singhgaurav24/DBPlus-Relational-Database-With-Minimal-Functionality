#include<iostream>
using namespace std;

class Test{
 public:
 Test(): test(false){};
 void check()
 {
 	cout<<test;
 }


};
int main()
{
	Test t;
	t.check();
}
/*

CREATE TABLE Persons (ID int NOT NULL PRIMARY KEY,LastName varchar(255) NOT NULL, FirstName varchar(255),Age int);


*/

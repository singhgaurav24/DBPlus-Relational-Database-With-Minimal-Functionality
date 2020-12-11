#include<iostream>
#include<fstream>
#include<vector>

using namespace std;


//Utility function to search file_name
vector <string> split(const string &str, char del)
{
    string z="";
    vector<string> stream;
    for(auto x: str)
    {
        if(x==del)
        {
            stream.push_back(z);
            z="";
        }
        else z+=x;

    }
    stream.push_back(z);
    return stream;


}

class Emp {
string id;
string name;
string date;
string dept;

public:
void addEmp()
{
	string id;
	string name;
	string date;
	string dept;	
	cout<<"Enter detail id, name, date,dept\n";
	cin>>id>>name>>date>>dept;
	
	ofstream myfile;
	myfile.open("emp.txt");
	if(!myfile.is_open())cout<<"error in open file"<<endl;
	
	myfile<<id<<" "<<name<<" "<<date<<" "<<dept<<"\n";
	cout<<id<<" "<<name<<" "<<date<<" "<<dept<<"\n";
	myfile.close();

}

void display()
{
	string file_name="emp.txt";
    
    ifstream file;
    file.open(file_name);
    if(!file.is_open())cout<<"error"<<endl;
    string str;
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
    file.close();

}

void search()
{
	string key;
	cout<<"Enter id to search\n";
	cin>>key;
	string file_name="emp.txt";
    
    ifstream file;
    file.open(file_name);
    if(!file.is_open())cout<<"error"<<endl;
    string str;
    bool found=false;
	while(getline(file,str))
	{
		vector <string> splited_str = split(str,' ');
		if(splited_str[0]==key)
		{
			cout<<"Data is present\n";
			cout<<str<<endl;
			found=true;
			
		}
	}
	if(!found) cout<<"Data is not present\n";
    file.close();

}

 

};

int main()
{
	Emp obj;
	
	cout<<"1. Add employee \n2.Display \n3.Search\n";
	int ch;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		obj.addEmp();
		break;
		
		case 2:
		obj.display();
		break;
		
		case 3:
		obj.search();
		break;
		
		default:
		cout<<"Error choice\n";
			
	
	}
	

}



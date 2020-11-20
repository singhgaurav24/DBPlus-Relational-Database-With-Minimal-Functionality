#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
//Read only n bytes after k bytes where k<=file.size

void read_n_k(int n,int k)
{
    //int n=10; //n is chunk size, k is
    string file_name="table.db";
    
    ifstream file;
    file.open(file_name);

    /** Finds size of file
    and skip k bytes
    **/
   
    file.seekg(0, ios::end);
    int file_size = file.tellg();
    file.seekg(0, ios::beg); //put at 0th char from beg
    if(k<=file_size)
    {
        file.seekg(k); 

    }
    
    if(!file.is_open())cout<<"error"<<endl;
    cout<<file.tellg()<<endl;
    int bytes=0;
    string str;
    /**
    It will readd complete line in which bytes fell.

    **/
	while(getline(file,str) && bytes<n)
	{
        
		cout<<str<<endl;
        bytes+=file.tellg();
	}
    cout<<file.tellg()<<endl;
    file.close();
}

 //Search data in each 10 bytes chunk, go for next chunk if data is not present in current chunk
 //if it is present then return true other wise data is not in the chunk
void read_chunks(string key,int n)
{
   // int n=10; //n is chunk size, k is
    string file_name="table.db";
    
    ifstream file;
    file.open(file_name);
    if(!file.is_open())cout<<"error"<<endl;
    cout<<file.tellg()<<endl;

    string str;
   
    file.seekg(0, ios::end);
    int file_size = file.tellg();
    file.seekg(0, ios::beg); //put at 0th char from beg
    cout<<"File size "<<file_size<<endl;
    bool found = false;
    
    vector <string> splited_str;
    int strt_ptr=0,end_ptr,upto_ptr=0,loop_ptr; //chunk pointers

     //check each chunk one by one

     int chunk=1;
     
    while(!found && file.tellg() < file_size)
    {


        //check first line and end line of chunk 
        //if it match or less then then check in perticular chunk other wise go into next
       
       //check at beg of chunk
        getline(file,str);
        splited_str=split(str,' ');
        if(splited_str[0]==key){
            cout<<"found in chunk num "<<chunk<<"\nstr: "<<str<<"\n";
            
            found=true;
            break;
        }
        upto_ptr+=n;
        end_ptr=strt_ptr+n;
        file.seekg(upto_ptr,ios::beg);

        //check at end of chunk
        getline(file,str);
        splited_str=split(str,' ');
        if(splited_str[0]==key){
            cout<<"found in chunk num "<<chunk<<"\nstr: "<<str<<"\n";
            
            found=true;
            break;
        }
        file.seekg(upto_ptr,ios::beg);
        //between end and start of chunk

        
        if(splited_str[0]>key){
            upto_ptr=strt_ptr;
            file.seekg(upto_ptr,ios::beg);
            loop_ptr=strt_ptr;
            while(getline(file,str) && end_ptr>=loop_ptr)
            {
                splited_str=split(str,' ');
                if(splited_str[0]==key){
                cout<<"found in chunk num "<<chunk<<"\nstr: "<<str<<"\n";
            
                found=true;
                break;
        }
            }


        }
        upto_ptr+=n;
        file.seekg(upto_ptr,ios::beg);
        strt_ptr=end_ptr;
        chunk++;     

    }
    
    /**
    It will readd complete line in which bytes fell.

    **/
    if(!found) cout<<"Data not present"<<endl;
    cout<<file.tellg()<<endl;
    file.close();
}

//Read only 3 lies of n bytes
void read_n_l(int n)
{


}
//Opertaion to modify data hello this is prakash3 int to hello this is prakash7
void modify()
{
    string file_name="table.db";
    
    fstream file;
    file.open(file_name);
    if(!file.is_open())cout<<"error"<<endl;
    
    cout<<file.tellg();
    cout<<file.tellp();
    
    file<<"hello this is prakash6";
    file.close();

}


int main()
{
   
   // modify();
    //read();
    string str;
    cin>>str;
    int n;
    cin>>n;
    read_chunks(str,n);
    

}
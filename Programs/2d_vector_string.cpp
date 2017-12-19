#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	//string class support push_back(),pop_back() operation for insert and delete.
	//support swap()
	
	string inp;
	//2-D char array
	vector< vector<string> > arr;	
			
	//inserting into 2-D vector
	for(int i=0;i<4;++i)
	{
		//row matrix. 
		vector <string> row;
		
		for(int j=0;j<4;++j)
		{
			//standard way to input in string also "cin>>inp" supported.
			getline(cin,inp);
			row.push_back(inp);
		}
		//isnsert the row to the arr.
		arr.push_back(row);
	}
	
	//displaying the content of 2-D vector using size()
	for(int k=0;k<arr.size();k++)
	{
		for(int l=0;l<arr[k].size();l++)
		{
			cout<<arr[k][l]<<" ";
		}
			cout<<endl;
	}
	
}

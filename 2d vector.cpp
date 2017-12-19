#include<iostream>
#include<vector>


using namespace std;

int main()
{
	int inp;
	
	//2-D integer array
	vector< vector<int> > arr;	
				
	//inserting into 2-D vector
	for(int i=0;i<4;++i)
	{
		//row matrix. 
		vector <int> row;
		
		for(int j=0;j<4;++j)
		{
			cin>>inp;
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

#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
	vector<int> arr;				//1-D integer array 
	int i,x;
	
	for(i=0;i<=5;++i)
	{
		cin>>x;
		arr.push_back(x);
	}
	printf("Size of the vector %d \n",arr.size());
	cout<<"Capacity of the vector "<<arr.capacity()<<endl;
	cout<<"Max_Size of the vector "<<arr.max_size()<<endl;
//	cout<<"BEGIN of the vector "<<arr.begin();
//	cout<<"END of the vector "<<arr.end();	
	

}

#include<iostream>
#include<vector>
#include<stdio.h>
#include<iterator>

using namespace std;

int main()
{
	int i,x;
	
	//1-D integer array 
	vector<int> arr;
					
	//declaring iterator 'j' for a vector
	vector<int>::iterator j;

	
	for(i=0;i<=5;++i)
	{
		cin>>x;
		arr.push_back(x);
	}
	
	printf("Size of the vector %d \n",arr.size());
	cout<<"Capacity of the vector "<<arr.capacity()<<endl;
	cout<<"Max_Size of the vector "<<arr.max_size()<<endl;
	
	//	arr.begin is a pointer to te starting of the array.
	//  arr.end is a pointer end to the starting of the array.
	for(j=arr.begin();j<arr.end();j++)
		cout<<*j<<endl;
	
	
	//using advance() iterator for incrementing the ptr
	cout<<"Using adavnce() iterator"<<endl;
	
	for(j=arr.begin();j<arr.end();)
	{
		cout<<*j<<endl;
		advance(j,2);
	}
	
	
	//inserter
	vector<int>arr1;
	//arr1[]={100,101,102}+
    arr1.push_back(100); arr1.push_back(101); arr1.push_back(102);	
	j=arr.begin();
	advance(j,3);
	copy(arr1.begin(),arr1.end(),inserter(arr,j));
	cout<<"After inserting"<<endl;
	for(j=arr.begin();j<arr.end();j++)
		cout<<*j<<endl;
		
}

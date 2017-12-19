#include<iostream>
using namespace std;
template <typename T>

T sum(T x, T y)
{
	return x+y;
}
int main()
{
	cout<<"The output is :"<<sum<float>(2.24,3.89)<<endl;
	cout<<"The output is :"<<sum<int>(9,8);
	return 0;
}

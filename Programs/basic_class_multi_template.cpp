#include<iostream>
using namespace std;
template <class T,class U>					//multiple template parameter

class mypair
{
	
	public:
		T values;
		U items;
		mypair()							//default constructor
		{
			
		}
		mypair(T a,U b)						//paramaterized constructor
		{
			values=a;
			items=b;
		}
		void print()
		{
			cout<<values<<" and "<<items<<endl;
		}
		
};

int main()
{


    
    				
    mypair<float,char> obj1(6.5,'A');						//implicit call for multile parameter template
    mypair<int,float> obj=mypair <int,float> (5,9.589);		//explicit call multile parameter template
    
    obj1.print();
    obj.print();
    
 
	return 0;
}

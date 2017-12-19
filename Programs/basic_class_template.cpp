#include<iostream>
using namespace std;
template <class T>

class mypair
{
	
	public:
		T values[2];
		mypair()							//default constructor
		{
			
		}
		mypair(T a,T b)						//paramaterized constructor
		{
			values[0]=a;
			values[1]=b;
		}
		T getmax()
		{
			return values[0]>values[1]?0:1;
		}
		
};

int main()
{

	/*on class template <int> or <float> need to be mentioned
	not allowed like mypair obj(5,4);*/
    
    				
    mypair<float> obj1(6.5,6.7);			//implicit call 
    mypair<int> obj=mypair <int> (5,6);		//explicit call
    
    
    
    if(obj.getmax()==0)
    	cout<<"the greater value is "<<obj.values[0]<<endl;
    	else 
    	cout<<"the greater value is "<<obj.values[1]<<endl;
    	
    	
    if(obj1.getmax()==0)
    	cout<<"the greater value is "<<obj1.values[0];
    	else 
    	cout<<"the greater value is "<<obj1.values[1];
	return 0;
}

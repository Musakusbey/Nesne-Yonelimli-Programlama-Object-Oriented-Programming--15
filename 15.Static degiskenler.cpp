#include <iostream>

using namespace std;

void Test()
{
	
	static int i=3;
	
	i++;
	
	cout<<"i'nin degeri:"<<i<<endl;
}

int main ()
{
	Test(); 
	
	Test();
	
	Test();
	
	return 0;
}

/* statik oldugu icin cýktý

4 
5
6

statik olmasaydý çýktý

4
4
4 */










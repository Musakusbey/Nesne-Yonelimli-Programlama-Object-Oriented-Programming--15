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

/* statik oldugu icin c�kt�

4 
5
6

statik olmasayd� ��kt�

4
4
4 */










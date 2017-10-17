#include <iostream.h>
void main()
{
	int a,b;
	cout<<"a b"<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<"a/b="<<a/b<<endl;
	else
		cout<<"a/b="<<a/b<<","<<a%b<<endl;
}
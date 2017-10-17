#include <iostream.h>
void main()
{
	int i,x;
	cout<<"i:"<<endl;
		cin>>i;
	if(i%3==0)
		x=1;
	else
	   if(i%7==0)
		   x=1;
	   else
		   x=0;
	if(x==1)
		cout<<i<<":YES.\n";
	else
		cout<<i<<":NO.\n";
}

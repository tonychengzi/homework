#include <iostream.h>
void main()
{
	float r,k,c,s;
	cout<<"r k"<<endl;
	cin>>r>>k;
	s=3.14159*r*r;
	c=2*3.14159*r;
	if(k==1)
		cout<<s<<endl;
	else
		if(k==2)
			cout<<c<<endl;
		else
			cout<<s<<c<<endl;

}

#include<iostream.h>
void main()
{
	float a,b,c,p,s;
	cout<<"please input a b c:"<<endl;
	cin>>a>>b>>c;
	p=((a+b+c)*0.5);
	s=(p*(p-a)*(p-b)*(p-c));
	cout<<p<<endl;
}

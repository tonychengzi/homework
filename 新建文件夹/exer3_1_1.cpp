#include<iostream.h>
void main()
{
	int x,y=1;
	cout<<"plese input x:"<<endl;
	cin>>x;
	while(x>10)
	{
		x=x/10;
		y++;
	}
	cout<<"y="<<endl;
	switch(y)
	{
	case 1:cout<<"x<10";break;
	case 2:cout<<"10<=x<=99";break;
	case 3:cout<<"100<=x<=999";break;
	default:cout<<"x>=1000";
	}
}
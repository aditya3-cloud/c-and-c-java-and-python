#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
	int l,b;
	float r,bs,ht;
	cout<<"Enter radius of circle :";
	cin>>r;
	cout<<"Enter the length and bredth of rectangle :";
	cin>>l>>b;
	cout<<"Enter the base and heigth of triangle :";
	cin>>bs>>ht;
	cout<<"Area of circle is :"<<area(r);
	cout<<"\nArea of rectangle is :"<<area(l,b);
	cout<<"\nArea of triangle is :"<<area(bs,ht);
	
}
float area(float r)
{
	return(3.14*r*r);
}
int area(int l,int b)
{
	return(l*b);
}
float area(float bs,float ht)
{
	return((bs*ht)/2);
}


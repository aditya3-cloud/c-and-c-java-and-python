#include<iostream>
#include<stdlib.h>
using namespace std;
class cal
{
	int num1,num2;
	char opr;
public:
	cal()
	{
		cout<<"Enter the operator : ";
		cin>>opr;
		cout<<"Enter first integer : ";
		cin>>num1;
		cout<<"Enter the second integer : ";
		cin>>num2;
		switch(opr)
		{
			case '+':
			
			 	cout <<"Sum of " ;
				 cout<<num1;
				 cout<< " and ";
				 cout<< num2;
				 cout<< " is " <<num1+num2;
				 break;
			case '-':
				cout<<"Difference of ";
				cout<<num1;
				cout<<" and ";
				cout<<num2;
				cout<<" is " <<num1-num2;
				break;
			case '*':
				cout<<"Product of ";
				cout<<num1;
				cout<<" and ";
				cout<<num2;
				cout<<" is " <<num1*num2;
				break;
			case '/':
				cout<<"Quotient of ";
				cout<<num1;
				cout<<" and ";
				cout<<num2;
				cout<<" is " <<num1/num2;
				break;
			case '%':
				cout<<"Modulas of ";
				cout<<num1;
				cout<<" and ";
				cout<<num2;
				cout<<" is " <<num1%num2;
				break;
			default :
				cout<<"Invalid Input ! ";
			
			
			
		}
   }
 ~cal()
{
	cout<<" \nDestructor called !";
}

};
int main()
{
	string str;
	cal obj;

   	cout<<"\nwhether he/she wants to performs another operation? ";
   	cin>>str;
   //	if(str=="yes"){
  while( str=="yes"){
  	system("cls");
  cal obj;
  cout<<" \nwhether he/she wants to performs another operation? ";
   	cin>>str;
 // }
}

 
	return 0;
}

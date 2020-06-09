#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int vowel = 0 , consonant = 0;
	cout<<"Enter any string : ";
	cin.getline(str,100);
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U')
		{
			vowel++;
	    }
		
		else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
		{
			consonant++;
		}
	}
	cout<<"vowel in string : "<<vowel;
	cout<<"\nconsonant in string : "<<consonant;
	return 0;
	
}

#include<iostream>
using namespace std;

int main()
{
	char ch;
	int ascii,type;
	cout<<"Enter a Character:";
	cin>>ch;
	ascii=ch;
	// using else if
	if(ascii>=65&&ascii<=90)
	type=1;
	if(ascii>=97&&ascii<=122)
	type=2;
	if(ascii>=48&&ascii<=57)
	type=3;
	else
	type=4;
	
	//switch case
	switch(type)
	{
		case 1:
			cout<<"Capital letter";
			break;

		case 2:
			cout<<"Small letter";
			break;
		case 3:
			cout<<"Digit";
			break;
		case 4:
			cout<<"special symbol";
			break;
	}
	return 0;
}

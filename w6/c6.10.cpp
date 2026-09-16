#include<iostream>
using namespace std;
int main()
{
	char str[100];
	char *start,*end;
	char temp;
	
	cout<<"Enter a string: ";
	cin.getline(str,100);
	start=str;
	end=str;
	//move end pointer to that last character
	while(*end!='\0'){
		end++;
	}
	end--;
	//reverse the string
	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
	cout<<"Reversed string = "<<str;
	return 0;
}

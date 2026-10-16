#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s,s1,s2;
	cout<<"Enter a sentence: ";
	getline(cin,s);
	cout<<"Enter string to replace: ";
	getline(cin,s1);
	
	int p1=s.find(s1);
	if(p1==string::npos){
		cout<<"Error: String to replace not found!";
		return 0;
	}
	
	cout<<"Enter a new string: ";
	getline(cin,s2);
	
	int p=s.find(s1);
	
	if (p!= string::npos)
	s.replace(p,s1.length(),s2);
	
	cout<<"New sentence: "<<s<<endl;
	return 0; 
}

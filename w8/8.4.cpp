#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s,w,temp;
	int count=0;
	cout<<"Enter a line of text: ";
	getline(cin,s);
	cout<<"Enter word to count: ";
	cin>>w;
	
	int p=0;
	while((p=s.find(w,p))!=string::npos){
		count++;
		p+=w.length();
	}
	cout<<"Occurrences= "<<count<<endl;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s,t;
	cout<<"Enter a string: ";
	cin>>s;
	cout<<"Enter another string: ";
	cin>>t;
	
	int p=s.find(t);
	if(p==string::npos) cout<<1;
	else cout<<p;
	return 0;
	}

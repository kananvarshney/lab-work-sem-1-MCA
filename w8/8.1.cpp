#include<iostream>
#include<cstring>
using namespace std;

void insert(string &s,string sub,int p){
	if(p>s.length())cout<<"Invalid position";
	else s.insert(p,sub);
}
void del(string &s,int p,int n){
	if (p+n>s.length()) cout<<"Invalid position";
	else s.erase(p,n);
}

int main(){
	string s,sub;
	int p,n;
	cout<<"Enter main string: ";
	getline(cin,s);
	cout<<"Enter substring: ";
	getline(cin,sub);
	
	cout<<"Enter position for insertion: ";
	cin>>p;
	insert(s,sub,p);
	
	cout<<"After insertion: "<<s<<endl;
	cout<<"Enter position for deletion: ";
	cin>>p;
	cout<<"Enter no. of characters: ";
	cin>>n;
	del(s,p,n);
	cout<<"After deletion:"<<s;
	return 0;
}


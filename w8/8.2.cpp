#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100];
	cout<<"Enter a string: ";
	cin.getline(s,100);
	
	int l=0,r=strlen(s)-1;
	bool palindrome=true;
	
	while(l<r){
		if(s[l]!=s[r]){
			palindrome=false;
			break;
		}
		l++;
		r--;
	}

if(palindrome) cout<<"Palindrome";
else cout<<"Not palindrome";
return 0;
}

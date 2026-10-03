#include<iostream>
using namespace std;

int*getvalue(int*p) {
return p;
 }

int main(){
	int a=10;
	int*p=getvalue(&a);
	cout<<*p;
	return 0;
}

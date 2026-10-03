#include<iostream>
using namespace std;

class flight{
	int flight_no;
	string source,destination;
	float fare;
public:
	void set_data(int f,string s,string d,float x){
		flight_no=f;
		source=s;
		destination=d;
		fare=x;
	}
	void display(){
		cout<<"Flight No."<<this->flight_no<<endl;
		cout<<"Source "<<this->source<<endl;
		cout<<"Destination "<<this->destination<<endl;
		cout<<"Fare "<<this->fare<<endl;
	}
};
int main(){
	flight f;
	f.set_data(1001,"Delhi","Mumbai",5000);
	f.display();
	return 0;
}

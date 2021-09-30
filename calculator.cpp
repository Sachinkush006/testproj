#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter two number: ";
	cin>>a>>b;
	char op;
	cout<<"Enter optrator: ";
	cin>>op;
	switch(op){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
		    cout<<"invalid operation";
	}
	return 0;
}

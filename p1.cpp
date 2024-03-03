//1. Write a C++ Program to Check Whether a Number is a Positive or Negative Number.

#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	
	if(n>0)
	cout<<"The number "<<n<< " is a positive number"<<endl;
	else
	cout<<"The number "<<n<< " is a negative number"<<endl;
	
	return 0;
}
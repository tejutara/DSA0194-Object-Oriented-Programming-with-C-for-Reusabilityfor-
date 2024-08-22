#include<iostream>
using namespace std;
int main()
{
	double celsius,fahrenheit;
	cout<<"enter a temperature in celsius:";
	cin>>celsius;
	fahrenheit=(celsius*9/5)+32;
	cout<<"temperature in fahrenheit: "<<fahrenheit<<"F";
	return 0;
}

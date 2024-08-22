#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"enter a positive number: ";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	{
		cout<<"the reverse num is:"<<rev;
	    if(n==rev)
	    {
	    	cout<<"the num is palindrome";
	    }
	    else
    	{
	    	cout<<"the num is not a palindrome";
	    }
    	return 0;
    }
}

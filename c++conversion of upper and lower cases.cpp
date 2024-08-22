#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class convertcase
{
	public:
		void touppercase(string &str)
		{
			transform(str.begin(),str.end(),str.begin(),::toupper);
		}
		void tolowercase(string&str)
		{
			transform(str.begin(),str.end(),str.begin(),::tolower);
		}
};
int main()
{
	convertcase cc;
	string str;
	cout<<"enter string:";
	getline(cin,str);
	cc.touppercase(str);
	cout<<"the string in upper case:"<<str;
	cc.tolowercase(str);
	cout<<"the string in lower case:"<<str;
	return 0;
}

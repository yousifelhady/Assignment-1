#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
int static const LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person()
{
	lname = ""; fname[0] = '\0';
}
Person(const string & ln, const char * fn ="Heyyou")
{
	lname = ln ;
	for (int i = 0 ; i < LIMIT ; i++)
	{ fname[i] = fn[i] ; }
}
// the following methods display lname and fname
void Show() const // firstname lastname format
{
	cout << fname << " " << lname ;
	cout << endl;
}
void FormalShow() const // lastname, firstname format
{
	if (lname =="")
	{ cout << "" ; }
	else {
	cout << lname << ", " << fname ;
	cout << endl;}
}
};

void main ()
{
	Person one;
	Person two ("elhady");
	Person three ("elhady" , "yousif");
	one.Show();
	one.FormalShow();
	cout <<endl;
	two.Show();
	two.FormalShow();
	cout <<endl;
	three.Show();
	three.FormalShow();

	system("pause");
}

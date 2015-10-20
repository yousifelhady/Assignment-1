#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class bankaccount
{
public:
	bankaccount(string n , string accno, float b);
	void create ();
	void display ();
	void desposite ();
	void withdraw ();
	
private:
	string name;
	string accountnumber;
	float balance;
};

bankaccount::bankaccount(string n = "Name" , string accno = "Number" , float b = 0 )
{
		name = n ;
		accountnumber = accno ;
		balance = b ;
		cout <<"Default name is: " << n << endl;
		cout <<"Default account number is: " << accno << endl;
		cout <<"Default balance is: " << b << endl;
};
void bankaccount::create ()
{
	    cout <<"Enter your name: " ;
		cin >> name ;
		cout << endl ;
		cout <<"Enter your account number: " ;
		cin >> accountnumber ;
		cout << endl ;
		cout <<"Enter your starting balance: " ;
		cin >> balance ;
		cout << endl ;
};
void bankaccount::desposite ()
{
	int deposite = 0 ;
	cout <<"Enter your deposite value " ;
	cin >> deposite ;
	balance = balance + deposite ;
};
void bankaccount::withdraw ()
{
	int withdraw ;
	cout <<"Enter your withdraw value " ;
	cin >> withdraw ;
	if ( withdraw > balance )
		cout <<"Please enter a value bellow " << balance << endl;
	else
		balance = balance - withdraw ;
	cout <<"Value after withdraw is "<< balance << endl ;
};
void bankaccount::display ()
{
		cout<<endl;
        cout<<setw(0)<<"Your Information is"<<endl;
        cout<<setw(0)<<"Name: "<<name<<endl;
        cout<<setw(0)<<"Account number: "<<accountnumber<<endl;
        cout<<setw(0)<<"Balance: "<<balance<<endl;
};

void main ()
{
	int x ;
	bankaccount b1;
	cout <<endl;
	b1.create();
	b1.display();
	cout <<endl;
	cout <<"To deposite enter <""1"">, to withdraw enter <""2"">, to exit press any other value" <<endl;
	cin >> x;
	if (x==1)
	{b1.desposite();
	b1.display();}
	else if (x==2)
	{b1.withdraw();
	b1.display();}
	else if (x!= 1 || 2)
	{exit;}
		
	system ("pause");
}

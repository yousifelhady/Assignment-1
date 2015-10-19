Name: Yousif Abdelhamid Mohamed Elhady
Section: 3
Seat Number: 33860

Chapter Review Questions

1.	What is a Class?
A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. The data and functions within a class are called members of the class

2.	How does a class accomplish abstraction, encapsulation, and data hiding?
Abstraction: by exposing only the interfaces and hiding the implementation details from the user.
Encapsulation: by bundling the data and the functions that use them.
Data hiding: by making data private to that class from outside the world so no one can access it.

3.	What is the relationship between an object and a class?
Classes and objects are separate but related concepts. Every object belongs to a class and every class contains one or more related objects.
A Class is static. The attributes of a class don't change. The class to which an object belongs is also (usually) static.
An Object on the other hand has a limited lifespan. Objects are created and eventually destroyed. Also during that lifetime, the attributes of the object may undergo significant change.

4.	In What way are classes function members different from class data members?
Class function members are functions defined in class and can be called inside the main function to do its purpose.
Class data members are data types defined in class which belong only to that class and can be used inside the class functions.

5.	Define a class to represent a Bank Account

class bankaccount
{
public:
	void create ();
	void display ();
	void desposite ();
	void withdraw ();
private:
	string name;
	string accountnumber;
	float balance;
};

6.	When are class constructors called?
Constructors are called for setting initial values for certain member variables.
When are class destructors called?
Destructor are called for releasing resources before coming out of the program like closing files, releasing memories etc.

7.	Provide code for a constructor for the bank account class
bankaccount::bankaccount(string n = "Name" , string accno = "Number" , float b = 0 )
{
		name = n ;
		accountnumber = accno ;
		balance = b ;
		cout <<"Default name is: " << n << endl;
		cout <<"Default account number is: " << accno << endl;
		cout <<"Default balance is: " << b << endl;
};


8.	What is a default constructor? What is the advantage of having one?
A default constructor is a constructor that is used to create an object when you don’t provide explicit initialization values.

9.	 

10.	 What are this and *this?
C++ pointer that deal with two objects

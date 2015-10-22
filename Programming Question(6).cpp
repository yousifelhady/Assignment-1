#include <iostream>
using namespace std;

class Move
{
private:
double x;
double y;
public:
Move(double a , double b); // sets x, y to a,b

void showmove() const // shows current x, y values
{
	cout <<"Current value of x is " << x << endl;
	cout <<"Current value of y is " << y << endl;
};
	
Move add(const Move & m) const
{
	double i = this->x + m.x ;
	double j = this->y + m.y ;
	return Move(i, j);
};

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it

void reset(double a = 0, double b = 0) // resets x,y to a, b
{
	cout <<endl;
	cout <<"After reseting the values of x & y are " << endl;
	x = a ;
	y = b ;
}
};
Move::Move(double a, double b)
{
	x = a ;
	y = b ;
};

void main()
{
	Move r(0,0);
	r.showmove();
	double u,v;
	cout <<"Enter new X destination " ;
	cin >> u;
	cout <<endl;
	cout <<"Enter new Y destination ";
	cin >> v;
	cout <<endl;
	
	Move p(u,v);
	Move z = r.add(p);
	
	z.showmove();
	z.reset();
	z.showmove();
	system("pause");
}

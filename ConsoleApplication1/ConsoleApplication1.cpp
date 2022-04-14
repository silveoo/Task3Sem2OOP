#include <iostream>

using namespace std;

const double pi = acos(-1);

class Vector 
{
private:
	int x;
	int y;
public:
	void SetX(int valueX)
	{
		x = valueX;
	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	Vector() 
	{
		x = 0;
		y = 0;
	}
	Vector(int xx, int yy) 
	{
		x = xx;
		y = yy;
	}
	void call()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

class Complex
{
private:
	double re;
	double i;
public:
	void SetRe(double rer)
	{
		re = rer;
	}
	void SetI(double ii)
	{
		i = ii;
	}
	double GetRe()
	{
		return re;
	}
	double GetI()
	{
		return i;
	}
	Complex()
	{
		re = 0;
		i = 0;
	}
	Complex(double rere, double iii)
	{
		re = rere;
		i = iii;
	}
	void call() 
	{
		if (re = 0 && i != 0) cout << i << "i" << endl;
		if (re != 0 && i == 0) cout << re << endl;
		if (re == 0 && i == 0) cout << "0" << endl;
		if (i < 0) cout << re << " - " << i * (-1) << "i" << endl;
		else cout << re << " + " << i << "i" << endl;
	}
};

class Circle
{
private:
	double r;
public:
	void SetR(double rr)
	{
		r = rr;
	}
	double GetR()
	{
		return r;
	}
	Circle()
	{
		r = 0;
	}
	Circle(double rrr)
	{
		r = rrr;
	}
	void call() {
		cout << "Радиус круга: " << r << endl;
		cout << "Площадь круга: " << pi * pow(r, 2) << endl;
	}
};

int main()
{

}

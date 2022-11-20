#include <iomanip>
#include <iostream>
#include <Windows.h>
#include <conio.h>


using namespace std;

class TS
{
protected:
	string color;
	double speed;
	int count;
public:
	TS() { color = speed = count = 0; };
	TS(string color, double speed) 
	{
		this->color = color;
		this->speed = speed;
	}
	void Print();
};

class TS_Road : public TS
{
protected:
	int cylinder;
	string engine;
public:
	TS_Road() { engine = cylinder = 0; }
	TS_Road(int cylinder, string engine) : TS (color, speed)
	{
		this->cylinder = cylinder;
		this->engine = engine;
		this->color = color;
		this->speed = speed;
	}
	void Print();
};

class Auto : public TS_Road
{
private:
	string brand;
	double cash;
public:
	Auto() { brand = cash = 0; };
	Auto(string brand, double cash, string color, double speed, int cylinder, string engine)
	{
		this->brand = brand;
		this->cash = cash;
		this->cylinder = cylinder;
		this->engine = engine;
		this->color = color;
		this->speed = speed;
	}
	void Print();
	void max_spped(Auto auto_moto[], int count);
	void max_cash(Auto auto_moto[], int count);

};

class Moto : public TS_Road
{
private:
	string brand;
	double cash;
public:
	Moto() { brand = cash = 0; };
	Moto(string brand, double cash, string color, double speed, int cylinder, string engine)
	{
		this->brand = brand;
		this->cash = cash;
		this->cylinder = cylinder;
		this->engine = engine;
		this->color = color;
		this->speed = speed;
	}
	void Print();
	void max_spped(Moto auto_moto[], int count);
	void max_cash(Moto auto_moto[], int count);

};

void frame();
void shows_menu();

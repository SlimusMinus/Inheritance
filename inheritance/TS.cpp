#include "TS.h"

void TS::Print()
{
	cout <<  color << "\t    " << speed << "\t  ";
}



void TS_Road::Print()
{
	cout << cylinder << "\t" << engine << "\t";
	TS ::Print();
}

void Moto::Print()
{
	cout << "motorcycle " << brand << "\t\t";
	TS_Road::Print();
	cout << " \t " << cash << " $ ||" << endl;

}

void Moto::max_spped(Moto auto_moto[], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (auto_moto[i].speed < auto_moto[j].speed)
				swap(auto_moto[i], auto_moto[j]);
		}
	}
	cout << "The fastest motorcycle - " << auto_moto->brand << " speed - " << auto_moto->speed << endl;

}

void Moto::max_cash(Moto auto_moto[], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (auto_moto[i].cash < auto_moto[j].cash)
				swap(auto_moto[i], auto_moto[j]);
		}
	}
	cout << "The most expensive motorcycle - " << auto_moto->brand << " price - " << auto_moto->cash << " $" << endl;
}


void Auto::Print()
{
	cout << "automobile " << brand << "\t";
	TS_Road::Print();
	cout << "\t" << cash << " $ ||" << endl;
}

void Auto::max_spped(Auto auto_moto[], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (auto_moto[i].speed < auto_moto[j].speed)
				swap(auto_moto[i], auto_moto[j]);
		}
	}
	cout << "The fastest automobile - " << auto_moto->brand << " speed - " << auto_moto->speed << endl;
}

void Auto::max_cash(Auto auto_moto[], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (auto_moto[i].cash < auto_moto[j].cash)
				swap(auto_moto[i], auto_moto[j]);
		}
	}
	cout << "The most expensive automobile - " << auto_moto->brand << "price - " << auto_moto->cash << " $" << endl;
}

void frame()
{
	cout << "******************************************************************************************" << endl;
	cout << "||N||        label       || cylinder ||  engine    ||   color  || max speed ||  price   ||" << endl;
	cout << "******************************************************************************************" << endl;

}

void shows_menu()
{
	system("cls");
	cout << "The fastest motorcycle" << endl;
	cout << "The most expensive motorcycle" << endl;
	cout << "The fastest automobile" << endl;
	cout << "The most expensive automobile" << endl;
	cout << "****************" << endl;
	cout << "Press ESC to exit" << endl;
}

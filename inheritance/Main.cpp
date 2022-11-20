#include "TS.h"
void gotoxy(short x, short y)
{
	COORD coord = { x, y };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(h, coord);
}


void main()
{
	Auto Mersedes("Mersedes   ", 12000, "Black ", 350, 10, " Electro ");
	Auto Ferrari("Ferrari    ", 15500, "Red   ", 400, 12, " Gasoline");
	Auto Pagani_Zonda("Pagani_Zonda", 11750, "Grey  ", 420, 12, " Electro ");
	Auto Jaguar("Jaguar     ", 13752, "Green ", 380, 10, " Gasoline");
	Auto Bugatti("Bugatti    ", 22000, "White ", 364, 12, " Electro ");
	Auto arr_auto[5] = { Mersedes, Ferrari, Pagani_Zonda, Jaguar, Bugatti };

	Moto Honda("Honda", 5600, " Red ", 365, 5, "Gasoline ");
	Moto Suzuki("Suzuki", 7800, " Blue ", 320, 6, "Electro ");
	Moto Yamaha("Yamaha", 6820, " Grey ", 398, 6, "Electro ");
	Moto Kawasaki("BMV   ", 9999, " Pink ", 310, 4, "Gasoline ");
	Moto Ducati("Ducati", 9520, " Black ", 458, 6, "Gasoline ");
	Moto arr_moto[5] = { Honda, Suzuki, Yamaha, Kawasaki, Ducati };
		
	system("color F0");
	const int num_menu = 4;
	int ch = 0, active_menu = 0;
	bool q;
	do
	{
		bool exit = false;
		while (!exit)
		{

			shows_menu();
			gotoxy(0, active_menu);
			ch = _getch();
			if (ch == 224) ch = _getch();
			switch (ch)
			{

			case 27: exit = true; break;
			case 72: active_menu--; break;
			case 80: active_menu++; break;
			case 13:

				if (active_menu == 0)
				{
					system("cls");
					frame();
					for (int i = 0; i < 5; i++)
					{
						cout << "||" << i + 1 << "  ";
						arr_moto[i].Print();
						cout << "******************************************************************************************" << endl;
					}
					cout << "\n\n" << endl; 
					cout << "********************************************************" << endl;
					arr_moto[5].max_spped(arr_moto, 5);
					cout << "********************************************************" << endl;
					system("pause");
				}
				else if (active_menu == 1)
				{
					system("cls");
					frame();
					for (int i = 0; i < 5; i++)
					{
						cout << "||" << i + 1 << "  ";
						arr_moto[i].Print();
						cout << "******************************************************************************************" << endl;
					}
					cout << "\n\n" << endl;
					cout << "********************************************************" << endl;
					arr_moto[5].max_cash(arr_moto, 5);
					cout << "********************************************************" << endl;
					system("pause");

				}
				else if (active_menu == 2)
				{
					system("cls");
					frame();
					for (int i = 0; i < 5; i++)
					{
						cout << "||" << i + 1 << "  ";
						arr_auto[i].Print();
						cout << "******************************************************************************************" << endl;
					}
					cout << "\n\n" << endl;
					cout << "********************************************************" << endl;
					arr_auto[5].max_spped(arr_auto, 5);
					cout << "********************************************************" << endl;
					system("pause");
				}
				else if (active_menu == 3)
				{
					system("cls");
					frame();
					for (int i = 0; i < 5; i++)
					{
						cout << "||" << i + 1 << "  ";
						arr_auto[i].Print();
						cout << "******************************************************************************************" << endl;
					}
					cout << "\n\n" << endl;
					cout << "********************************************************" << endl;
					arr_auto[5].max_cash(arr_auto, 5);
					cout << "********************************************************" << endl;
					system("pause");
				}
				
				break;
			}
			if (active_menu < 0) active_menu = num_menu - 1;
			if (active_menu > num_menu - 1) active_menu = 0;

		}
		system("cls");
		cout << "If you wanna continue press 1, no 0" << endl;
		cin >> q;
		system("cls");
	} while (q == 1);
	system("cls");

	
}
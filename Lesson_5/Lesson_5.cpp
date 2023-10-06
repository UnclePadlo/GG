#include <iostream>
using namespace std;
int main()
{
	int gg = 10;

	for (int i = 0; i < gg; i++)
	{
		for (int j = 0; j < gg; j++)
		{
			// область під головною та 
			// під побічною діагоналями
			if (i + j >= 9 && i >= j)
				cout << "|===|";
			else
				cout << "     ";
		}
		cout << endl;
	}
	/*cout <<"|                                                |" << endl;*/
	cout << "|\t\t\t\t\t\t |" << endl;

	for (int a = 0; a < gg; a++)
	{
		for (int i = 0; i < gg; i++)
		{
			cout << "|###|";
		}
		cout << endl;
	}
	cout << endl;
}


#include "Polinom.h"
#include <string>
#include <stdlib.h> 
#include"Exception.h"
using namespace std;


//-2+5x^2y+z-yz+x^2yz
//2+y-2z+x^2y
int main()
{
	try
	{
		string s1, s2;
		int n = 1;
		while (n != 0)
		{
			cout << "enter the first polynomial" << endl;
			std::getline(std::cin, s1);
			Polinom pol1(s1);
			cout << "enter the second polynomial" << endl;
			std::getline(std::cin, s2);
			Polinom pol2(s2);
			cout << "select the action you want to do" << endl;
			cout << "1 - '+' " << endl << "2 - '-' " << endl << "3 - '*' " << endl << "0 - if you want to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
			{
				cout << pol1 + pol2 << endl;
				break;
			}
			case 2:
			{
				cout << pol1 - pol2 << endl;
				break;
			}
			case 3:
			{
				cout << pol1 * pol2 << endl;
				break;
			}
			default:
				cout << "incorrect input" << endl;
			}
		}
	}
	catch (const M_Exeption & exception)
	{
		cerr << " Error: " << exception.what() << endl;


	}
	system("pause");

	return 0;
}
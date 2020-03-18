#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k, s, c;
	cout << " ������� ����� 1-�� �������" << endl;
	cin >> n;
	Vector a(n);
	cout << " ������� ���������� 1-�� �������" << endl;
	cin >> a;
	cout << " ������� ����� 2-�� �������" << endl;
	cin >> k;
	Vector b(k);
	cout << " ������� ���������� 2-�� �������" << endl;
	cin >> b;
	cout << " �������� ��������, �������� ������ �� ������� � ������ ��������" << endl;
	cout << "1. ����� ������� ������� " << endl;
	cout << "2. ����������� ��������� " << endl;
	cout << "3. ��������� ��������� " << endl;
	cout << "4. ����������� ������� " << endl;
	cout << "5. ��������� ������� " << endl;
	cout << "6. ��������� ������������ �������� " << endl;
	cout << "7. ������������ �������� " << endl;
	cout << "8. ��������� �� ��������� ���� �������� " << endl;
	cout << "9. ��������� �� ����������� ���� �������� " << endl;
	cin >> s;
	switch (s)
	{
	case 1:
		cout << a.len();
		break;
	case 2:
		cout << " ������� �����, ������� ������ �� ���������" << endl;
		cin >> c;
		cout << (a + c) << endl;
		break;
	case 3:
		cout << " ������� �����, ������� ������ �� �������" << endl;
		cin >> c;
		cout << (a - c) << endl;
		break;
	case 4:
		try
		{
			cout << (a + b);
		}
		catch (...)
		{
			cout << " ������: ����� �������� �� ���������  " << endl;
		}
		break;
	case 5:
		try
		{
			cout << (a - b);
		}
		catch (...)
		{
			cout << " ������: ����� �������� �� ���������  " << endl;
		}
		break;
	case 6:
		try
		{
			cout << (a * b) << endl;
		}
		catch (...)
		{
			cout << " ������: ����� �������� �� ��������� " << endl;
		}
		break;
	case 7:
		cout << (a = b) << endl;
		break;
	case 8:
		if (a == b)
			cout << "������� ���������" << endl;
		else
			cout << "������� �� ���������" << endl;
		break;
	case 9:
		if (a != b)
			cout << "������� �� ���������" << endl;
		else
			cout << "������� ���������" << endl;
		break;

	default:
		cout << "������������ ����" << endl;
	}
	system("pause");
}
#include "Vector.h"
#include <locale.h>


void Test1() // ïðèáàâëåíèå êîíñòàíòû
{
	int n, c;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (v + c) << endl;
}

void Test2() // âû÷èòàíèå êîíñòàíòû
{
	int n;
	float c;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (v - c) << endl;
}

void Test3() //êîíñòðóêòîð
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << endl << v << endl;

}

void Test4() // êîíñòðóêòîð
{
	int n;
	cout << "Ââåäèòå äëèíó ìàññèâà çíà÷åíèé" << endl;
	cin >> n;
	float* x = new float(n);
	cout << "Ââåäèòå êîîðäèíàòû ìàññèâà çíà÷åíèé" << endl;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	TVector<float> v(n, x);
	cout << endl << v << endl;
}

void Test5() // êîíñòðóêòîð êîïèðîâàíèÿ
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << endl << v << endl;

}

void Test6() //äëèíà
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << endl << v.len() << endl;
}

void Test7() // ñóììà âåêòîðîâ
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	try
	{
		cout << endl << (v + k) << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl;
	}
}

void Test8() // ðàçíîñòü âåêòîðîâ
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	try
	{
		cout << endl << (v - k) << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl;
	}
}

void Test9() // ñêàëÿðíîå ïðîèçâåäåíèå
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	try
	{
		cout << endl << (v * k) << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl;
	}
}

void Test10() // ïðèñâàèâàíèå
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	cout << endl << (v = k) << endl;

}

void Test11() // ñðàâíåíèå íà ðàâåíñòâî
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	if (v == k)
		cout << "Âåêòîðû ñîâïàäàþò" << endl;
}

void Test12() // ñðàâíåíèå íà íåðàâåíñòâî
{
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå äëèíó âåêòîðà k" << endl;
	cin >> n;
	TVector<float> k(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà k" << endl;
	cin >> k;
	if (v != k)
		cout << "Âåêòîðû íå ñîâïàäàþò" << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();
	Test8();
	Test9();
	Test10();
	Test11();
	Test12();
	system("pause");
}
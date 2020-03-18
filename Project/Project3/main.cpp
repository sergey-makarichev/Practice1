#include "TMatrix.h"
#include"TVector.h"

using namespace std;

void Test1()
{
	cout << "\t Òåñò 1: êîíñòðóêòîð ñ ïàðàìåòðîì" << endl;
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << endl << v << endl << endl;

}

void Test2()
{
	cout << "\t Òåñò 2: êîíñòðóêòîð êîïèðîâàíèÿ" << endl;
	int n;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << endl << v << endl << endl;

}

void Test3()
{
	cout << "\t Òåñò 3: êîíñòðóêòîð èíäåêñàöèè" << endl;
	int n, k;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå èíäåêñ, ê êîòîðîìó õîòèòå îáðàòèòüñÿ" << endl;
	cin >> k;
	if (k < n)
		cout << v[2] << endl << endl;
	else
		cout << "Â äàííîì âåêòîðå ýëåìåíòà ñ òàêèì èíäåêñîì íå ñóùåñòâóåò" << endl << endl;
}

void Test4()
{
	cout << "\t Òåñò 4: ïðèáàâëåíèå êîíñòàíòû" << endl;
	int n;
	float c;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (v + c) << endl << endl;
}

void Test5()
{
	cout << "\t Òåñò 5: âû÷èòàíèå êîíñòàíòû" << endl;
	int n;
	float c;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (v - c) << endl << endl;
}

void Test6()
{
	cout << "\t Òåñò 6: óìíîæåíèå íà êîíñòàíòó" << endl;
	int n;
	float c;
	cout << "Ââåäèòå äëèíó âåêòîðà v" << endl;
	cin >> n;
	TVector<float> v(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v" << endl;
	cin >> v;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (v * c) << endl << endl;
}

void Test7()
{
	cout << "\t Òåñò 7: ñóììà âåêòîðîâ" << endl;
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
		cout << endl << (v + k) << endl << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl << endl;
	}
}

void Test8()
{
	cout << "\t Òåñò 8: ðàçíîñòü âåêòîðîâ" << endl;
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
		cout << endl << (v - k) << endl << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl << endl;
	}
}

void Test9()
{
	cout << "\t Òåñò 9: ñêàëÿðíîå ïðîèçâåäåíèå âåêòîðîâ" << endl;
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
		cout << endl << (v * k) << endl << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: äëèíû âåêòîðîâ íå ñîâïàäàþò  " << endl << endl;
	}
}

void Test10()
{
	cout << "\t Òåñò 10: ïðèñâàèâàíèå âåêòîðîâ" << endl;
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
	cout << endl << (v = k) << endl << endl;
}

void Test11()
{
	cout << "\t Òåñò 11: ñðàâíåíèå íà ðàâåíñòâî âåêòîðîâ" << endl;
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
		cout << "Âåêòîðû ñîâïàäàþò" << endl << endl;
	else
		cout << "Âåêòîðû íå ñîâïàäàþò" << endl << endl;
}

void Test12()
{
	cout << "\t Òåñò 12: ñðàâíåíèå íà íåðàâåíñòâî âåêòîðîâ" << endl;
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
		cout << "Âåêòîðû íå ñîâïàäàþò" << endl << endl;
	else
		cout << "Âåêòîðû ñîâïàäàþò" << endl << endl;
}

void TestM1()
{
	cout << "\t Òåñò 1: êîíñòðóêòîð ñ ïàðàìåòðîì" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << endl << m << endl << endl;
}

void TestM2()
{
	cout << "\t Òåñò 2: ïðèáàâëåíèå êîíñòàíòû" << endl;
	int n;
	float c;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå ïðèáàâèòü" << endl;
	cin >> c;
	cout << endl << (m + c) << endl << endl;
}

void TestM3()
{
	cout << "\t Òåñò 3: âû÷èòàíèå êîíñòàíòû" << endl;
	int n;
	float c;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå êîíñòàíòó, êîòîðóþ õîòèòå âû÷åñòü" << endl;
	cin >> c;
	cout << endl << (m - c) << endl << endl;
}

void TestM4()
{
	cout << "\t Òåñò 4: óìíîæåíèå íà êîíñòàíòó" << endl;
	int n;
	float c;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå êîíñòàíòó, íà êîòîðóþ õîòèòå óìíîæèòü" << endl;
	cin >> c;
	cout << endl << (m * c) << endl << endl;
}

void TestM5()
{
	cout << "\t Òåñò 5: ñëîæåíèå ìàòðèö" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m1" << endl;
	cin >> n;
	TMatrix<float> m1(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m1" << endl;
	cin >> m1;
	try
	{
		cout << endl << (m + m1) << endl << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: ðàçìåðû ìàòðèö íå ñîâïàäàþò  " << endl << endl;
	}
}

void TestM6()
{
	cout << "\t Òåñò 6: âû÷èòàíèå ìàòðèö" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m1" << endl;
	cin >> n;
	TMatrix<float> m1(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m1" << endl;
	cin >> m1;
	try
	{
		cout << endl << (m - m1) << endl << endl;
	}
	catch (...)
	{
		cout << " Îøèáêà: ðàçìåðû ìàòðèö íå ñîâïàäàþò  " << endl << endl;
	}
}

void TestM7()
{
	cout << "\t Òåñò 7: ïðèñâàèâàíèå ìàòðèö" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m1" << endl;
	cin >> n;
	TMatrix<float> m1(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m1" << endl;
	cin >> m1;
	cout << endl << (m = m1) << endl << endl;
}

void TestM8()
{
	cout << "\t Òåñò 8: ñðàâíåíèå íà ðàâåíñòâî ìàòðèö" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m1" << endl;
	cin >> n;
	TMatrix<float> m1(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m1" << endl;
	cin >> m1;
	if (m == m1)
		cout << "Ìàòðèöû ñîâïàäàþò" << endl << endl;
	else
		cout << "Ìàòðèöû íå ñîâïàäàþò" << endl << endl;
}

void TestM9()
{
	cout << "\t Òåñò 9: ñðàâíåíèå íà íåðàâåíñòâî ìàòðèö" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m1" << endl;
	cin >> n;
	TMatrix<float> m1(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m1" << endl;
	cin >> m1;
	if (m != m1)
		cout << "Ìàòðèöû íå ñîâïàäàþò" << endl << endl;
	else
		cout << "Ìàòðèöû ñîâïàäàþò" << endl << endl;
}

void TestM10()
{
	cout << "\t Òåñò : óìíîæåíèå ìàòðèöû íà âåêòîð" << endl;
	int n;
	cout << "Ââåäèòå ðàçìåð ìàòðèöû m" << endl;
	cin >> n;
	TMatrix<float> m(n);
	cout << "Ââåäèòå ïî÷ëåííî ýëåìåíòû âåðõíåòðåóãîëüíîé ìàòðèöû m" << endl;
	cin >> m;
	cout << "Ââåäèòå ðàçìåð âåêòîðà v1" << endl;
	cin >> n;
	TVector<float> v1(n);
	cout << "Ââåäèòå êîîðäèíàòû âåêòîðà v1" << endl;
	cin >> v1;
	cout << (m * v1) << endl << endl;
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
	TestM1();
	TestM2();
	TestM4();
	TestM5();
	TestM6();
	TestM7();
	TestM8();
	TestM9();
	TestM10();
	system("pause");
}
#include <iostream>
using namespace std;

void Task1()
{
	cout << "\n�������� 1-�� �������. ����." << endl;
	cout << "\n�����, �����, � ������� �����, \n �������� ��� ������� �����. \n � ���� ���� ������� ������� \n ��� ������� � ������� ����." << endl;
}
void Task2()
{
	cout << "\n�������� 2-�� �������. ������� �� �������� �� ������� �� ������� �� ����������." << endl;
	int grade, newgrade;
	cout << "������� ����������� � �������� �������: "; cin >> grade;
	
	newgrade = grade * 9 / 5 + 32;

	cout << "�� �������: " << grade << "\n" << "�� ���������� : " << newgrade << endl;
	

}
void Task3()
{
	cout << "\n�������� 3-� �������. �������� ������" << endl;
	cout << "�������� ������ ���� a/b + c/d. \n" << endl;

	int a,b,c,d,result1,result2;
	cout << "������� a: "; cin >> a;
	cout << "������� b: "; cin >> b;
	cout << "������� c: "; cin >> c;
	cout << "������� d: "; cin >> d;
	result1 = a * d + b * c;
	result2 = b * d;
	cout << "���������: " << result1 << "/" << result2 << endl;
	

}

void Task4()
{
	cout << "\n�������� 4-�� �������. ������� �� ������ �������� ������� � �����. " << endl;
	
	float funt, shir, pens, newfunt;
	cout << "������� ���������� ������: " ; cin >> funt;
	cout << "������� ���������� ���������: "; cin >> shir;
	cout << "������� ���������� ������: "; cin >> pens;

	newfunt = funt + shir / 20 + pens / 240;

	cout << "���������� ���������� ������: " << newfunt << endl; //������ ����� - ������� �����. ��� ������� - ����.

}

void Task5()
{
	cout << "\n�������� 5-�� �������. ������� �� ����� �������� ������� � ������." << endl;

	float newfunt, funt, shir, pens;

	cout << "������� ���������� ���������� ������: "; cin >> newfunt;

	funt = int(newfunt);
	pens = (newfunt - int(newfunt))*240;
	shir = int(pens / 12);

	pens = int(pens - shir * 12);

	cout << "����� � ������ �������� �������: " << funt << " " << shir << " " << pens << endl;
	

}
int main()
{
	setlocale(LC_ALL, "Rus");
	
	int num;
	while (true)
	{
		cout << "\n������������! ������� ����� ������� (1,2,3,4 ��� 5): "; cin >> num;

		if (num == 1)
		{
			Task1();
		}
		if (num == 2)
		{
			Task2();
		}
		if (num == 3)
		{
			Task3();
		}
		if (num == 4)
		{
			Task4();
		}
		if (num == 5)
		{
			Task5();
		}
	}
}
#include <iostream>
using namespace std;

void Task1()
{
	cout << "\n�������� 1-�� �������. ��������.\n" << endl;
	
	for (int counter = 1; counter < 41; counter+=2)
	{
		for (int sub_counter = 0; sub_counter < counter; sub_counter++)
		{
			cout << "X";

		}
		cout << "\n";
	}
	
}

int fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1; 
	else 
		return N * fact(N - 1);
}
void Task2()
{
	
	cout << "\n�������� 2-�� �������. ���������� ����������" << endl;

	int number;

	while (true)
	{
		printf("��� ���������� ��������� - ������� �����. ��� ���������� ���������� - ������� 0 \n");
		cin >> number;

		if (number == 0)
			break;
		cout << "��������� ��� ����� " << number << " = " << fact(number) << endl;

	}
	cout << "�� ����� 0. ��������� ����������. \n" << endl;
	

}
void Task3()
{
	float capital, proc;
	int years;

	cout << "\n�������� 3-� �������. ���������� �����." << endl;
	cout << "������� ��������� �����: ";			 cin >> capital;
	cout << "������� ����� ���: ";					 cin >> years;
	cout << "������� ���������� ������� ������: ";   cin >> proc;

	for (int cur_years = 0; cur_years < years; cur_years++)
		capital += capital * proc/100;
	cout << "����� " << years << " ��� �� ��������: " << capital << endl;
}

void Task4()
{
	float price, proc, start_capital,su = 0;
	int years;
	cout << "\n�������� 4-�� �������. �������." << endl;

	cout << "������� ��������� ��������: ";			 cin >> price;
	cout << "������� ��������� �����: ";			 cin >> start_capital;
	cout << "������� ����� ���: ";					 cin >> years;
	cout << "������� ���������� ������� ������: ";   cin >> proc;

	price -= start_capital;
	for (int cur_years = 0; cur_years < years; cur_years++)
	{
		cout << "���: " << cur_years + 1 << ". ������ �� ������ ���: " << price * proc / 100 << endl;
		price -= price * proc / 100;
		su += price * proc / 100;
	}
	cout << "��������� �������: " << su << endl;
}

	void Task5()
	{
		cout << "\n�������� 5-�� �������." << endl;

		string ans;

		while (true)
		{
			int funt, shil, pens;
			cout << "������� ������ ����� (�����, ��������, ����� ����� ������): "; cin >> funt >> shil >> pens;

			int funt2, shil2, pens2;
			cout << "������� ������ ����� (�����, ��������, ����� ����� ������): "; cin >> funt2 >> shil2 >> pens2;

			int shilpl, funtpl;

			shilpl = (pens + pens2) / 12;
			pens = (pens + pens2) % 12;

			funtpl = (pens + pens2) / 20;
			shil = (shil + shil2) % 20 + shilpl;

			funt = funt + funt2 + funtpl;

			cout << "�����: " << funt << " " << shil << " " << pens << endl;

			cout << "��� ���������� ������������� ��������� ������� + : "; cin >> ans;
			if (ans != "+")
				break;

		}


		

		
		
		

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
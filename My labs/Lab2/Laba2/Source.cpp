#include <iostream>
using namespace std;

void Task1()
{
	cout << "\n�������� 1-�� �������. ��������.\n" << endl;
	
	for (int counter = 1; counter < 41; counter+=2)
	{
		for (int sub_counter = 41; sub_counter > counter; sub_counter--)
		{
			cout << " ";

		}
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

	cout << "\n�������� 3-� �������. ���������� �����. (����������� ������������������ �������)" << endl;
	cout << "������� ��������� �����: ";			 cin >> capital;
	cout << "������� ����� ���: ";					 cin >> years;
	cout << "������� ���������� ������� ������: ";   cin >> proc;
	printf("\n");
	for (int cur_years = 0; cur_years < years; cur_years++)
	{
		capital += capital * proc / 100;
		if (cur_years + 1 != years)
			cout << "� ����� " << cur_years + 1 << "-��� ���� �� ��������: " << capital << endl;
		else
			printf("\n");
	}

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

	float mi;
	price -= start_capital;
	mi = price / years;
	for (int cur_years = 0; cur_years < years; cur_years++)
	{
		cout << "���: " << cur_years + 1 << ". ������ �� ������ ���: " << mi + price*proc/100 << endl;
		su += mi + price * proc / 100;
		price -= mi;
	}
	cout << "��������� �������: " << su << endl;
}

	void Task5()
	{
		cout << "\n�������� 5-�� �������. ������������ �������� ����." << endl;

		string ans;

		while (true)
		{
			int funt, shil, pens;
			cout << "������� ������ ����� (�����, ��������, ����� ����� ������): "; cin >> funt >> shil >> pens;

			int funt2, shil2, pens2;
			cout << "������� ������ ����� (�����, ��������, ����� ����� ������): "; cin >> funt2 >> shil2 >> pens2;

			int shilpl, funtpl;

			pens += pens2;
			shil += shil2;
			funt += funt2;

			shilpl = pens / 12;
			pens = pens % 12;

			funtpl = shil / 20;
			shil = shil % 20 + shilpl;

			funt += funtpl;
			cout << "�����: " << funt << " " << shil << " " << pens << endl;

			cout << "��� ���������� ������������� ��������� ������� \"+\" : "; cin >> ans;
			if (ans != "+")
				break;

		}
	}
	
	void Task5b()
	{
		cout << "\n�������� 5-�� ������� (2-�� ������). ������������ �������� ����." << endl;

		string ans;
		int shilpl, funtpl;
		int funt, shil, pens;
		int funt2, shil2, pens2;

		cout << "������� ������ ����� (�����, ��������, ����� ����� ������): "; cin >> funt >> shil >> pens;
		cout << "������� ������ (����������) ����� (�����, ��������, ����� ����� ������): "; cin >> funt2 >> shil2 >> pens2;

		pens += pens2;
		shil += shil2;
		funt += funt2;

		shilpl = pens / 12;
		pens = pens % 12;

		funtpl = shil / 20;
		shil = shil % 20 + shilpl;

		funt += funtpl;

		cout << "�����: " << funt << " " << shil << " " << pens << endl;

		while (true)
		{
			cout << endl << "��� ������ ��������� �������� ������� \"+\" : "; cin >> ans;
			if (ans == "+")
			{
				cout << "������� ������ (����������) ����� (�����, ��������, ����� ����� ������): "; cin >> funt2 >> shil2 >> pens2;
				shilpl = (pens + pens2) / 12;
				pens = (pens + pens2) % 12;

				funtpl = (pens + pens2) / 20;
				shil = (shil + shil2) % 20 + shilpl;

				funt = funt + funt2 + funtpl;

				cout << "�����: " << funt << " " << shil << " " << pens << endl;
			}

			else
				break;
		}
			
		

	}

		
		
	int main()
	{
		setlocale(LC_ALL, "Rus");
		int num;
	
		while (true)
		{
			cout << "\n������������! ������� ����� ������� (1,2,3,4 ��� 5 (���: 6 - ������ ������ 5-��� �������)): "; cin >> num;
			
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

			if (num == 6)
			{
				Task5b();
			}
		}
	}
#include <iostream>
#include <Windows.h> 
#include <vector>
using namespace std;


void Task1()
{
	cout << "\n�������� 1-�� �������. ������� �������� �������� � ������� ������." << endl;
	struct fraction
	{
		int numerator; //���������
		int denominator; //�����������
	};
	int nu;
	double sum = 0.0;
	fraction d;

	cout << "������� ���������� ������, ������� �� ������� ������ �����: "; cin >> nu;

	fraction* mas = new fraction[nu];

	for (int k = 0; k < nu; k++)
	{
		cout << "������� ����� (������: a/a): "; scanf_s("%d/%d", &d.numerator, &d.denominator);
		mas[k] = d;
	}

	for (int k = 0; k < nu; k++)
	{
		sum += (static_cast<double>(mas[k].numerator) / mas[k].denominator);
	}
	sum = sum / nu;
	cout << "������� ��������: "; printf("%.2f", sum);

}

int MAX_for_Task2(int size, int m[])
{
	int max = -2147483648;
	for (int k = 0; k < size; k++)
	{
		if (max < m[k])
			max = m[k];
	}
	return max;
}

void Task2()
{
	cout << "\n�������� 2-�� �������." << endl;
	
	int nu = 0,digital = 0;

	cout << "������� ���������� ������, ������� �� ������� ������ �����: "; cin >> nu;

	int* mas = new int[nu];

	for (int k = 0; k < nu; k++)
	{
		cout << "������� ����� �����: "; cin >> digital;
		mas[k] = digital;

	}

	cout << "������������ ����� � �������: " << MAX_for_Task2(nu, mas);




}
void reversit(char stoke[])
{
	int i = 0;
	for (i = 0; stoke[i]; i++);
	for (int j = 0; j < i / 2; j++)
	swap(stoke[j], stoke[i - 1 - j]);

}
void Task3()
{
	cout << "\n�������� 3-� �������. ��������� ������" << endl;

	char st[256];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� �������: ";

	cin.ignore();
	cin.getline(st, 256, '\n');

	reversit(st);
	cout << "������������ ������:" << endl << st;
}

struct employee
{
	char name[256];
	long ID;
};

void getdata(vector<employee> &m)
{
	employee emp;
	cout << "������� ��� ���������� � ��� ID. " << endl;
	cout << "������� ���: "; cin.ignore(); cin.getline(emp.name, 256, '\n');
	cout << "������� ID: "; cin >> emp.ID;
	m.push_back(emp);
	cout << endl;
}

void putdata(vector<employee> &m)
{
	cout << "������ �����������:" << endl << endl;
	int n = m.size();
	for (int k = 0; k < n; k++)
		cout << "���: " << m[k].name << ", ID: " << m[k].ID << endl;
	cout << endl;
}

void Task4()
{
	cout << "\n�������� 4-�� �������. ���� ������ �������� (������ - ��������� ������� � �������!)" << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::vector<employee> mas_employee;

	getdata(mas_employee);
	getdata(mas_employee);
	getdata(mas_employee);

	putdata(mas_employee);


}


struct distanc
	{
		int foot;
		int inches;
	};

float avatage_distance_for_Task5(int size, struct distanc m[])
{
	float sumd = 0.0;
	for (int k = 0; k < size; k++)
	{
		sumd += m[k].inches + (m[k].foot * 12);
	}
	sumd = sumd / size;
	return sumd;
}

void Task5()
{
	cout << "\n�������� 5-�� �������. ������� �������� ����������." << endl;

	int count_dis = 5; //���������� �������� ���������� (�� ������� - 5)
	distanc* mas_distance = new distanc[count_dis];
	
	distanc d;
	for (int k = 0; k < count_dis; k++)
	{
		cout << "������� �������� (���� � ����� ����� ������): "; cin >> d.foot >> d.inches;
		mas_distance[k] = d;
	}

	cout << "������� ���������� (� ������): " << avatage_distance_for_Task5(count_dis, mas_distance);

}

int main()
{
	setlocale(LC_ALL, "Rus");

	int num;
	while (true)
	{
		cout << "\n\n������������! ������� ����� ������� (1,2,3,4 ��� 5): "; cin >> num;

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
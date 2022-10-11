#include <iostream>
using namespace std;

void Task1()
{
	cout << "\n�������� 1-�� �������. ���������." << endl;

	struct employee
	{
		int ID;
		float pay;
	};

	employee emp1, emp2, emp3;

	cout << "������� ID ���������� � ��� ���������� ����� (����� ������): "; cin >> emp1.ID >> emp1.pay;
	cout << "������� ID ���������� � ��� ���������� ����� (����� ������): "; cin >> emp2.ID >> emp2.pay;
	cout << "������� ID ���������� � ��� ���������� ����� (����� ������): "; cin >> emp3.ID >> emp3.pay;

	cout << "ID: " << emp1.ID << ", ��: " << emp1.pay << endl;
	cout << "ID: " << emp2.ID << ", ��: " << emp2.pay << endl;
	cout << "ID: " << emp3.ID << ", ��: " << emp3.pay << endl;


}
void Task2()
{
	cout << "\n�������� 2-�� �������. ����������� ��������� �� ������ �����." << endl << endl;

	enum etype { laborer, secretary, manager, accountant, executive, researcher };

	
	char first_word;
	etype number;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << "\n������� ������ ����� ���������: "; cin >> first_word;
	printf("\n");

	switch (first_word)
	{
	case 'l':
		number = laborer;
		break;
	case 's':
		number = secretary;
		break;

	case 'm':
		number = manager;
		break;
	case 'a':
		number = accountant;
		break;

	case 'e':
		number = executive;
		break;

	case 'r':
		number = researcher;
		break;
	}

	switch (number)
	{
	case laborer:
		cout << "������ �������� ���������: laborer";
		break;

	case secretary:
		cout << "������ �������� ���������: secretary";
		break;
	case manager:
		cout << "������ �������� ���������: manager";
		break;
	case accountant:
		cout << "������ �������� ���������: accountant";
		break;
	case executive:
		cout << "������ �������� ���������: executive";
		break;
	case researcher:
		cout << "������ �������� ���������: researcher";
		break;
	}
	printf("\n");
}
void Task3()
{
	cout << "\n�������� 3-� �������. ���������� ��������� � ������� � �������." << endl;
	
	struct fraction
	{
		int numerator; //���������
		int denominator; //�����������
	};

	fraction d1, d2;

	cout << "������� ������ ����� (������: a/a): "; scanf_s("%d/%d", &d1.numerator, &d1.denominator);
	cout << "������� ������ ����� (������: a/a): "; scanf_s("%d/%d", &d2.numerator, &d2.denominator);

	cout << "���������: " << (d1.numerator * d2.denominator + d1.denominator * d2.numerator) << "/" << d1.denominator * d2.denominator << endl;
}

void Task4()
{
	cout << "\n�������� 4-�� �������. ��������� ���������� ������." << endl;

	struct time
	{
		int hours;
		int minutes;
		int seconds;
	};
	time t1;

	cout << "������� ����, ������, ������� (����� ������): "; cin >> t1.hours >> t1.minutes >> t1.seconds;

	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	cout << endl << "��������: " << totalsecs << " ������" << endl;

}

void Task5()
{
	cout << "\n�������� 5-�� �������." << endl;
	
	struct time
	{
		int hours;
		int minutes;
		int seconds;
	};
	time t1,t2,newt;

	cout << "������� 1-�� ���������� ������� (������: a:a:a): "; scanf_s("%d:%d:%d", &t1.hours, &t1.minutes,&t1.seconds);
	cout << "������� 2-�� ���������� ������� (������: a:a:a): "; scanf_s("%d:%d:%d", &t2.hours, &t2.minutes,&t2.seconds);

	long totalsecs = (t1.hours+t2.hours) * 3600 + (t1.minutes+t2.minutes) * 60 + (t1.seconds + t2.seconds);

	newt.hours = totalsecs / 3600;
	totalsecs = totalsecs % 3600;

	newt.minutes = totalsecs / 60;
	totalsecs = totalsecs % 60;

	newt.seconds = totalsecs;

	cout << endl << "��� ��������: " << newt.hours << ":" << newt.minutes << ":" << newt.seconds << endl;


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
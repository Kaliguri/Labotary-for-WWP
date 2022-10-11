#include <iostream>
using namespace std;

void Task1()
{
	cout << "\nЗапущено 1-ое задание. Структура." << endl;

	struct employee
	{
		int ID;
		float pay;
	};

	employee emp1, emp2, emp3;

	cout << "Введите ID сотрудника и его заработную плату (через пробел): "; cin >> emp1.ID >> emp1.pay;
	cout << "Введите ID сотрудника и его заработную плату (через пробел): "; cin >> emp2.ID >> emp2.pay;
	cout << "Введите ID сотрудника и его заработную плату (через пробел): "; cin >> emp3.ID >> emp3.pay;

	cout << "ID: " << emp1.ID << ", ЗП: " << emp1.pay << endl;
	cout << "ID: " << emp2.ID << ", ЗП: " << emp2.pay << endl;
	cout << "ID: " << emp3.ID << ", ЗП: " << emp3.pay << endl;


}
void Task2()
{
	cout << "\nЗапущено 2-ое задание. Определение должности по первой букве." << endl << endl;

	enum etype { laborer, secretary, manager, accountant, executive, researcher };

	
	char first_word;
	etype number;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << "\nВведите первую букву должности: "; cin >> first_word;
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
		cout << "Полное название должности: laborer";
		break;

	case secretary:
		cout << "Полное название должности: secretary";
		break;
	case manager:
		cout << "Полное название должности: manager";
		break;
	case accountant:
		cout << "Полное название должности: accountant";
		break;
	case executive:
		cout << "Полное название должности: executive";
		break;
	case researcher:
		cout << "Полное название должности: researcher";
		break;
	}
	printf("\n");
}
void Task3()
{
	cout << "\nЗапущено 3-е задание. Добавление структуры к заданию с дробями." << endl;
	
	struct fraction
	{
		int numerator; //Числитель
		int denominator; //Знаменатель
	};

	fraction d1, d2;

	cout << "Введите первую дробь (формат: a/a): "; scanf_s("%d/%d", &d1.numerator, &d1.denominator);
	cout << "Введите вторую дробь (формат: a/a): "; scanf_s("%d/%d", &d2.numerator, &d2.denominator);

	cout << "Результат: " << (d1.numerator * d2.denominator + d1.denominator * d2.numerator) << "/" << d1.denominator * d2.denominator << endl;
}

void Task4()
{
	cout << "\nЗапущено 4-ое задание. Суммарное количество секунд." << endl;

	struct time
	{
		int hours;
		int minutes;
		int seconds;
	};
	time t1;

	cout << "Введите часы, минуты, секунды (через пробел): "; cin >> t1.hours >> t1.minutes >> t1.seconds;

	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	cout << endl << "Суммарно: " << totalsecs << " секунд" << endl;

}

void Task5()
{
	cout << "\nЗапущено 5-ое задание." << endl;
	
	struct time
	{
		int hours;
		int minutes;
		int seconds;
	};
	time t1,t2,newt;

	cout << "Введите 1-ое количество времени (формат: a:a:a): "; scanf_s("%d:%d:%d", &t1.hours, &t1.minutes,&t1.seconds);
	cout << "Введите 2-ое количество времени (формат: a:a:a): "; scanf_s("%d:%d:%d", &t2.hours, &t2.minutes,&t2.seconds);

	long totalsecs = (t1.hours+t2.hours) * 3600 + (t1.minutes+t2.minutes) * 60 + (t1.seconds + t2.seconds);

	newt.hours = totalsecs / 3600;
	totalsecs = totalsecs % 3600;

	newt.minutes = totalsecs / 60;
	totalsecs = totalsecs % 60;

	newt.seconds = totalsecs;

	cout << endl << "При сложении: " << newt.hours << ":" << newt.minutes << ":" << newt.seconds << endl;


}
int main()
{
	setlocale(LC_ALL, "Rus");

	int num;
	while (true)
	{
		cout << "\nЗдравствуйте! Введите номер задания (1,2,3,4 или 5): "; cin >> num;

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
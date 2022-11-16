#include <iostream>
#include <Windows.h> 
#include <vector>
using namespace std;


void Task1()
{
	cout << "\nЗапущено 1-ое задание. Подсчет среднего значения в массиве дробей." << endl;
	struct fraction
	{
		int numerator; //Числитель
		int denominator; //Знаменатель
	};
	int nu;
	double sum = 0.0;
	fraction d;

	cout << "Введите количество дробей, которое вы желаете ввести далее: "; cin >> nu;

	fraction* mas = new fraction[nu];

	for (int k = 0; k < nu; k++)
	{
		cout << "Введите дробь (формат: a/a): "; scanf_s("%d/%d", &d.numerator, &d.denominator);
		mas[k] = d;
	}

	for (int k = 0; k < nu; k++)
	{
		sum += (static_cast<double>(mas[k].numerator) / mas[k].denominator);
	}
	sum = sum / nu;
	cout << "Среднее значение: "; printf("%.2f", sum);

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
	cout << "\nЗапущено 2-ое задание." << endl;
	
	int nu = 0,digital = 0;

	cout << "Введите количество дробей, которое вы желаете ввести далее: "; cin >> nu;

	int* mas = new int[nu];

	for (int k = 0; k < nu; k++)
	{
		cout << "Введите целое число: "; cin >> digital;
		mas[k] = digital;

	}

	cout << "Максимальное число в массиве: " << MAX_for_Task2(nu, mas);




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
	cout << "\nЗапущено 3-е задание. Переворот строки" << endl;

	char st[256];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите строчку: ";

	cin.ignore();
	cin.getline(st, 256, '\n');

	reversit(st);
	cout << "Перевернутая строка:" << endl << st;
}

struct employee
{
	char name[256];
	long ID;
};

void getdata(vector<employee> &m)
{
	employee emp;
	cout << "Введите имя сотрудника и его ID. " << endl;
	cout << "Введите имя: "; cin.ignore(); cin.getline(emp.name, 256, '\n');
	cout << "Введите ID: "; cin >> emp.ID;
	m.push_back(emp);
	cout << endl;
}

void putdata(vector<employee> &m)
{
	cout << "Список сотрудников:" << endl << endl;
	int n = m.size();
	for (int k = 0; k < n; k++)
		cout << "Имя: " << m[k].name << ", ID: " << m[k].ID << endl;
	cout << endl;
}

void Task4()
{
	cout << "\nЗапущено 4-ое задание. Ввод данных служащий (теперь - используя массивы и функции!)" << endl;
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
	cout << "\nЗапущено 5-ое задание. Среднее значение интервалов." << endl;

	int count_dis = 5; //Количество вводимых интервалов (по заданию - 5)
	distanc* mas_distance = new distanc[count_dis];
	
	distanc d;
	for (int k = 0; k < count_dis; k++)
	{
		cout << "Введите интервал (футы и дюймы через пробел): "; cin >> d.foot >> d.inches;
		mas_distance[k] = d;
	}

	cout << "Среднее количество (в дюймах): " << avatage_distance_for_Task5(count_dis, mas_distance);

}

int main()
{
	setlocale(LC_ALL, "Rus");

	int num;
	while (true)
	{
		cout << "\n\nЗдравствуйте! Введите номер задания (1,2,3,4 или 5): "; cin >> num;

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
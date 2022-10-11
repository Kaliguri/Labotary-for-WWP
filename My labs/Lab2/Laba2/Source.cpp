#include <iostream>
using namespace std;

void Task1()
{
	cout << "\nЗапущено 1-ое задание. Пирамида.\n" << endl;
	
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
	
	cout << "\nЗапущено 2-ое задание. Вычисление факториала" << endl;

	int number;

	while (true)
	{
		printf("Для вычисления факторила - введите число. Для завершения вычислений - введите 0 \n");
		cin >> number;

		if (number == 0)
			break;
		cout << "Факториал для числа " << number << " = " << fact(number) << endl;

	}
	cout << "Вы ввели 0. Окончание вычислений. \n" << endl;
	

}
void Task3()
{
	float capital, proc;
	int years;

	cout << "\nЗапущено 3-е задание. Банковский вклад. (Использовал дифференцированные платежи)" << endl;
	cout << "Введите начальный вклад: ";			 cin >> capital;
	cout << "Введите число лет: ";					 cin >> years;
	cout << "Введите процентную годовую ставку: ";   cin >> proc;
	printf("\n");
	for (int cur_years = 0; cur_years < years; cur_years++)
	{
		capital += capital * proc / 100;
		if (cur_years + 1 != years)
			cout << "В конце " << cur_years + 1 << "-ого года вы получите: " << capital << endl;
		else
			printf("\n");
	}

	cout << "Через " << years << " лет вы получите: " << capital << endl;
}

void Task4()
{
	float price, proc, start_capital,su = 0;
	int years;
	cout << "\nЗапущено 4-ое задание. Ипотека." << endl;

	cout << "Введите стоимость квартиры: ";			 cin >> price;
	cout << "Введите начальный взнос: ";			 cin >> start_capital;
	cout << "Введите число лет: ";					 cin >> years;
	cout << "Введите процентную годовую ставку: ";   cin >> proc;

	price -= start_capital;
	for (int cur_years = 0; cur_years < years; cur_years++)
	{
		cout << "Год: " << cur_years + 1 << ". Платеж за данный год: " << price/years + price*proc/100 << endl;
		price -= price/years;
		su += price / years + price * proc / 100;
	}
	cout << "Суммарные выплаты: " << su << endl;
}

	void Task5()
	{
		cout << "\nЗапущено 5-ое задание. Суммирование денежных сумм." << endl;

		string ans;

		while (true)
		{
			int funt, shil, pens;
			cout << "Введите первую сумму (фунты, шиллинги, пенсы через пробел): "; cin >> funt >> shil >> pens;

			int funt2, shil2, pens2;
			cout << "Введите вторую сумму (фунты, шиллинги, пенсы через пробел): "; cin >> funt2 >> shil2 >> pens2;

			int shilpl, funtpl;

			pens += pens2;
			shil += shil2;
			funt += funt2;

			shilpl = pens / 12;
			pens = pens % 12;

			funtpl = pens / 20;
			shil = shil % 20 + shilpl;

			funt += funtpl;

			cout << "Итого: " << funt << " " << shil << " " << pens << endl;

			cout << "Для повторного использования программы введите \"+\" : "; cin >> ans;
			if (ans != "+")
				break;

		}
	}
	
	void Task5b()
	{
		cout << "\nЗапущено 5-ое задание (2-ая версия). Суммирование денежных сумм." << endl;

		string ans;
		int shilpl, funtpl;
		int funt, shil, pens;
		int funt2, shil2, pens2;

		cout << "Введите первую сумму (фунты, шиллинги, пенсы через пробел): "; cin >> funt >> shil >> pens;
		cout << "Введите вторую (добавочную) сумму (фунты, шиллинги, пенсы через пробел): "; cin >> funt2 >> shil2 >> pens2;

		pens += pens2;
		shil += shil2;
		funt += funt2;

		shilpl = pens / 12;
		pens = pens % 12;

		funtpl = pens / 20;
		shil = shil % 20 + shilpl;

		funt += funtpl;

		cout << "Итого: " << funt << " " << shil << " " << pens << endl;

		while (true)
		{
			cout << endl << "Для начала следующей итерации введите \"+\" : "; cin >> ans;
			if (ans == "+")
			{
				cout << "Введите вторую (добавочную) сумму (фунты, шиллинги, пенсы через пробел): "; cin >> funt2 >> shil2 >> pens2;
				shilpl = (pens + pens2) / 12;
				pens = (pens + pens2) % 12;

				funtpl = (pens + pens2) / 20;
				shil = (shil + shil2) % 20 + shilpl;

				funt = funt + funt2 + funtpl;

				cout << "Итого: " << funt << " " << shil << " " << pens << endl;
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
			cout << "\nЗдравствуйте! Введите номер задания (1,2,3,4 или 5 (доп: 6 - вторая версия 5-ого задания)): "; cin >> num;
			
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
#include <iostream>
using namespace std;

struct ttime
{
	int hours;
	int minutes;
	int seconds;
};

long hms_to_secs(int h, int m, int s)
{
	return (h * 3600 + m * 60 + s);
}

void Task1()
{

	cout << "\nЗапущено 1-ое задание. Фунция подсчета секунд." << endl;
	ttime t;
	while (true)
	{
		cout << "Введите часы, минуты, секунды (через пробел). (Для выхода из программы введите 0 0 0) : "; cin >> t.hours >> t.minutes >> t.seconds;
		if (t.hours == 0 and t.minutes == 0 and t.seconds == 0)
			break;
		cout << "Суммарно: " << hms_to_secs(t.hours, t.minutes, t.seconds) << " секунд." << endl << endl;
	}
}

long time_to_secs(struct ttime t)
{
	return (t.hours * 3600 + t.minutes * 60 + t.seconds);
}

struct ttime secs_to_time(long sec)
{
	ttime ans;

	ans.hours = sec / 3600;
	sec = sec % 3600;

	ans.minutes = sec / 60;
	sec = sec % 60;

	ans.seconds = sec;

	return(ans);
}
void Task2()
{
	cout << "\nЗапущено 2-ое задание. Вычисления с временными данными (но теперь еще и функции!)" << endl;

	ttime t;
	cout << "Введите часы, минуты, секунды (через пробел): "; cin >> t.hours >> t.minutes >> t.seconds; cout << endl;
	cout << "Суммарно: " << time_to_secs(t) << " секунд." << endl;
	cout << "Перевод обратно в структурный тип. Часов: " << secs_to_time(time_to_secs(t)).hours << ", Минут: " << secs_to_time(time_to_secs(t)).minutes << ", Секунд: " << secs_to_time(time_to_secs(t)).seconds << endl;

}
void swap(int& x1, int& x2)
{
	int ex;
	ex = x1;
	x1 = x2;
	x2 = ex;
}
void Task3()
{
	cout << "\nЗапущено 3-е задание. Перемещение значений у переменных." << endl;

	int word1, word2;
	cout << "Введите первое число: "; cin >> word1; 
	cout << "Введите второе число: "; cin >> word2; cout << endl;

	cout << "Первое число: " << word1; cout << endl;
	cout << "Второе число: " << word2; cout << endl << endl;

	cout << "Использование функции Swap." << endl << endl;
	swap(word1, word2);

	cout << "Первое число: " << word1; cout << endl;
	cout << "Второе число: " << word2; cout << endl;
}

void swap_time(ttime& x1, ttime& x2)
{
	ttime ex;
	ex = x1;
	x1 = x2;
	x2 = ex;
}
void Task4()
{
	cout << "\nЗапущено 4-ое задание. Перемещение значений у переменных типа time" << endl;

	ttime t1, t2;

	cout << "Введите значения для первой переменной времени (часы, минуты, секунды через пробел): "; cin >> t1.hours >> t1.minutes >> t1.seconds;
	cout << "Введите значения для второй переменной времени (часы, минуты, секунды через пробел): "; cin >> t2.hours >> t2.minutes >> t2.seconds;

	cout << "Первая переменная (часы, минуты, секунды через пробел): " << t1.hours << " " << t1.minutes << " " << t1.seconds; cout << endl;
	cout << "Первая переменная (часы, минуты, секунды через пробел): " << t2.hours << " " << t2.minutes << " " << t2.seconds; cout << endl << endl;

	cout << "Использование функции Swap." << endl << endl;
	swap(t1, t2);

	cout << "Первая переменная (часы, минуты, секунды через пробел): " << t1.hours << " " << t1.minutes << " " << t1.seconds; cout << endl;
	cout << "Первая переменная (часы, минуты, секунды через пробел): " << t2.hours << " " << t2.minutes << " " << t2.seconds; cout << endl;

}
void Sub_Task5_A(int n)
{
	cout << "Функция выводится " << n+1 << " раз." << endl;
}

static int numer;
void Sub_Task5_B()
{
	numer += 1;
	cout << "Функция выводится " << numer << " раз." << endl;
}
void Task5()
{
	cout << "\nЗапущено 5-ое задание. Подсчет вызова функции" << endl << endl;
	cout << "Использование статической локальной переменной." << endl;
	for (int c = 0; c <= 15; c++)
		Sub_Task5_A(c);

	cout << "-----------------------------------------" << endl;
	cout << "Использование глобальной переменной." << endl;
	
	for (int c = 0; c <= 15; c++)
		Sub_Task5_B();
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
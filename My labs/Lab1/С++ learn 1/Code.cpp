#include <iostream>
using namespace std;

void Task1()
{
	cout << "\nЗапущено 1-ое задание. Стих." << endl;
	cout << "\nВетры, ветры, о снежные ветры, \n Заметите мою прошлую жизнь. \n Я хочу быть отроком светлым \n Иль цветком с луговой межи." << endl;
}
void Task2()
{
	cout << "\nЗапущено 2-ое задание. Перевод из градусов по Цельсию на градусы по Фаренгейту." << endl;
	int grade, newgrade;
	cout << "Введите температуру в градусах Цельсия: "; cin >> grade;
	
	newgrade = grade * 9 / 5 + 32;

	cout << "По Цельсию: " << grade << "\n" << "По Фаренгейту : " << newgrade << endl;
	

}
void Task3()
{
	cout << "\nЗапущено 3-е задание. Сложение дробей" << endl;
	cout << "Сложение дробей вида a/b + c/d. \n" << endl;

	int a,b,c,d,result1,result2;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	cout << "Введите c: "; cin >> c;
	cout << "Введите d: "; cin >> d;
	result1 = a * d + b * c;
	result2 = b * d;
	cout << "Результат: " << result1 << "/" << result2 << endl;
	

}

void Task4()
{
	cout << "\nЗапущено 4-ое задание. Перевод из старой денежной системы в новую. " << endl;
	
	float funt, shir, pens, newfunt;
	cout << "Введите количество фунтов: " ; cin >> funt;
	cout << "Введите количество шиллингов: "; cin >> shir;
	cout << "Введите количество пенсов: "; cin >> pens;

	newfunt = funt + shir / 20 + pens / 240;

	cout << "Количество десятичных фунтов: " << newfunt << endl; //Значок фунта - пытался найти. Все способы - мимо.

}

void Task5()
{
	cout << "\nЗапущено 5-ое задание. Перевод из новой денежной системы в старую." << endl;

	float newfunt, funt, shir, pens;

	cout << "Введите количество десятичных фунтов: "; cin >> newfunt;

	funt = int(newfunt);
	pens = (newfunt - int(newfunt))*240;
	shir = int(pens / 12);

	pens = int(pens - shir * 12);

	cout << "Сумма в старой денежной системе: " << funt << " " << shir << " " << pens << endl;
	

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
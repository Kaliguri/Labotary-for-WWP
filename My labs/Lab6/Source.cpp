#include <iostream>

using namespace std;

class Double
{
private:
	double value;

public:
	void null()
	{
		value = 0.0;
	}
	void set_value(double a)
	{
		value = a;
	}
	double get_value()
	{
		return value;
	}
	void get_value_on_screen()
	{
		cout << value;
	}
	int get_int_value()
	{
		return (int)value;
	}
	void addition_Double(Double s1, Double s2)
	{
		double temp = s1.get_value() + s2.get_value();
		value = temp;
	}
		
};
class Date
{
private:
	int year, month, day;
public:
	void set_date()
	{
		int m, d, y;
		while (true)
		{
			cout << "Введите дату (в формате MM/DD/YY): "; scanf_s("%d/%d/%d", &m, &d, &y);

			day = d;
			month = m;
			year = y;

			if (day >= 0 and day <= 31 and month > 0 and month <= 12 and year >= 0 and year <= 99)
			{
				break;
			}
			else
			{
				cout << "Некорректные данные. Попробуйте снова." << endl;
			}
			
		}
		
	}
	void show_date()
	{
		cout << month << "/" << day << "/" << year;
	}
};
class Time
{
private:
	int hours, minutes, seconds;

public:
	void null()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	void set_time(int h,int m,int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
		
	}

	void get_time_on_screen()
	{
		cout << hours << ":" << minutes << ":" << seconds;
	}

	int get_seconds()
	{
		return seconds;
	}
	int get_minutes()
	{
		return minutes;
	}
	int get_hours()
	{
		return hours;
	}

	void  addition_Time(Time s1, Time s2)
	{
		int tsec;

		seconds = s1.get_seconds() + s2.get_seconds();
		minutes = s1.get_minutes() + s2.get_minutes();
		hours = s1.get_hours() + s2.get_hours();

		tsec = hours * 3600 + minutes * 60 + seconds;

		hours = tsec / 3600;
		tsec = tsec % 3600;

		minutes = tsec / 60;
		tsec = tsec % 60;

		seconds = tsec;
		
	}

};
class Employee
{
private:
	Date start_work;
	enum etype { laborer = 1, secretary, manager, accountant, executive, researcher };
	int ID, status;
	float salary; //Оклад
public:
	void set_ID(int a)
	{
		ID = a;
	}
	void set_salary(float a)
	{
		salary = a;
	}
	int get_ID()
	{
		return ID;
	}
	float get_salary()
	{
		return salary;
	}
	void set_Employee()
	{
		int temp_id;
		float temp_salary;

		cout << "Введите данные для первого сотрудника (ID, оклад через пробел): "; cin >> temp_id >> temp_salary; ID = temp_id; salary = temp_salary;
		start_work.set_date();
		cout << "Введите номер статуса сотрудника \n(laborer = 1, secretary = 2, manager = 3, accountant = 4, executive = 5, researcher = 6): "; cin >> status; cout << endl;

	}
	void get_Employee()
	{
		

		cout << "Сотрудник с ID = " << ID << " имеет следующие данные: " << endl;
		cout << "Нанят на работу с "; start_work.show_date(); cout << " (MM/DD/YY) числа." << endl;

		etype stat = laborer;
		int st = stat;
		switch (status)
		{
		case(laborer):
			cout << "Текущая должность: Рабочий";
			break;
		case(secretary):
			cout << "Текущая должность: Секретарь";
			break;
		case(manager):
			cout << "Текущая должность: Менеджер";
			break;
		case(accountant):
			cout << "Текущая должность: Бухгалтер";
			break;
		case(executive):
			cout << "Текущая должность: Управленец";
			break;
		case(researcher):
			cout << "Текущая должность: Исследователь";
			break;

		default:
			cout << "Текущая должность: Не указано";
			break;
		}
		cout << endl << "За свою работу получает оклад в размере: " << salary << endl << endl;
	}

};
void Task1()
{
	cout << "\nЗапущено 1-ое задание. Класс Double" << endl;
	Double d1, d2, d3;
	double d_temp;
	//d1.set_value(2.34);
	//d2.set_value(5.67);

	cout << "Дайте значение (инициализируйте) 1-ый объект: "; cin >> d_temp; d1.set_value(d_temp);
	cout << "Дайте значение (инициализируйте) 2-ой объект: "; cin >> d_temp; d2.set_value(d_temp);
	
	
	d3.addition_Double(d1, d2);
	//d3.get_value_on_screen();
	cout << "Сложнение данных объектов = "; printf("%0.3f", d3.get_value());


}
void Task2()
{
	cout << "\nЗапущено 2-ое задание. Класс Employee." << endl;
	Employee e1, e2, e3;
	int temp_id;
	float temp_salary;

	cout << "Введите данные для первого сотрудника (ID, оклад через пробел): "; cin >> temp_id >> temp_salary;
	e1.set_ID(temp_id); e1.set_salary(temp_salary);
	cout << "Введите данные для второго сотрудника (ID, оклад через пробел): "; cin >> temp_id >> temp_salary;
	e2.set_ID(temp_id); e2.set_salary(temp_salary);
	cout << "Введите данные для третьего сотрудника (ID, оклад через пробел): "; cin >> temp_id >> temp_salary;
	e3.set_ID(temp_id); e3.set_salary(temp_salary);

	cout << "Информация о сотрудниках (ID: оклад): " << endl;
	cout << e1.get_ID() << ": "; printf("%0.3f", e1.get_salary()); cout << endl;
	cout << e2.get_ID() << ": "; printf("%0.3f", e2.get_salary()); cout << endl;
	cout << e3.get_ID() << ": "; printf("%0.3f", e3.get_salary()); cout << endl;


}
void Task3()
{
	cout << "\nЗапущено 3-е задание. Класс Date" << endl;
	Date d;
	d.set_date();
	cout << "Дата: "; d.show_date();

}
void Task4()
{
	cout << "\nЗапущено 4-ое задание. Класс Time" << endl;
	int t_h, t_m, t_s;
	Time t1, t2, t3;

	//t1.set_time(1, 50, 20);
	//t2.set_time(3, 30, 50);

	cout << "Дайте значение (инициализируйте) 1-ый объект (введите часы, минуты, секунды через пробел): "; cin >> t_h >> t_m >> t_s;
	t1.set_time(t_h, t_m, t_s);
	cout << "Дайте значение (инициализируйте) 2-ой объект (введите часы, минуты, секунды через пробел): "; cin >> t_h >> t_m >> t_s;
	t2.set_time(t_h, t_m, t_s);

	t3.addition_Time(t1, t2);
	//t3.get_time_on_screen;
	cout << "Сложнение данных объектов = "; t3.get_time_on_screen();

}
void Task5()
{
	cout << "\nЗапущено 5-ое задание. Мутировавший класс Employee" << endl;
	Employee e1,e2,e3;
	e1.set_Employee(); e2.set_Employee(); e3.set_Employee();
	e1.get_Employee(); e2.get_Employee(); e3.get_Employee();
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
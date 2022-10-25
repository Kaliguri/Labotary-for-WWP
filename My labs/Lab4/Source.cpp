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

	cout << "\n�������� 1-�� �������. ������ �������� ������." << endl;
	ttime t;
	while (true)
	{
		cout << "������� ����, ������, ������� (����� ������). (��� ������ �� ��������� ������� 0 0 0) : "; cin >> t.hours >> t.minutes >> t.seconds;
		if (t.hours == 0 and t.minutes == 0 and t.seconds == 0)
			break;
		cout << "��������: " << hms_to_secs(t.hours, t.minutes, t.seconds) << " ������." << endl << endl;
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
	cout << "\n�������� 2-�� �������. ���������� � ���������� ������� (�� ������ ��� � �������!)" << endl;

	ttime t;
	cout << "������� ����, ������, ������� (����� ������): "; cin >> t.hours >> t.minutes >> t.seconds; cout << endl;
	cout << "��������: " << time_to_secs(t) << " ������." << endl;
	cout << "������� ������� � ����������� ���. �����: " << secs_to_time(time_to_secs(t)).hours << ", �����: " << secs_to_time(time_to_secs(t)).minutes << ", ������: " << secs_to_time(time_to_secs(t)).seconds << endl;

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
	cout << "\n�������� 3-� �������. ����������� �������� � ����������." << endl;

	int word1, word2;
	cout << "������� ������ �����: "; cin >> word1; 
	cout << "������� ������ �����: "; cin >> word2; cout << endl;

	cout << "������ �����: " << word1; cout << endl;
	cout << "������ �����: " << word2; cout << endl << endl;

	cout << "������������� ������� Swap." << endl << endl;
	swap(word1, word2);

	cout << "������ �����: " << word1; cout << endl;
	cout << "������ �����: " << word2; cout << endl;
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
	cout << "\n�������� 4-�� �������. ����������� �������� � ���������� ���� time" << endl;

	ttime t1, t2;

	cout << "������� �������� ��� ������ ���������� ������� (����, ������, ������� ����� ������): "; cin >> t1.hours >> t1.minutes >> t1.seconds;
	cout << "������� �������� ��� ������ ���������� ������� (����, ������, ������� ����� ������): "; cin >> t2.hours >> t2.minutes >> t2.seconds;

	cout << "������ ���������� (����, ������, ������� ����� ������): " << t1.hours << " " << t1.minutes << " " << t1.seconds; cout << endl;
	cout << "������ ���������� (����, ������, ������� ����� ������): " << t2.hours << " " << t2.minutes << " " << t2.seconds; cout << endl << endl;

	cout << "������������� ������� Swap." << endl << endl;
	swap(t1, t2);

	cout << "������ ���������� (����, ������, ������� ����� ������): " << t1.hours << " " << t1.minutes << " " << t1.seconds; cout << endl;
	cout << "������ ���������� (����, ������, ������� ����� ������): " << t2.hours << " " << t2.minutes << " " << t2.seconds; cout << endl;

}
void Sub_Task5_A(int n)
{
	cout << "������� ��������� " << n+1 << " ���." << endl;
}

static int numer;
void Sub_Task5_B()
{
	numer += 1;
	cout << "������� ��������� " << numer << " ���." << endl;
}
void Task5()
{
	cout << "\n�������� 5-�� �������. ������� ������ �������" << endl << endl;
	cout << "������������� ����������� ��������� ����������." << endl;
	for (int c = 0; c <= 15; c++)
		Sub_Task5_A(c);

	cout << "-----------------------------------------" << endl;
	cout << "������������� ���������� ����������." << endl;
	
	for (int c = 0; c <= 15; c++)
		Sub_Task5_B();
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
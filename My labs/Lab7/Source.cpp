#include <iostream>
#include <ostream>
using namespace std;

void Addarrays(float *m_s1, float *m_s2,float *m_assig, int *size)
{
	for (int c = 0; c < *size; c++)
		m_assig[c] = m_s1[c] + m_s2[c];
}

void Task1()
{
	cout << "\n�������� 1-�� �������. ����� ��������� 2-� �������� � ������." << endl << endl;
	float ma1[] = { 1.02f,4.94f,3.001f,5.3f};
	float ma2[] = { 2.01f,5.93f,12.001f,5.333f	 };
	float ma3[4];

	int size_m = sizeof(ma3) / sizeof(ma3[0]);

	cout << "������ ����������������� ������: ";
	for (int i = 0; i < size_m; i++)
		cout << ma1[i] << ", ";
	cout << endl;

	cout << "������ ����������������� ������: ";
	for (int i = 0; i < size_m; i++)
		cout << ma2[i] << ", ";
	cout << endl;

	cout << endl << "������������� 'Addarrays'." << endl << endl;
	Addarrays(ma1, ma2, ma3, &size_m);

	cout << "������ ������ (����� ��������� ����������): ";
	for (int i = 0; i < size_m; i++)
		cout << ma3[i] << ", ";
	cout << endl;


}

int Compstr(const char* a, const char* b)
{
	while (*a && *b && (*a == *b))
	{
		a++; b++;
	}
	if (*a > *b) return 1;
	if (*a < *b) return -1;
	return 0;
}


void Task2()
{
	cout << "\n�������� 2-�� �������. ������� ���� 'strcmp'." << endl << endl;

	char s1[256], s2[256];

	cin.ignore();
	cout << "������� 1-�� ������: "; cin.getline(s1, 256);
	cout << "������� 2-�� ������: "; cin.getline(s2, 256);

	cout << "'�ompstr' ��������� ��������: " << Compstr(s1, s2);


}
void Task3()
{
	cout << "\n�������� 3-� �������. ������� � �������." << endl << endl;

	int a0[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int a1[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int a2[] = { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 };
	int a3[] = { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 };
	int a4[] = { 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 };
	int a5[] = { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59 };
	int a6[] = { 60, 61, 62, 63, 64, 65, 66, 67, 68, 69 };
	int a7[] = { 70, 71, 72, 73, 74, 75, 76, 77, 78, 79 };
	int a8[] = { 80, 81, 82, 83, 84, 85, 86, 87, 88, 89 };
	int a9[] = { 90, 91, 92, 93, 94, 95, 96, 97, 98, 99 };

	int* aA[] = { a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << aA[i][j] << " ";
		}
			
	}
}
void Task4()
{
	cout << "\n�������� 4-�� �������. ������������ ������ ��� ������� �������." << endl;

	const int mas_count = 10, mas_size = 10;

	int* aA[mas_count]{};

	for (int i = 0; i < mas_count; i++)
	{
		aA[i] = new int[mas_size];

	}


	for (int i = 0; i < mas_count; i++)
	{
		for (int j = 0; j < mas_size; j++)
		{
			aA[i][j] = i*10 + j;
		}
	}

	for (int i = 0; i < mas_count; i++)
	{
		for (int j = 0; j < mas_size; j++)
		{
			cout << aA[i][j] << " ";
		}
	}

	
}

struct Person {
	char Name[256];
	float Salary;
};

void Set_Person(Person* man, int c)
{
	
	for (int i = 0; i < c; i++)
	{
		char *t_name = new char[20];

		cout << endl << "������� ������ ��� " << i + 1 << " ����������: " << endl;
		cout << "���: "; cin.ignore(); cin.getline(man[i].Name , 256);

		cout << "��������: "; cin >> man[i].Salary;
	}
	
}

void Get_Person(Person* man, int c)
{

	for (int i = 0; i < c; i++)
	{
		cout << "��������� � ������� " << i + 1 << " ����� ��������� ������: " << endl;
		cout << "���: " << man[i].Name << endl;
		cout << "��������: " << man[i].Salary << endl << endl;
	}

}

void Sort_Person(Person* man, int c)
{
	Person temp{};
	for (int i = 0; i < c; i++) {
		for (int j = (c - 1); j >= (i + 1); j--) {
			if (man[j].Salary < man[j - 1].Salary) {
				temp = man[j];
				man[j] = man[j - 1];
				man[j - 1] = temp;
			}
		}
	}
}


void Task5()
{
	cout << "\n�������� 5-�� �������. ����� ����������. ������ - ��������� ���������." << endl << endl;
	int count_person = 5;

	Person* mans = new Person[5];
	
	cout << "������ ������� � ������ ������ � �����������" << endl;												Set_Person(mans, count_person);
	cout << endl << endl << "������ ������� � ������� ������ � �����������" << endl;							Get_Person(mans, count_person);
	cout << endl << endl << "������ ������� � c���������� ����������� � ����������� �� �� ��������" << endl;	Sort_Person(mans, count_person);
	cout << endl << endl << "������ ������� � ������� ������ � �����������" << endl;							Get_Person(mans, count_person);
	
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
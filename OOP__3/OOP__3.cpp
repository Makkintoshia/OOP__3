#include <string>
#include <iostream>

using namespace std;

class Man
{
public:
	
	int yearbirhday;
	string fio;

	string sex;

	Man()
	{
	
		sex = "male";
	
	}

	
};
class Teach
{
public:

	int numb;
	int curse;
	int sredniy;

	void sredniyball()
	{
		int x;
		int y;
		int z;
		cout << "Введите оценку по математики";
		cin >>  x;
		cout << "Введите оценку по русскому";
		cin >> y;
		cout << "Введите оценку по физики";
		cin >> z;
		sredniy = (x + y + z) / 3;
		cout << sredniy;
	}

};

class Student :public Man, public Teach
{
public:
	
	  void show()
	  {
		  cout << sex;
			 
	  }
};


int main()
{
	setlocale(LC_ALL, "rus");
	Man man;
	Teach teach;
	Student student;
	cin >> teach.numb;
	cin >> teach.curse;
	cin >> teach.sredniy;

	
	cout << "Введите год рождения";
		cin >> man.yearbirhday;
		cin >> man.fio;
		student.show();
}



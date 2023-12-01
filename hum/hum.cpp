#include <iostream>

using namespace std;

class Human {

public:
	string GetName()
	{
		return name;
	};

	void SetName(string name)
	{
		this->name = name;
	};

private:
	string name;

};

class Student : public Human {

public:
	void study()
	{
		cout << "Я хожу на пары" << endl;
	}

	int GetGroup()
	{
		return group;
	}

	int SetGroup(int group)
	{
		this->group = group;
	}

private:
	int group;

};


class ExtramuralStudent : public Student {

public:
	void study() 
	{
		cout << "Я на заочном обучении" << endl;
	}

	string GetSubject()
	{
		return subject;
	}

	void SetSubject(string subject)
	{
		this->subject = subject;
	}

private:
	string subject;

};


class Teacher : public Human {

public:
	string subject;

	string GetCabinet()
	{
		return cabinet;
	}

	void SetCabinet(string cabinet)
	{
		this->cabinet = cabinet;
	}

private:
	string cabinet;

};


class Staff {

public:
	int GetSalary()
	{
		return salary;
	}

	void SetSalary(int salary)
	{
		this->salary = salary;
	}

private:
	int salary;

};


class School : public Teacher, public Staff {

public:
	int number;

};


int main() {
	setlocale(LC_ALL, "ru");

	Student st;
	st.study();
	st.SetName("Аня"); //обращение к свойствам объектов родительских классов
	cout << st.GetName() << endl;

	ExtramuralStudent extra;
	extra.SetName("Витя"); //обращение к свойствам объектов родительских классов
	cout << extra.GetName() << endl;

	Teacher t;
	t.SetCabinet("номер 6");
	cout << "Кабинет учителя: ";
	cout << t.GetCabinet() << endl;

	Staff s;
	s.SetSalary(30000);
	cout << "Зарплата одного сотрудника: ";
	cout << s.GetSalary() << endl;

	School sh;
	sh.SetSalary(1000000);
	cout << "Зарплата для сотрудников: ";
	cout << sh.GetSalary() << endl;
	
	return 0;
}

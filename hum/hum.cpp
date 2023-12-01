﻿#include <iostream>

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
	int group;
	void study()
	{
		cout << "Я хожу на пары" << endl;
	}
};

class ExtramuralStudent : public Student {
public:
	void study() 
	{
		cout << "Я на заочном обучении" << endl;
	}

};

class Teacher : public Human {
public:
	string subject;
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

	
	return 0;
}

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

class Student {
public:
	int group;
	void study()
	{
		cout << "Я хожу на пары" << endl;
	}
};

class ExtramuralStudent {
public:
	void study() 
	{
		cout << "Я на заочном обучении" << endl;
	}

};

class Teacher {
public:
	string subject;
};


int main() {
setlocale(LC_ALL, "ru");
	
	return 0;
}

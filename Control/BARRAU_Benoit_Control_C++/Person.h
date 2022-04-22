#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
public :

	string _firstName;
	string _lastName;
	string _birthDate;
	string _gender;
	string _car;
	float _money;

	Person();
	Person(string name, string lastName, string birthDate, string gender, float money, string car);
	~Person();

	string GetFirstName();
	string GetLastName();
	string GetBirthDate();
	string GetGender();
	string GetCar();
	float GetMoney();

	void Introduce();
};


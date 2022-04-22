#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	_firstName = "Casey";
	_lastName = "NELSON-LASSOIE";
	_birthDate = "En Aout";
	_gender = "Homme";
	_car = "Tesla";
	_money = 2000;
}

Person::Person(string firstName, string lastName, string birthDate, string gender, float money, string car)
{
	_firstName = firstName;
	_lastName = lastName;
	_birthDate = birthDate;
	_gender = gender;
	_money = money;
	_car = car;
}

Person::~Person()
{
	//Destructor
}

string Person::GetFirstName()
{
	return _firstName;
}

string Person::GetLastName()
{
	return _lastName;
}

string Person::GetBirthDate()
{
	return _birthDate;
}

string Person::GetGender()
{
	return _gender;
}

float Person::GetMoney()
{
	return _money;
}

string Person::GetCar()
{
	return _car;
}

void Person::Introduce()
{
	cout << "Je m'appelle " << _firstName << " " << _lastName << ", je suis nee en " << _birthDate << " et je suis un " << _gender << endl;
	cout << "Je possede la modifque somme de " << _money << " et je possede cette jolie " << _car << endl;
}
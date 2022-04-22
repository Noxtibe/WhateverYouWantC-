#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	_brand = "Eclipse";
	_model = "VXMax 1050";
	_licensePlate = "EC-555-RN";
	_carColor = Color::yellow;
	_km = 500000;
	_carPrice = 159753;
}

Car::Car(string brand, string model, string licensePlate, unsigned int km, float carPrice, Color carColor)
{
	_brand = brand;
	_model = model;
	_licensePlate = licensePlate;
	_km = km;
	_carPrice = carPrice;
	_carColor = carColor;
}

Car::~Car()
{
	//Destructor
}

string Car::GetBrand()
{
	return _brand;
}

string Car::GetModel()
{
	return _model;
}

string Car::GetLicensePlate()
{
	return _licensePlate;
}

unsigned int Car::GetKm()
{
	return _km;
}

float Car::GetCarPrice()
{
	return _carPrice;
}

void Car::infoCar()
{
	cout << "La voiture est de marque " << _brand << "\n";
	cout << "Son modele : " << _model << "\n";
	cout << "Sa plaque d'immatriculation : " << _licensePlate << "\n";
	cout << "Son kilometrage : " << _km << " et son prix : " << _carPrice << "\n";
}

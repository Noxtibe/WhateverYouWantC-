#pragma once
#include <iostream>
#include <string>
#include "Color.h"

using namespace std;

class Car
{
public:

	string _brand;
	string _model;
	string _licensePlate;
	Color _carColor;
	unsigned int _km;
	float _carPrice;

	Car();
	Car(string brand, string model, string licensePlate, unsigned int km, float carPrice, Color carColor);
	~Car();

	string GetBrand();
	string GetModel();
	string GetLicensePlate();
	unsigned int GetKm();
	float GetCarPrice();

	void infoCar();
};


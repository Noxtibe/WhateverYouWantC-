#include <iostream>
#include "Car.h"
#include "Person.h"

using namespace std;

int main()
{
	Person person = Person();
	person.Introduce();

	Car car = Car();
	car.infoCar();
}

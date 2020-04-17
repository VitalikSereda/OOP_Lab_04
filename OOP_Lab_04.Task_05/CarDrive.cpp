#include "CarDrive.h"

CarDrive::CarDrive()
{
	carNumber = 0;
	driverName = "";
}

CarDrive::CarDrive(int number, string name)
{
	carNumber = number;
	driverName = name;
}

int CarDrive::GetCarNumb()
{
	return carNumber;
}

string CarDrive::GetDriverName()
{
	return driverName;
}

void CarDrive::SetCarNumb(int numb)
{
	carNumber = numb;
}

void CarDrive::SetDriveName(string name)
{
	driverName = name;
}

CarDrive::~CarDrive()
{
}

ostream& operator<<(ostream& out, const CarDrive& obj)
{
	out << obj.carNumber << ", " << obj.driverName;
	return out;
}
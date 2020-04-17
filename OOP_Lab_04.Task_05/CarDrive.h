#pragma once
#include <iostream>

using namespace std;

class CarDrive
{
private:
	int carNumber;
	string driverName;
public:
	CarDrive();
	CarDrive(int, string);
	friend ostream& operator<<(ostream& out, const CarDrive& obj);

	int GetCarNumb();
	string GetDriverName();

	void SetCarNumb(int numb);
	void SetDriveName(string name);

	~CarDrive();
};
#include "Taxi.h"

Taxi::Taxi() : CarDrive()
{
}

Taxi::Taxi(int numb, string name, int callPrice, int price1) : CarDrive(numb, name)
{
	this->callPrice = callPrice;
	this->priceOneKm = price1;
}

int Taxi::PriceOfDrive(int km)
{
	return callPrice + km * priceOneKm;
}

int Taxi::GetCallPrice()
{
	return callPrice;
}

int Taxi::GetPriceOneKm()
{
	return priceOneKm;
}

void Taxi::SetCallPrice(int callprice)
{
	callPrice = callPrice;
}

void Taxi::SetPriceOneKm(int price1)
{
	priceOneKm = price1;
}

Taxi::~Taxi()
{
}

ostream& operator<<(ostream& out, Taxi& obj)
{
	out << "Car number " << obj.GetCarNumb() << ";\n"
		<< "Driver name " << obj.GetDriverName() << ";\n"
		<< "Call price " << obj.GetCallPrice() << ";\n"
		<< "Price for one km " << obj.GetPriceOneKm() << ";\n";
	return out;
}
#include <iostream>
#include "Taxi.h"

#define MAXN 3

using namespace std;

void setInfo(Taxi* obj);

int main()
{

	Taxi taxi[MAXN];
	setInfo(taxi);
	int n;
	cout << "KM: ";
	cin >> n;
	for (int i = 0; i < MAXN; i++)
	{
		for (int j = 0; j < MAXN - i - 1; j++)
		{
			if (taxi[j].PriceOfDrive(n) > taxi[j + 1].PriceOfDrive(n))
			{
				swap(taxi[j], taxi[j + 1]);
			}
		}
	}
	int maxPrice = taxi[MAXN - 1].PriceOfDrive(n);
	int sum = 0;
	for (int i = 0; i < MAXN; i++)
	{
		sum += taxi[i].PriceOfDrive(n);
	}
	for (int i = 0; i < MAXN; i++)
	{
		cout << taxi[i] << "Full price " << taxi[i].PriceOfDrive(n) << endl;
	}
	cout << "\n\tMax price: " << maxPrice << endl;
	cout << "\tSum: " << sum << "\n\n";
}

void setInfo(Taxi* obj)
{
	for (int i = 0; i < MAXN; i++)
	{
		cout << "Car number: ";
		int numb = 0;
		cin >> numb;
		obj[i].SetCarNumb(numb);
		cout << "Driver name: ";
		string name;
		cin >> name;
		obj[i].SetDriveName(name);
		cout << "price of calling taxi: ";
		int calprice;
		cin >> calprice;
		obj[i].SetCallPrice(calprice);
		cout << "Price for one km: ";
		int priceonekm;
		cin >> priceonekm;
		obj[i].SetPriceOneKm(priceonekm);
	}
}
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int number_of_days();
string departure();
string arrival();
float car();
float round_trip_airfare();
float miles_driven();
float parking_fees(int);
float taxi_fees();
float conference();
float hotel();
float meal_eaten();
int main()
{

}
int number_of_days()
{
	int days;
	cout << "How many days did you spend on the trip? ";
	cin >> days;

	return days;
}
string departure()
{
	string departureTime;
	

	cout << "What time did you departure on the first day of the trip? ";
	cin >> departureTime;

	return departureTime;
}
string arrival()
{
	string arrivalTime;

	cout << "What time did you arrive back home on the last day of the trip? ";
	cin >> arrivalTime;

	return arrivalTime;
}
float car()
{
	float carCosts = -1;

	while (carCosts <= -1)
	{
		cout << "What was the cost of car rentals, if any? ";
		cin >> carCosts;
	}

	return carCosts;
}
float round_trip_airfare()
{
	float airfare = -1;

	while (airfare <= -1)
	{
		cout << "What was the cost of any round-trip airfare, if any? ";
		cin >> airfare;
	}
	
	return airfare;
}
float miles_driven()
{
	float miles=-3458945946386479;
	while (miles <= 0);
	{
		cout << "How many miles were driven during your trip: ";
		cin >> miles;
	}
	return miles * .27;
}

float parking_fees(int days)
{
	float parkingfees = -457898548747864;
	while (parkingfees <= 0)
	{
		cout << "Input the Amount of parking fees: ";
		cin >> parkingfees;
	}
	if (parkingfees > 6 * days)
		parkingfees = parkingfees - (6 * days);
	else;
	{
		parkingfees = 0;
	}
	return parkingfees;
}
float taxi_fees()
{
	
}
float conference()
{

}
float hotel()
{

}
float meal_eaten()
{

}
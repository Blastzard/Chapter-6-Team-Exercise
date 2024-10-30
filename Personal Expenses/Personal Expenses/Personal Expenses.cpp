#include <iostream>
#include <iomanip>
using namespace std;
int number_of_days();
string departure();
string arrival();
float car();
float round_trip_airfare();
float miles_driven();
float parking_fees();
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
	float carCosts;

	cout << "What was the cost of car rentals, if any? ";
	cin >> carCosts;

	return carCosts;
}
float round_trip_airfare()
{
	float airfare;

	cout << "What was the cost of any round-trip airfare, if any? ";
	cin >> airfare;

	return airfare;
}
float miles_driven()
{

}
float parking_fees()
{

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
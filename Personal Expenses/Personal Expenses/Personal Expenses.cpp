
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int number_of_days();
float departure();
float arrival();
float car();
float round_trip_airfare();
float miles_driven();
float parking_fees();
float taxi_fees();
float conference();
float hotel();
float meal_eaten(float, float, int);
int main()
{
	int days;
	float FE, DT, A, CC, MD, PF, T, TF, C, H,total;
	cout << "Personal Expenses\n";
	days = number_of_days();
	FE = round_trip_airfare();
	H = hotel();
	total = FE+(H*days);
	for (int counter = 1; counter <= days; counter++)
	{
		if (counter == 1)
		{
			DT = departure();
			A = arrival();
			CC = car();
			total += CC;
		}
		MD = miles_driven();
		PF = parking_fees();
		T = meal_eaten(DT, A, days);
		TF = taxi_fees();
		C = conference();
		total = total + MD + PF + TF + T+C;
	}
	cout << "Total: "<<total;
}
int number_of_days()
{
	int days = -1;

	while (days < 1)
	{
		cout << "How many days did you spend on the trip? ";
		cin >> days;
	}

	return days;
}
float departure()
{
	float departureTime = -1;

	while (departureTime <0)
	{
		cout << "What time did you departure on the first day of the trip(answer in the format of 1.5, which means 1 hour and 30 minutes also in 24 hour format)? ";
		cin.ignore();
		cin >> departureTime;
	}
	return departureTime;
}
float arrival()
{
	float arrivalTime = -1;
	while (arrivalTime < 0)
	{
		cout << "What time did you arrive back home on the last day of the trip(answer in the format of 1.5, which means 1 hour and 30 minutes also in 24 hour format)? ";
		cin.ignore();
		cin >> arrivalTime;
	}
	return arrivalTime;
}
float car()
{
	float carCosts = -1;

	while (carCosts < -1)
	{
		cout << "What was the cost of car rentals, if any for the whole trip? ";
		cin.ignore();
		cin >> carCosts;
	}

	return carCosts;
}
float round_trip_airfare()
{
	float airfare = -1;

	while (airfare < 0)
	{
		cout << "What was the cost of any round-trip airfare, if any? ";
		cin.ignore();
		cin >> airfare;
	}

	return airfare;
}
float miles_driven()
{
	float miles = -3458945946386479;
	while (miles <= 0)
	{
		cout << "How many miles were driven during today: ";
		cin.ignore();
		cin >> miles;
	}
	return miles * .27;
}

float parking_fees()
{
	float parkingfees = -457898548747864;
	while (parkingfees <= 0)
	{
		cout << "Input the Amount of parking fees today: ";
		cin.ignore();
		cin >> parkingfees;
	}
	if (parkingfees > 6)
	{
		parkingfees = parkingfees - (6);
	}
	else;
	{
		parkingfees = 0;
	}
	return parkingfees;
}
float taxi_fees()
{
	float taxifees = -1;

	while (taxifees <= 0)
	{
		cout << "Input the amount of taxi fees for today";
		cin.ignore();
		cin >> taxifees;
	}

	taxifees = taxifees - 10;
#include <iostream>

	if (taxifees < 0)
	{
		taxifees = 0;
	}
	return taxifees;
}
float conference()
{
	float conferencefees = -1;

	while (conferencefees < 0)
	{
		cout << "Enter the amount of conference fees for today: ";
		cin.ignore();
		cin >> conferencefees;
	}

	return conferencefees;

}
float hotel()
{
	float hotelfees = -1;

	while (hotelfees < 1)
	{
		cout << "Enter the hotel rate: ";
		cin.ignore();
		cin >> hotelfees;
	}
	if (hotelfees - 90 < 0)
	{
		hotelfees = 0;
	}
	else
	{
		hotelfees = hotelfees - 90;
	}

	return hotelfees;
}
float meal_eaten(float departure, float arrival, int daynumber)
{
	float breakfast = -99, lunch = -99, total = -99, dinner = -99;
	while (breakfast < 0)
	{
		cout << "How much did you spend of Breakfast: ";
		cin.ignore();
		cin >> breakfast;
	}
	while (lunch < 0)
	{
		cout << "How much did you spend of Lunch: ";
		cin.ignore();
		cin >> lunch;
	}
	while (dinner < 0)
	{
		cout << "How much did you spend of Dinner: ";
		cin.ignore();
		cin >> dinner;
	}
	if (daynumber == 1)
	{
		if (departure < 7)
		{
			breakfast = breakfast - 9.00;
		}
		if (arrival > 13) {
			lunch = lunch - 12;
			dinner = dinner - 16;
		}
	}
	else;
	{
		breakfast = breakfast - 9;
		lunch = lunch - 12;
		dinner = dinner - 16;
	}
	if (breakfast < 0)
		breakfast = 0;
	if (lunch < 0)
		lunch = 0;
	if (dinner < 0)
		dinner = 0;
	total = dinner + lunch + breakfast;
	return total;
}
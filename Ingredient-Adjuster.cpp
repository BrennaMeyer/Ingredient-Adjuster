// Ingredient-Adjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Programmer:Brenna Meyer
//Date: Febryary 10th,2025
// Rerquirements:Ingredient Adjuster A cookie recipe calls for the following ingredients :
//1.5 cups of sugar
//1 cup of butter
//2.75 cups of flour
//The recipe produces 48 cookies with this amount of the ingredients.Write a program that asks the user 
//how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const float cookies = 48, //original number for the recipe 
		sugar = 1.5, //cups
		butter = 1, //cups
		flower = 2.75; //cups

	float Cookies,
		totalSugar,
		totalButter,
		totalFlower;

	cout << "Please enter the desired amount of cookies:";
	cin >> Cookies;

	totalSugar = (sugar * Cookies) / cookies;
	totalButter = (butter * Cookies) / cookies;
	totalFlower = (flower * Cookies) / cookies;

	cout << endl
		<< "Sugar Needed =" << totalSugar << endl
		<< "Butter Needed =" << totalButter << endl
		<< "Flower Needed =" << totalFlower << endl
		<< endl;
	
	return 0;
}



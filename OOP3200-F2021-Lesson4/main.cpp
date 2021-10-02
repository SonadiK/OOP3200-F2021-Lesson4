/*
 * Author: Tom Tsiliopoulos
 * StudentID: 100100100
 *
 * Date: September 20, 2021
 * Description: Demo Project for OOP3200 - F2021 - Week 3
 * 
 */

#include <iostream>

#include "Vector2D.h"

int main()
{
	try
	{
		float scalar = 1.5f;

		// getting input from the console into our vector 2 object
		std::cout << "Please enter the Origin Vector 2:" << std::endl;
		Vector2D origin;
		std::cin >> origin;

		std::cout << "Please enter the First Point Vector 2:" << std::endl;
		Vector2D first;
		std::cin >> first;

		const float distance = Vector2D::Distance(origin, first);

		std::cout << "\nThe Distance between: " << origin << " and " << first << " is " << distance << " units." << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << exception.what() << " Ending Program" << std::endl;
	}
	
	
}



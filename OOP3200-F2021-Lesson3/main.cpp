/*
 * Author: Tom Tsiliopoulos
 * StudentID: 100100100
 *
 * Date: September 20, 2021
 * Description: Demo Project for OOP3200 - F2021 - Week 3
 * 
 */

#include <iostream>
#include <vector>

#include "Transform.h"
#include "Vector2D.h"

int main()
{
	//try
	//{
	//	float scalar = 1.5f;

	//	// getting input from the console into our vector 2 object
	//	std::cout << "Please enter the Origin Vector 2:" << std::endl;
	//	Vector2D origin;
	//	std::cin >> origin;

	//	std::cout << "Please enter the First Point Vector 2:" << std::endl;
	//	Vector2D first;
	//	std::cin >> first;

	//	const float distance = Vector2D::Distance(origin, first);

	//	std::cout << "\nThe Distance between: " << origin << " and " << first << " is " << distance << " units." << std::endl;
	//}
	//catch (std::exception& exception)
	//{
	//	std::cerr << exception.what() << " Ending Program" << std::endl;
	//}
	/*Tranform object1;

	object1.position.Set(10.0f,10.0f);

	object1.scale.Set(2.0f, 2.0f);


	std::cout << object1.ToString() << std::endl;*/

	//create an empty vector of Transform shape
	std::vector<Transform> objects; //empty array or grouping of objects

	//Initialize 5 objects of type Transform and stored them inside of the empty objects vector.
	for(int i = 0; i < 5; ++i)
	{
		Transform temp_object;
		objects.push_back(temp_object); //push_back - append the object at the end of the vector 
	}

	int counter = 1;

	// for each object in objects
	for (Transform& object : objects)
	{
		std::cout << object.ToString() << std::endl;
		std::cout << "-------------------------------------" <<std::endl;
		std::cout << "Object " << counter << std::endl;
		object.position.Set(counter * 10.0f, 0.0f);
		std::cout << object.ToString() << std::endl;
		std::cout << "-------------------------------------\n";

		counter++;
	}

	float speed = 10.0f;
	std::cout << "Object #1" << std::endl;
	objects[0].position = objects[0].position + Vector2D::Up() * speed;

	std::cout << objects[0].position << std::endl;
}



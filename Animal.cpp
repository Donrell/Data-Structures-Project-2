// Animal.cpp
// This file contains the implementations of the classes

// DO NOT delete any other portions of this file. Please ask me if you do not
// understand what I mean. Simply add your answers.

// DO NOT include any other libraries in any of the provided starter files

// You are required to complete the portions 1) and 2) below.

#include "Animal.h"

// The implementation of the Animal class
int Animal::getIDLength() { return animalID.length(); } // Return the ID or name
void Animal::setID(string id) { animalID = id; }		// Set the ID or name
void Animal::displayIDRecursively(int len)				// Recursively display ID or name
{
	if(len == getIDLength())
		return;
	else
	{
		cout << animalID[len];
		displayIDRecursively(len + 1);
	}	
}

// To make the project more challenging, I could have asked you to
// provide the implementations for all the derived or sub clasess.

// The implementation of the Cat class
void Cat::displayIDRecursively(int len)
{
	if(len == getIDLength())
		return;
	else
	{
		cout << animalID[len];
		displayIDRecursively(len + 1);
	}	
}

// Provide the implementation of the following:
// 1) The implementation of the Dog class below
void Dog::displayIDRecursively(int len)
{
	if(len == getIDLength())
		return;
	else
	{
		cout << animalID[len];
		displayIDRecursively(len + 1);
	}	
}

// 2) The implementation of the Poodle class below
void Poodle::displayIDRecursively(int len)
{
	if(len == getIDLength())
		return;
	else
	{
		cout << animalID[len];
		displayIDRecursively(len + 1);
	}	
}


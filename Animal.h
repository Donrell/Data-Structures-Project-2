// Animal.h
// This file contains the declarations of the classes

// DO NOT delete any other portions of this file. Please ask me if you do not
// understand what I mean. Simply add your answers.

// Provide the missing declarations in sections 1) and 2) below

// The added include guard
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

// The declaration of the Animal class
class Animal
{
	protected:
		string animalID;  	// ID or name of the animal type
		int animalIDLength; // Total characters in the ID or name of the animal type
		
	public:
		int getIDLength();	// 
		void setID(string id);		
		virtual void displayIDRecursively(int len = 0);  // The keyword virtual is required here
														 // to allow or provide polymorphism
};

// To make the project more challenging, I could have asked you to
// provide the declarations for all the derived or sub clasess.

// The declaration of the Cat class.
class Cat : public Animal
{
	public:
		void displayIDRecursively(int len = 0) override; //class for Cat
};

// 1) Provide below the declaration of the Dog class
class Dog : public Animal
{
	public:
		void displayIDRecursively(int len = 0) override; // Class for Dog
													
};



// 2) Provide below the declaration of the Poodle class
class Poodle : public Dog
{
	public:
		void displayIDRecursively(int len = 0) override; // Class for poodle
														
};


#endif

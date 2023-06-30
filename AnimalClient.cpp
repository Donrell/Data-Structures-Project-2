// AnimalClient.cpp
// This is a client, driver, or application program that uses or tests the
// Animal.h header file.

// You are required to complete the portions 1), 2), 3), and 4)
// listed below.

// DO NOT include any other libraries in any of the provided starter files

// DO NOT delete any other portions of this file. Please ask me if you do not
// understand what I mean. Simply add your answers.

#include "Animal.h" // Include or keep this header here else you get an error
#include "ProjectTwoHeader.h" 

int main()
{
	// Display Project 2 header file content. Make sure that you first
	// complete the specified and required portions in the provided header file.
	displayHeading();
	
	// Creating and using a dynamic object of the Animal class
	cout << "\n\nCreating and using a dynamic object of the Animal class\n";
	Animal *animal = new Animal;
	string animalID; // Animal ID or name	
	cout << "Enter the animal ID or name: ";
	getline(cin, animalID);	
	animal->setID(animalID);
	cout << "The recursive display of the animal ID or name is \"";
	animal->displayIDRecursively();
	cout << "\"";
	
	//  Your interface must look like mine as shown in the provided
	//  Project 2 PDF.
	
	// Use the above example to:
	
	cout << "\n\nCreating and using a dynamic object of the Cat class\n";
	Animal *cat = new Cat; //Assigning Cat
	cout << "Enter the Cat ID or name: ";
	getline(cin, animalID);	
	cat->setID(animalID);
	cout << "The recursive display of the cat ID or name is \"";
	cat->displayIDRecursively(); //display cat
	cout << "\"";                                                       // 1) Create and use a dynamic object of the Cat class
		
	
	// 2) Create and use a dymamic object of the Dog class
	cout << "\n\nCreating and using a dynamic object of the Dog class\n";
	Animal *dog = new Dog; //Assigning Dog
	cout << "Enter the Dog ID or name: ";
	getline(cin, animalID);	
	dog->setID(animalID);
	cout << "The recursive display of the dog ID or name is \"";
	dog->displayIDRecursively(); //display dog
	cout << "\"";                                        
	
	// 3) Create and use a dymamic object of the Poodle class
	cout << "\n\nCreating and using a dynamic object of the Cat class\n";
	Animal *poodle = new Poodle; //Assigning Poodle
	cout << "Enter the Poodle ID or name: ";
	getline(cin, animalID);	
	poodle->setID(animalID);
	cout << "The recursive display of the Poodle ID or name is \"";
	poodle->displayIDRecursively(); //display poodle
	cout << "\"";                                        
    
	// 4) Polymorphism: below, create a dynamic array of Animal objects 
	//    composed of Animal, Cat, Dog, and Poodle objects then 
	//    use the array to recursively display the ID or name of each 
	//	  animal type. 
	//    Use the technique we applied in class on Thursday, March 16, 2023.
	
	//Creating an Array to display all animal names
	Animal *displayIt[] = { animal,  cat,
						    dog,  poodle};
	cout << "\n";
	for(int i = 0; i < 4; i++)
	{
	    cout << " " << endl;
		displayIt[i]->displayIDRecursively();
	    
	}
	cout << "\n";
	
	
	cout << "\n\nThank you very much for using this program, and for your cooperation\n"
          << "and professionalism.\n\n";

    // Display the date and time the program was run or executed
    time_t currentDateTime = time(0);     
    cout << "Today is " << ctime(&currentDateTime) << endl;
	cout << "**************************************************************************************\n\n";
	
	return 0;
}

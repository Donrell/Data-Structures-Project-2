// ProjectTwoHeader.h
// This header file implement the function that displays the program's heading.

// Please complete this heading with the required information before you begin
// writing your project.
 
// DO NOT delete any other portions of this file. Please ask me if you do not
// understand what I mean. Simply add your answers.

// DO NOT include any other libraries in any of the provided starter files

void displayHeading()
{
    cout << "\n**************************************************************************************\n\n";
    cout << "                  CMPS 201B - Data Structures - Spring 2023\n\n"
         << "                           Programming Project 2\n"
		 << "      Applying Recursive Functions, Virtual Functions, and Polymorphism\n\n";
		 
    cout << "Description:\n"
         << "  In this project, you write a starter C++ program for an imaginary veterinary clinic\n"
         << "  called \"Animal Lovers Clinic\" own by Dr. Mathieu K. Kourouma, which uses virtual\n"
		 << "  functions to provide usage of polymorphism, dynamic, or late binding of functions\n"
         << "  to specific objects. We use the functionality of the Animal class inheritance hierarchy\n"
         << "  we discussed in class to display the IDs or names. Overridden or virtual functions are\n"
         << "  used to implement recursion and to display the ID or name of each animal: Animal, Cat,\n"
		 << "  Dog, and Poodle. For each type of animals, the program should allow you or the user of\n"
		 << "  the project to enter any name for each animal type. For example, for an animal type, the\n"
		 << "  user can enter \"Huge Animal\", for a cat type, \"Maine Coon\", and similarly for the dog\n"
		 << "   and poodle types. In other words, the ID or name of the animal type can contain space.\n\n";
		 
	cout << "Required Starter Program Files to Use:\n"
         << "  Refer to the PDF file provided to you for more details. You are required to use the\n"
		 << "  provided started program files: \"ProjectTwoHeader.h\", \"Animal.h\", \"Animal.cpp\", and\n"
		 << "  \"AnimalClient.cpp\" to complete the specified and required sections in each program file.\n\n";
		 
    cout << "Due:        Friday, March 31, 2023\n"
         << "Author:     Donrell Mckenzie\n"
         << "Instructor: Dr. Mathieu K. Kourouma\n\n";

    cout << "Attestation or Claim:NONE\n"
         << "  I, Donrell Mckenzie, attest or claim that I am the full author of this\n"
         << "  Programming Project 2 that is I did not cheat or plagiarize this project, and that\n"
		 << "  no one wrote my project. Please refer to the Section Acknowledgement below for possible\n"
		 << "  actions that can be taken.\n\n";
      
    cout << "External Help Received:NONE\n"
         << "  Provide the names of the individuals, including the instructor for this course, you\n"
         << "  received help from and describe the types of help you received. If you did not receive\n"
         << "  any help, please type below NONE. Remember, you are the student and the person enrolled\n"
		 << "  in this course. Therefore, you are required to fully do the project on your own. No one\n"
		 << "  should do the project for you. Please refer to the Section Acknowledgement below for possible\n"
		 << "  actions that can be taken.\n\n";

    cout << "Resources Used:NONE\n"
         << "  List all the resources (books, websites, videos, etc.) you used to do the project,\n"
         << "  including the topics or programs covered in class. Otherwise, type below NONE.\n\n";

    cout << "Acknowledgement:\n"
         << "  I, Donrell Mckenzie, acknowledge that this Programming Project 2 is not a\n"
         << "  a group or a collaborative project. Also, I confirm that this project is my own work and\n"
         << "  that, in the event of doubt or sign of cheating or plagiarism, or that somebody may have\n"
         << "  written my project, the instructor, Dr. Mathieu K. Kourouma, has the right to schedule with\n"
         << "  me an oral or written test to determine the truthness of the claim I made in the above\n"
         << "  Attestation. In addition, if necessary, Dr. Kourouma can invite a third-party Computer\n"
		 << "  Science Professor to witness my reassessment. In the event of any violation, I will accept\n"
		 << "  to receive a zero on the project, without any possible makeup, or to fail the course.\n\n";
         
    cout << "Approved and Dated by: Donrell Mckenzie 3/21/23.\n\n";
    cout << "**************************************************************************************";
}

#include "hw06.h"

int menu(bookList* bList)
{
  //prompts the user with input options.
  std::cout << "Select from the following option:\n1. Add Book\n2. Delete Book\n3. Display a book\n";
  std::cout << "4. Display all books\n5. Save and Exit\nEnter your choice: ";

  int input; 
  std::cin >> input; //collects user input

  //Loops user input if invalid data is input.
  while(input <= 0 || input >= 6)
  {
    std::cout << "invalid input. Try again.\n";
    std::cout << "Select from the following option:\n1. Add Book\n2. Delete Book\n3. Display a book\n";
    std::cout << "4. Display all books\n5. Save and Exit\nEnter your choice: ";
    std::cin >> input;
  }
  
  //takes user input and moves the program to selected step.
  switch (input)
  {
    case 1:
      std::cout <<"Input 1\n";
      addBook(bList);
      return 1;
      break;
    case 2:
      std::cout <<"Input 2\n";
      delBook(bList);
      break;
    case 3:
      std::cout <<"Input 3\n";
      showBook(bList);
      break;
    case 4:
      std::cout <<"Input 4\n";
      showBooks(bList);
      break;
    case 5:
      std::cout <<"Input 5\n";
      return 5;
  }
  return 0;
}
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
      addBook(bList);
      break;
    case 2:
      delBook(bList);
      break;
    case 3:
      showBook(bList);
      break;
    case 4:
      showBooks(bList);
      break;
    case 5:
      return 5;
  }
  return 0;
}
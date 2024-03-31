#include "hw06.h"

void showBook(bookList* bList)
{
  bookEntry *pointer = bList->first;
  bookEntry *next = pointer;
  bookData* data = nullptr;

  std::cout << "which book would you like to see?\n";
  //sets next to the pointer of the first entry
  for(int i = 0; i < bList->length; i++)
  {
    
    std::cout << "Book " << i + 1 << ": " << next->data->title << ".\n";
    next = next->next; //sets next to the pointer of the next element.
    
  }
  //setis next back to first list item.
  next = pointer;

  //takes user input
  std::cout << "input: ";
  int input;
  std::cin >> input;

  //iterates through list to user's input
  for(int i = 1;i < input; i++)
  {
    next = pointer->next;
    pointer = next;
  }

  //sets data pointer
  data = next->data;
  //outputs book entrys to terminal
  std::cout << "ISBN: " << data->isbn;
  std::cout << "\nAuthor: " << data->author;
  std::cout << "\nTitle: " << data->title << "\n";

}
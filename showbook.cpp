#include "hw06.h"

void showBook(bookList* bList)
{
  bookEntry *pointer = bList->first;

  std::cout << "which book would you like to see?\n";
  //sets next to the pointer of the first entry
  bookEntry *next = pointer;
  for(int i = 0; i < bList->length; i++)
  {
    
    std::cout << "Book " << i + 1 << ": " << next->data->title << ".\n";
    next = next->next; //sets next to the pointer of the next element.
    
  }
  std::cout << "input: ";
  int input;
  std::cin >> input;

  for(int i = 1;i < input; i++)
  {
    next = pointer->next;
    pointer = next;
  }

  bookData* data = next->data;

  std::cout << "ISBN: " << data->isbn;
  std::cout << "\nAuthor: " << data->author;
  std::cout << "\nTitle: " << data->title << "\n";



}
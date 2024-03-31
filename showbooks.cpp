#include "hw06.h"

void showBooks(bookList* bList)
{
  bookEntry *pointer = nullptr;

  pointer = bList->first;
  int i = 0;

  std::cout <<"length: " <<bList->length << "\n";
  
  while (i < bList->length)
  {
    bookData *data = pointer->data;
    std::cout << "Book #" << i + 1;
    std::cout << "\nISBN: " << data->isbn << "\nAuthor: " << data->author;
    std::cout << "\nTitle: " << data->title << "\n\n";
    pointer = pointer->next;
    i++;
  } 
}
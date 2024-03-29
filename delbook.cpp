#include "hw06.h"

bookList* delBook(bookList* bList)
{
  bookEntry *pointer = bList->first;
  bookEntry *prev = nullptr;
  bookEntry *next = pointer;
  bookEntry *del = pointer;

  std::cout << "which book would you like to delete?\n";

  //shows a list of all book titles
  for(int i = 0; i < bList->length; i++)
  {
    
    std::cout << "#" << i + 1 << ": " << next->data->title << ".\n";
    next = next->next; //sets next to the pointer of the next element.
    
  }

  bool flag = false; //used to loop user input
  int input;

  while(!flag)
  { 
    //collect user input
    std::cin >> input;

    //validates input
    if(input < 0 ||input > bList->length)
    {
      std::cout << "Invalid Entry. Please input a value between 1-" << bList->length << ".\n";
    }
    else
    {
      flag = true;//exits loop if value is valid entry
    } 
  }
  
  input--; //changes user input to be ready to be used by computer
  
  //sets delete bookEntry to the user chosen book.
  for(int i = 0; i < input; i++)
  {
    del = del->next;
  }
  
  if(input > 0) //this runs for all books after the first.
  {
    //sets prev and next to the previous and next list items of del (user selection)
    prev = del->prev;
    next = del->next;

    prev->next = next;
    next->prev = prev;

    bList->length--;
  }
  else //this only runs for the first book
  {
    prev = nullptr;
    next = del->next;

    next->prev = prev;
    bList->first = next;

    bList->length--;
  }
  

    showBooks(bList);
    delete del->data;
    delete del;



  return bList;
}
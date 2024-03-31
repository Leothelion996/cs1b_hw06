#include "hw06.h"

bookList* delBook(bookList* bList)
{
  bookEntry *pointer = bList->first;
  bookEntry *prev = nullptr;
  bookEntry *next = pointer;
  bookEntry *del = pointer;
  int length = bList->length;

  std::cout << "which book would you like to delete?\n";

  //shows a list of all book titles
  for(int i = 0; i < length; i++)
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
    if(input < 1 ||input > length)
    {
      std::cout << "Invalid Entry. Please input a value between 1-" << bList->length << ".\n";
    }
    else
    {
      // input--; //changes user input to be ready to be used by computer
      flag = true;//exits loop if value is valid entry
    } 
  }
  
  
  //sets delete bookEntry to the user chosen book.
  // int i = 1;
  // do
  // {
  //   del = del->next;
  //   i++;
  // }while(i < input);

  
for(int i = 1; i < input; i++)
  {
    del = del->next;
  }


  // std::cout << "\ni " << i;
  std::cout << "\ninput " << input;
  std::cout << "\nlength-" << length << "\n";
  std::cout << del->data->title;
  std::cout << "\ndone\n";

  if (input == length)
  {
    // del = bList->last;
    std::cout << bList->last->data->title;
    bList->last = del->prev;
    del->prev->next = nullptr;
    bList->length--;
    // std::cout << del->data->title << "\n";
    // std::cout << bList->length <<" choice\n"<<input;

  }
  else if(input > 1) //this runs for all books after the first.
  {
    //sets prev and next to the previous and next list items of del (user selection)
    prev = del->prev;
    next = del->next;

    prev->next = next;
    next->prev = prev;

    bList->length--;
  } 
  else if (input == 1)//this only runs for the first book
  {
    prev = nullptr;
    next = del->next;

    next->prev = prev;
    bList->first = next;

    bList->length--;
  }
  
   
  
    // showBooks(bList);
    // delete del->data;
    // delete del;



  return bList;
}
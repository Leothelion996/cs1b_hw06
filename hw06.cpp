#include "hw06.h"

void deallocateList(bookList *bList); //added function to clean code. 

int main ()
{
  bookList *bList = new bookList;
  int flag = 0;

  bList = popList(bList); //populates items from the txt file
  
  while(flag != 5)
  {
    flag = menu(bList);
  }

  if (flag == 5)
  {
    std::ofstream ogfile("booksdb.txt");

    bookEntry *current = bList->first;
    
    while(current != nullptr)
    {
      ogfile << current->data->isbn << std::endl;
      ogfile << current->data->author << std::endl;
      ogfile << current->data->title << std::endl << std::endl;
      current = current->next;
    }
    ogfile.close(); //closes out program
    delete current; //deallocate bookEntry Current
  }  

  //deallocating list
  deallocateList(bList);

  delete bList;

  return 0;
}

void deallocateList(bookList *bList)
{
  bookEntry *current = bList->first;
  // bookEntry *next = nullptr;

  for(int i = 0; i < bList->length; i++)
  {
    bookEntry *next = nullptr;
    next = current->next;
    // current->prev = nullptr;
    // current->list = nullptr;
    delete current->data;
    delete current;
    current = next;
    
  }

};
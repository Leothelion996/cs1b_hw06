#include "hw06.h"

int main ()
{
  bookList *bList;
  int flag = 0;

  bList = popList();
  //for checking what populated bList
  std::cout << bList->first << "\n" << bList->last << "\n" << bList->length << "\n";
  std::cout << bList->last->data->isbn << "\n" << bList->last->data->author << "\n" << bList->last->data->title << "\n";
  
  while(flag != 5)
  {
    flag = menu(bList);
  }

  if (flag == 5)
  {
    std::ofstream ogfile("booksdb.txt");

    bookEntry *current = bList->first;
    while(current->data != nullptr)
    {
      ogfile << current->data->isbn << std::endl;
      ogfile << current->data->author << std::endl;
      ogfile << current->data->title << std::endl << std::endl;
      current = current->next;
    }
    ogfile.close(); //closes out program
    // delete current; //deallocate bookEntry Current
  }  

  delete bList;


  return 0;
}
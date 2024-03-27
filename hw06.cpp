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

  return 0;
}
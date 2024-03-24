#include "hw06.h"

int main ()
{
  bookList *bList;

  bList = popList();

  std::cout << bList->first << "\n" << bList->last << "\n" << bList->length << "\n";

  std::cout << bList->last->data->isbn << "\n" << bList->last->data->author << "\n" << bList->last->data->title << "\n";
  // menu();

  return 0;
}
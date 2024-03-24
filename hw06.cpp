#include "hw06.h"

int main ()
{
  //checks if Text file for Database exists.
  std::ifstream strt("booksdb.txt", std::fstream::app);

  if(!strt)
  {
    return -1;
  }

  bookList *bList;
  bookEntry *loop, *rec;
  std::string author, title, isbn, space;

  // popList();

  bList = new bookList;
  bList->length = 0;
  bList->first = nullptr;
  bList->last = nullptr;

  while(getline(fin, title) && getline(fin, author) && getline(fin, isbn) && getline(std::cin, space))
  {
    loop = new bookEntry;
    loop->list = nullptr;
    loop->next = nullptr;
    loop->prev = nullptr;
    loop->data = nullptr;

    if (bList->first == nullptr)
    {
      bList->first = loop;
    }
    else
    {
      loop->prev = rec;
      rec->next = loop;
    }
    bList->last = loop;
    rec = loop;
    rec->data->title = title;
    rec->data->author = author;
    rec->data->isbn = isbn;
    ++bList->length;
    

  }





  // menu();

  return 0;
}
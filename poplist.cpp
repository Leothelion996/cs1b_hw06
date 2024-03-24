#include "hw06.h"

bookList* popList()
{
  //checks if Text file for Database exists.
  std::ifstream strt("booksdb.txt", std::fstream::app);

//   if(!strt)
//   {
//     return -1;
//   }

  bookList *bList;
  bookEntry *loop, *rec;
  bookData *data;
  std::string author, title, isbn, space;

  bList = new bookList;
  bList->length = 0;
  bList->first = nullptr;
  bList->last = nullptr;

  while(getline(strt, isbn) && getline(strt, author) && getline(strt, title) && getline(strt, space))
  {

    data = new bookData;

    loop = new bookEntry;
    loop->list = bList;
    loop->next = nullptr;
    loop->prev = nullptr;
    loop->data = data;

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
    rec->data->isbn = isbn;
    rec->data->author = author;
    rec->data->title = title;
    ++bList->length;
  }

  return bList;

}
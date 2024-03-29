#include "hw06.h"

bookList* addBook(bookList* bList)
{
  bookEntry *pointer = bList->last;

  std::ifstream strt("booksdb.txt", std::fstream::app);

  bookEntry *loop = nullptr;
  bookData *data;
  std::string author, title, isbn, space;

  data = new bookData;

  loop = new bookEntry;
  loop->list = bList;
  loop->next = nullptr;
  loop->prev = pointer;
  loop->data = data;

  pointer->next = loop;

  std::cout << "Adding a new book.\nPlease insert ISBN.\n";
  std::cin.ignore(10,'\n');
  getline(std::cin, isbn);
  std::cout << "\nPlease insert Book Author: ";
  getline(std::cin, author);
  std::cout << "\nPlease insert Book Title: ";
  std::getline(std::cin, title);

  data->isbn = isbn;
  data->author = author;
  data->title = title;
  ++bList->length;

//   delete pointer;
//   delete loop;
//   delete data;
  

  return bList;

}
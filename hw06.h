/**********************************************************
 * Leonardo Herrera * CS1B TTH 7:30 - 9:40 * Assignment 6 *
 * hw06 * Due : Tuesday , March 25th, 2024                *
 *********************************************************/

#ifndef _H_
#define _H_

/**********************************************************
 *program name and description                            *
 **********************************************************/

#include <iostream>
#include <string>
#include <fstream>

struct bookList;
struct bookEntry;
struct bookData;

struct bookList
{
  int length;
  bookEntry *first;
  bookEntry *last;
};

struct bookEntry
{
  bookList *list;
  bookEntry *next;
  bookEntry *prev;
  bookData *data;
};

struct bookData
{
  std::string isbn;
  std::string author;
  std::string title;
};

bookList* addBook(bookList* bList);
bookList* delBook(bookList* bList);
void showBook(bookList* bList);
void showBooks(bookList* bList);
bookList* popList(bookList* bList);
int menu(bookList* bList);

#endif
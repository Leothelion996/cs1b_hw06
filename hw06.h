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
#include <cctype>

struct slist;
struct sentry;
struct bookEntry;

struct slist 
{
  int length;
  sentry *first;
  sentry *last;
};

struct sentry
{
  slist *list;
  sentry *next;
  sentry *prev;
  bookEntry *data;
};

struct bookEntry
{
  int isbn;
  std::string author;
  std::string title;
};

void addBook();
void delBook();
void showbook();
void showbooks();
void popList();
void menu();

#endif
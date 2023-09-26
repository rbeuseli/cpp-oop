// family.cpp
// create a family tree using a person class.
//
#include "person.h"
#include <iostream>

int main(int argc, char *argv[])
{
  person a("John", "Smith", 'M');
  person b;
  b.setName("Mary", "Jones");
  b.setGender('F');
  a.marry(b);
  return 0;
}

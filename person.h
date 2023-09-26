#ifndef _PERSON_H
#define _PERSON_H
// person.h
//
#include <string>

class person
{
  public:
    person();
    person(const std::string &name, const std::string & family, char gender);
    ~person();
    void setName(const std::string &name, const std::string &family);
    void setGender(char gender);
    void marry(person &p);

  private:
    std::string _name;
    std::string _family;
    char _gender;
};
#endif    /* _PERSON_H */

#ifndef MEMBER_H 
#define MEMBER_H

#include "Person.h" 
#include <vector>

class Member : public Person { 
private:
   int memberId; 
   std::vector<int> booksLoaned;

public:
  Member(int memberId, const std::string& name, const std::string& address, const std::string& email); 
  ~Member() {}
void borrowBook(int bookId);
void returnBook(int bookId);
};

#endif // MEMBER_H
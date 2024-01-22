#ifndef LIBRARIAN_H 
#define LIBRARIAN_H

#include "Person.h" 
#include <vector>

class Librarian : public Person { 

private:
  int staffId; 
  int salary;

public:
  Librarian(int staffId, const std::string& name, const std::string& address, const std::string& email, int
salary)

     : Person(name, address, email), staffId(staffId), salary(salary) {}
void addMember(/* parameters for member details */);
void issueBook(/* parameters for issuing a book */);
void returnBook(/* parameters for returning a book */);
void displayBorrowedBooks(/* parameters to display books */); 
void calcFine(/* parameters to calculate fine */);

};

#endif // LIBRARIAN_H
#ifndef BOOK_H 
#define BOOK_H

#include <string>

class Book { 
private:
   int bookID;
   std::string bookName;
   std::string authorFirstName; 
   std::string authorLastName; 
   std::string bookType;
// Date dueDate;
   int borrowerID;

public:
  Book(int bookID, const std::string& bookName, const std::string& authorFirstName, const std::string&
authorLastName, const std::string& bookType); 
~Book() {}

void borrowBook(int memberId);
void returnBook();

};

#endif // BOOK_H
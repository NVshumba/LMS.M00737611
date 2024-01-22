#ifndef PERSON_H 
#define PERSON_H
#include <string>
class Person { protected:
std::string name; std::string address; std::string email;
public:
Person(const std::string& name, const std::string& address, const std::string& email) : name(name), address(address), email(email) {}
// Getter and setter methods...
std::string getName() const { return name; }
void setName(const std::string& newName) { name = newName; }
std::string getAddress() const { return address; }
void setAddress(const std::string& newAddress) { address = newAddress; } std::string getEmail() const { return email; }
void setEmail(const std::string& newEmail) { email = newEmail; }
};
#endif // PERSON_H
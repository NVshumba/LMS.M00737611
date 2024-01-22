#ifndef Staffmember_H
#define Staffmember_H

#include <string>

class Person { 
  protected:
std::string name; 
std::string address;
std::string email;

public:
Person(const std::string& name, const std::string& address, const std::string& email) : name(name), address(address), email(email) {}

// Getter and setter methods

std::string getName() const { return name; }
void setName(const std::string& newName) { name = newName; }
std::string getAddress() const { return address; }
void setAddress(const std::string& newAddress) { address = newAddress; } std::string getEmail() const { return email; }
void setEmail(const std::string& newEmail) { email = newEmail; }
};

#endif // Staffmember_H

//If option 2 is picked 	    
		    
		    else if (outerChoice ==2) {
		    	char newstaffUser [15];
		    	char newstaffPassword [15];

		    	system("cls");
		    	cout<<"\n -------- New Staff Member Login ---------";
		    	cout<<"\n\n. Enter username: ";
		    	cin>>newstaffUser;
		    	cout<< "\n Enter password: ";
		    	cin>>newstaffPassword;


	    if ( (strcmp(newstaffUser, USER) ==0) &&
		    	   (strcmp (newstaffPassword, USERPASSWORD) == 0)) {

		    	 int innerChoice = 0;
		    	 while(innerChoice != 9){
		    	 system("cls");
		    	 cout<<"\n1. Add Book";
				 cout<<"\n2. Return a Book";
				 cout<<"\n3. List of all Book";
				 cout<<"\n9. Exit";
				 cout<<"\n\n Enter your choice :";
				 cin>>innerChoice;

					 switch (innerChoice) {
					 case 1: addBook(); break;
					 case 2: returnBook(); break;
					 case 3: listOfAllBooks (); break;
					 case 9: break;

					 default: cout<<"\n\n Error Invalid Choice. Press any key to continue...";
					 getchar();getchar();

					 }


		    	     }
		    	     system("cls");
		    	     }
		    	     else
		    	     {
		    	     cout<<"\n\n Error : Invalid Credentials. Press any key to continue";
		    	     getchar(); getchar();

		    	     }

		    }
		    else if (outerChoice!=9) {
		    	    cout<<"\n\n Invalid choice. Press any key to continue..";
		    	    getchar();getchar();
		    }
		    else
		    {
		    	cout<<"\n\n Thank you for using our system. Please press any key to exit";
		    	getchar();getchar();
		    }
	

	return 0;

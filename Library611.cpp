/*
file: library611.cpp
*/
#include<fstream>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <ctime>

using namespace std;

//created a structure for the library using a class 
class Library611 
{
	int bookid; 
	int pages;
	char bookname[20];
	char bookauthor[20];
    char genre[20];
   
    int dueDay[3]; 
}

int main(int argc, char** argv) {

	int outerChoice = 0;
	while (outerChoice!=9) {
		system("cls");
		cout<<"\n Library. Management 2024 \n\n";
		cout<<"\n1.  Staff Member";
		cout<<"\n2.  Add new Staff member ";
		cout<<"\n9.  Exit ";
		cout<<"\n\nEnter your choice: ";
		cin>>outerChoice;

		if ( outerChoice == 1)
		{
		char staffMember[15];
		char staffPassword [15];

		system("cls");
		cout<<"\n--------Staff Login --------";
		cout<<"\n\n Enter username: ";
		cin>>staffMember;
		cout<<"\n Enter password: ";
		cin>>staffPassword;
		if( (strcmp(staffMember, STAFFMEMBER) == 0) &&
			(strcmp(staffPassword, STAFFPASSWORD) == 0)) {

        // Allowing user to select a function of the management system after they have successfully logged in.		


			getchar(); getchar();
		    system("cls");
		    int innerChoice = 0;
		    while (innerChoice != 9) {
		    cout<<"\n\n Staff Login Completed ! Press any key to continue..:)";
		    cout<<"\n1. Add Book";
		    cout<<"\n2. Update Book";
		    cout<<"\n3. Delete Book";
		    cout<<"\n4. List of all Books";
		    cout<<"\n9. Exit";
		    cout<<"\n\n Enter your choice :";
		    cin>>innerChoice;
		    switch(innerChoice) {

		    case1: addBook(); break;
		    case2: updateBook(); break;
		    case3: deleteBook(); break;
		    case4: listOfAllBooks(); break;
		    default: cout<<"\n\n Invalid Choice. Press any key to continue..."
		    	     getChar();

		    }
		    system("cls");

		}

		    }
		    else
		    {
		    cout<<"\n\n. Error : Invalid Credentials. Press any key to continue ...";
		    getchar();getchar();
		    }

         //The display options to add a new staff member login		    
		    }
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
	}

	return 0;
}
  
  // Allowing user to add new books the system , they need to input the data requested inorder to add the book to the system 

			int addBook(){
			int bookid;
			char bookname[20];
			char bookauthor[20];
			int year, month, day;

			time_t t = time(NULL);
			struct tm tm = *localtime(&t);

			year = tm. tm_year + 1900;
			month = tm.tm_mon +1;
			day = tm.tm_mday;

			system("cls");
			cout<<"\n ------ Add a new book -----";

			cout<<"\n\n Enter 4 digit number ID for book :";
			cin>>bookid;
			cout<<"Enter the book name : ";
			cin>>bookname;
			cout<<"\n Enter book author : ";
			cin>>bookauthor;


			char filename[20];

			sprintf( filename, "%d%s", bookid, ".dat");

			ofstream file(filename) ;

			file<<bookname<<"\n" ;	
			file<<bookauthor<<"\n" ;
			file<<year<<"\n" ;
			file<<month<<"\n" ;
			file<<day<<"\n" ;	


            file.close();


            cout<<"\n File Saved sucessfully !!";
            getchar(); getchar ();
			}

			int deleteBook(){


			}

			int updateBook(){

			}

			int listOfAllBooks() {

			}

			int borrowedBooks() {

			}

			int returnedBooks() {

			}
			int staffMember() {

			}

			int newstaffUser() {

			}

			/*------------------ End of Library611.cpp -------------*/


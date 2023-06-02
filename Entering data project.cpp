#include<iostream>
using namespace std;

int main()
{
	int input;
	cout <<"__________________*******************_____________________"<<endl;
	cout <<         "|Welcome to the School Management System| "       <<endl;
	cout <<"__________________*******************_____________________"<<endl;
	cout <<"*********************************"<<endl;
	cout <<"Enter in main menu " <<endl;
	cout <<"*********************************"<<endl;
	while(true)
	{
	cout << "Press 1 to create a student "<<endl;
	cout << "Press 2 to display all students "<<endl;
	cout << "Press 3 to search a student "<<endl;
	cout << "Press 5 to delete a student "<<endl;
	cout << "Press 6 to display class result "<<endl;
	cout << "Press 7 to exit "<<endl;
	cin >> input;
	switch(input)
	{
		case 1:
			int choice;
            cout<<"How many students do you want to enter: " <<endl;
            cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
            cin >> choice;
			break;
			
		case 2:
			int a;
		    cout<< "Enter to show all students: " <<endl;
		    cout<< "Data of Student:  "<<endl;
		    cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
		  	cin >> a;
			break;
	
		case 3:
			int b;
			cout<< "Enter the roll no which you want to search: " <<endl;
			cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
			cin >> b;
			
            break;
	
		case 4:
			int c;
            cout<< "Enter to modify a student: " <<endl;
            cout<< "Data of Student: "<<endl;
            cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
            cout<<" Enter new data: "<<endl;
            cout<< "Data of Student: "<<endl;
            cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
            
            cin >> c;
  			break;

		case 5:
		    int d;     
		    cout<< "Enter to delete a student: " <<endl;
		    cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
            cout<<" All data is deleted successfully"<<endl;
		    cin >> d;
          	break;

		case 6:
			int e;
            cout<< "Enter to show the class result: " <<endl;
            cout<<" Enter Name: samawia "<<endl;
            cout<<" Enter Roll No: 2020 CS 124 "<<endl;
            cout<<" Enter Course: Pf "<<endl;
            cout<<" Enter Class: 13 "<<endl;
            cout<<" Enter Contact: 02345678900 "<<endl;
            cout<<" Grade: A+"<<endl;
            cout<<" Marks:459 "<<endl;
            cout<<"enter name of another student_"<<endl;
            cin >>e;
            break;
	
		case 7:
			cout<< "Enter to exit: "<<endl;
			cout<<"System stopped: "<<endl;
			break;
			
	    default:
	    	cout << "Invalid input "<<endl;
	    	break;
    }
}
return 0;	
}

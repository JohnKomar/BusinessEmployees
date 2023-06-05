 /* John Komarnicki "Employees Project"
 * 
 * 
 * Polymorphism - "Employees" 
 * Program creates a list of employees and their respective positions within a company (owner, management, labor).
 * Base class called Person. 
 * Three derived classes from the Person class including Laborer, Manager and Owner derived classes. Along with accessors and mutators.
 * Each derived class will also have a function that descrives what category the person is in.
 * The program will display a menu allowing the user to add laborers, managers and owners. 
 * There will be a menu option to display show all data for all entries  There will also be an option to quit.
 * There is a menu option to add a person to the container and display all person information in the list. Menu options will also do the following:
 * 1. Find a person by name then print out all information stored about that person
 * 2. Find and remove a person by name
 * 3. Calculate and display the average amount earned for each of the 3 categories of people
 * When the user chooses the option to quit - all information from the container will be written to a file.  When the program starts, that file will be read and the data preloaded into the container.
 *  
*/

#include <iostream>
#include <vector>
#include <fstream>
#include "input.h"

using namespace std;

class Person

{
        protected:
            string name;
            string socialsecurity;
            string birthdate;
        
        public:
            Person();
            
            void SetName(string n);
		    string GetName();
            void SetSocialSecurity(string ss);
		    string GetSocialSecurity();
            void SetBirthdate(string bd);
		    string GetBirthdate();
            
            
            virtual double GetPercentage();
            virtual double GetHourlySalary();
            virtual double GetSalary();

            //Laborer virtual functions
            virtual void SetJob(string j);
            virtual void SetEmployeeID(string e);
            virtual void SetHourlySalary(string hs);
            virtual void SetHoursWorked(string hw);

            //Manager virtual functions
            virtual void SetDepartment(string d);
            // virtual void SetEmployeeID(string e);
            virtual void SetSalary(string s);

            //Owner virtual functions
            virtual void SetPercentage(string p);
            virtual void SetDateOwner(string date);

            virtual string Name();
            virtual void Input();
            virtual void Display(ostream& out);

            virtual string Displayoutput();
};
// __________________________________________________
// laborerderive.h__________________________________________________
class Laborer: public Person
{

    // From the Person class, 
    // derive a Laborer class that also includes job, employee id, hourly salary and hours worked.  (With accessors and mutators)
        private:
            string job;
            string employeeid;
            double hourlysalary;
            string hoursworked;
        
        public:
            Laborer();
            string Name();
            void SetJob(string j);
		    string GetJob();
            void SetEmployeeID(string e);
		    string GetEmployeeID();
            void SetHourlySalary(string hs);
		    double GetHourlySalary();
            void SetHoursWorked(string hw);
		    string GetHoursWorked();
            

            void Display(ostream& out);
		    void Input();

            string Displayoutput();
};
// __________________________________________________
// managerderive.h__________________________________________________
class Manager: public Person

{
        private:
            string department;
            string employeeid;
            double salary;
        
        public:
            Manager();
            string Name();
            void SetDepartment(string d);
		    string GetDepartment();
            void SetEmployeeID(string e);
		    string GetEmployeeID();
            void SetSalary(string s);
		    double GetSalary();
            

            void Display(ostream& out);
		    void Input();

            string Displayoutput();
};

// __________________________________________________
// ownerderive.h__________________________________________________
class Owner: public Person

{
    // From the Person class, derive an Owner class that also includes the percentage of the business they own and the date they became an owner (With accessors and mutators)
        private:
            double percentage;
            string dateowner; 
        
        public:
            Owner();
            string Name();
            void SetPercentage(string p);
		    double GetPercentage();
            void SetDateOwner(string date);
            string GetDateOwner();
            

            void Display(ostream& out);
		    void Input();

            string Displayoutput();
};
// __________________________________________________
// __________________________________________________
// Base class person should contain a name, 
// social security number and 
// birth date as well as accessors and mutators
Person::Person()
{
// setting to "0" initially   
    name="0";
    socialsecurity="0";
    birthdate="0";
}
// Mutator is set
void Person::SetName(string n)
{
    name=n;
}

string Person::GetName()
{
    return name;
}
void Person::SetSocialSecurity(string ss)
{
    socialsecurity=ss;    
}

string Person::GetSocialSecurity()
{
    return socialsecurity;
}
void Person::SetBirthdate(string bd)
{
    birthdate=bd;    
}

string Person::GetBirthdate()
{
    return birthdate;
}

double Person::GetPercentage()
{
    return 0;
}
double Person::GetHourlySalary()
{
    return 0;
}            
double Person::GetSalary()
{
    return 0;
}

string Person::Name()
{
    return "null";
}
//Laborer virtual functions
void Person::SetJob(string j)
{

}
void Person::SetEmployeeID(string e)
{

}
void Person::SetHourlySalary(string hs)
{

}
void Person::SetHoursWorked(string hw)
{

}
//Manager virtual functions
void Person::SetDepartment(string d)
{

}
void Person::SetSalary(string s)
{
    
}
//Owner virtual functions
void Person::SetPercentage(string p)
{

}
void Person::SetDateOwner(string date)
{

}
void Person::Input()
{
    string n;
    string ss;
    string bd;
    
    cout << "Enter Person Name : " << endl;
    cin >> n ;
    SetName(n);
    cout << "Enter Person Social Security Number# : " << endl;
    cin >> ss ;
    SetSocialSecurity(ss); 
    cout << "Enter Person Birth Date" << endl;
    cin >> bd ;
    SetBirthdate(bd);
}
void Person::Display(ostream& out)
{
    out << "Person Name : " << name << endl;
    out << "Person Social Security Number# : " << socialsecurity << endl;
    out << "Person Birth Date : " << birthdate << endl;
}

string Person::Displayoutput()
{
    string displayoutputperson;
    displayoutputperson= name + "\n" + socialsecurity + "\n" + birthdate;

    return displayoutputperson;
}

// From the Person class, 
// derive a Laborer class that also includes job, employee id, hourly salary and hours worked.  (With accessors and mutators)
        

Laborer::Laborer()
{
    job="0";
    employeeid="0";
    hourlysalary=0;
    hoursworked="0";
}
string Laborer::Name()
{
    return "Category of Person: Laborer";
}
// Mutator is set
void Laborer::SetJob(string j)
{
    job=j;
}
string Laborer::GetJob()
{
    return job;
}
void Laborer::SetEmployeeID(string e)
{
    employeeid=e;
}
string Laborer::GetEmployeeID()
{
    return employeeid;
}
void Laborer::SetHourlySalary(string hs)
{
    hourlysalary=stod(hs);
    // hourlysalary=hs;   
}
double Laborer::GetHourlySalary()
{
    return hourlysalary;
}
void Laborer:: SetHoursWorked(string hw)
{
    hoursworked=hw;
}

string Laborer::GetHoursWorked()
{
    return hoursworked;
}

void Laborer::Input()
{
    Person::Input();
    string j;
    string e;
    string hs;
    string hw;
    cout << "Enter Laborer Job : " << endl;
    cin >> j ;
    SetJob(j);
    cout << "Enter Laborer Employee ID(ex ID#) : " << endl;
    cin >> e ;
    SetEmployeeID(e); 
    cout << "Enter Laborer Hourly Salary($xx.xx)" << endl;
    cin >> hs ;
    SetHourlySalary(hs);
    cout << "Enter Laborer Hours Worked(X Hours)" << endl;
    cin >> hw ;
    SetHoursWorked(hw);
}
void Laborer::Display(ostream& out)
{
    out << Name() << endl;
    Person::Display(out);
    // otherwise could display using out for each Person variable as three lines below
    // out << "Person Name : " << name << endl;
    // out << "Person Social Security# : " << socialsecurity << endl;
    // out << "Person Birthdate : " << birthdate << endl;
    out << "Laborer Job : " << job << endl;
    out << "Laborer Employee ID# : " << employeeid << endl;
    out << "Laborer Hourly Salary : " << hourlysalary << endl;
    out << "Laborer Hour Worked : " << hoursworked << endl;
}

string Laborer::Displayoutput()
{
    string displayoutputlaborer;
    string hourlysalarystring=to_string(hourlysalary);
    displayoutputlaborer= Name() + "\n" + Person::Displayoutput() + "\n" + job + "\n" + employeeid + "\n" + hourlysalarystring + "\n" + hoursworked;

    // out << Name() << endl;
    // Person::Display(out);
    // out << "Owner Percentage of Business : " << percentage << endl;
    // out << "Owner Date they became Owner : " << dateowner << endl;
    
    return displayoutputlaborer;
}

Manager::Manager()
{
    department="0";
    employeeid="0";
    salary=0;
}
string Manager::Name()
{
    return "Category of Person: Manager";
}
void Manager::SetDepartment(string d)
{
    department=d;
}
string Manager::GetDepartment()
{
    return department;
}
void Manager::SetEmployeeID(string e)
{
    employeeid=e;
}
string Manager::GetEmployeeID()
{
    return employeeid;
}
void Manager:: SetSalary(string s)
{
    salary=stod(s);
    // salary=s;
}
double Manager::GetSalary()
{
    return salary;
}
void Manager::Input()
{
    Person::Input();
    string d;
    string e;
    string s;
    cout << "Enter Manager Department : " << endl;
    cin >> d ;
    SetDepartment(d);
    cout << "Enter Employee ID(ex ID#) : " << endl;
    cin >> e ;
    SetEmployeeID(e); 
    cout << "Enter salary($xxx,xxx)" << endl;
    cin >> s ;
    SetSalary(s);
}
void Manager::Display(ostream& out)
{
    out << Name() << endl;
    Person::Display(out);
    out << "Manager Department : " << department << endl;
    out << "Manager Employee ID# : " << employeeid << endl;
    out << "Manager Salary : " << salary << endl;
}

string Manager::Displayoutput()
{
    string displayoutputmanager;
    string salarystring=to_string(salary);
    displayoutputmanager= Name() + "\n" + Person::Displayoutput() + "\n" + department + "\n" + employeeid + "\n" + salarystring;

    // out << Name() << endl;
    // Person::Display(out);
    // out << "Owner Percentage of Business : " << percentage << endl;
    // out << "Owner Date they became Owner : " << dateowner << endl;
    
    return displayoutputmanager;
}

Owner::Owner()
{
    
}
string Owner::Name()
{
    return "Category of Person: Owner";
}
void Owner::SetPercentage(string p)
{
    percentage=stod(p);
    // percentage=p;
}
double Owner::GetPercentage()
{
    return percentage;
}
void Owner::SetDateOwner(string date)
{
    dateowner=date;
}
string Owner::GetDateOwner()
{
    return dateowner;
}
void Owner::Input()
{
    Person::Input();
    string p;
    string date;
    cout << "Enter Owner Percentage of Company : " << endl;
    cin >> p ;
    SetPercentage(p);
    cout << "Enter date they became Owner : " << endl;
    cin >> date ;
    SetDateOwner(date); 
}
void Owner::Display(ostream& out)
{
    out << Name() << endl;
    Person::Display(out);
    out << "Owner Percentage of Business : " << percentage << endl;
    out << "Owner Date they became Owner : " << dateowner << endl;
    
}

string Owner::Displayoutput()
{
    string displayoutputowner;
    string percentagestring=to_string(percentage);
    displayoutputowner= Name() + "\n" + Person::Displayoutput() + "\n" + percentagestring + "\n" + dateowner;

    // out << Name() << endl;
    // Person::Display(out);
    // out << "Owner Percentage of Business : " << percentage << endl;
    // out << "Owner Date they became Owner : " << dateowner << endl;
    
    return displayoutputowner;
}

void Display(std::vector<Person*>& v);

void Display(std::vector<Person*>& v)
{
	if (v.empty()) {
		std::cout << "List is empty\n";
	}
	else {
		long len=v.size();
		for (long i=0; i<len; i++) {
			v[i]->Display(std::cout);
			std::cout<<std::endl;
		}
	}
}

void Average(std::vector<Person*>& v)
{
    string Ownerlabel;
    string Managerlabel;
    string Laborerlabel;
    int N = v.size();
    double avgmanager;
    double avglaborer;
    double avgowner;
    int i;
    double summanager;
    double sumlaborer;
    double sumowner;
    double nummanager;
    double numlaborer;
    double numowner=0;

    Ownerlabel = "Category of Person: Owner";
    Owner ObjectOwner;


    for (i=0; i <N; i++){
        if (v.at(i)->Name() == Ownerlabel ) {
                sumowner += v.at(i)->GetPercentage();
                numowner=numowner+1;          
        }
    }
    avgowner= sumowner / numowner;
    cout << "Owner average Percentage = " << avgowner << endl;

    Laborerlabel = "Category of Person: Laborer";
    
    for (i=0; i <N; i++){
        if (v.at(i)->Name() == Laborerlabel ) {
                sumlaborer += v.at(i)->GetHourlySalary();
                numlaborer=numlaborer+1;          
        }
    }
    avglaborer= sumlaborer / numlaborer;
    cout << "Laborer average Hourly Salary = " << avglaborer << endl;


    Managerlabel = "Category of Person: Manager";
    
    for (i=0; i <N; i++){
        if (v.at(i)->Name() == Managerlabel ) {
                summanager += v.at(i)->GetSalary();
                nummanager=nummanager+1;          
        }
    }
    avgmanager= summanager / nummanager;
    cout << "Manager average Salary = " << avgmanager << endl;      
}

int main()
{

	int choice=0;
	std::vector<Person*> personList;
    string Searchedname;
    Person Object1;

    ifstream input;
    input.open("persondata",ios::in);
    if (input.is_open()==1) {
      
      while (!input.eof()  ) {
        string value;
         input >> value;
         if ( value== "Laborer" ) {
                personList.push_back(new Laborer);
                input >> value;
                personList[personList.size()-1]->SetName(value);
                input >> value;
                personList[personList.size()-1]->SetSocialSecurity(value);
                input >> value;
                personList[personList.size()-1]->SetBirthdate(value);
                input >> value;
                personList[personList.size()-1]->SetJob(value);
                input >> value;
                personList[personList.size()-1]->SetEmployeeID(value);
                input >> value;
                personList[personList.size()-1]->SetHourlySalary(value);
                input >> value;
                personList[personList.size()-1]->SetHoursWorked(value);
         }
         if ( value== "Manager" ) {
                personList.push_back(new Manager);
                input >> value;
                personList[personList.size()-1]->SetName(value);
                input >> value;
                personList[personList.size()-1]->SetSocialSecurity(value);
                input >> value;
                personList[personList.size()-1]->SetBirthdate(value);
                input >> value;
                personList[personList.size()-1]->SetDepartment(value);
                input >> value;
                personList[personList.size()-1]->SetEmployeeID(value);
                input >> value;
                personList[personList.size()-1]->SetSalary(value);
                
         }
         if ( value== "Owner" ) {
                personList.push_back(new Owner);
                input >> value;
                personList[personList.size()-1]->SetName(value);
                input >> value;
                personList[personList.size()-1]->SetSocialSecurity(value);
                input >> value;
                personList[personList.size()-1]->SetBirthdate(value);
                input >> value;
                personList[personList.size()-1]->SetPercentage(value);
                input >> value;
                personList[personList.size()-1]->SetDateOwner(value);
         }
	 }
      }
	do {
		choice=ReadValue<int>("1. Add Laborers\n2. Add Managers\n3. Add Owners\n4. Show all data\n5. Find a person by name and view all the information for the person\n6. Find and remove a person by name\n7. Calculate and display the average amount earned for each of the 3 categories of people\n8. Quit\n",1,8);
		switch (choice) {
			case 1: personList.push_back(new Laborer);
				personList[personList.size()-1]->Input();
				break;

			case 2: personList.push_back(new Manager);
				personList[personList.size()-1]->Input();
				break;

            case 3: personList.push_back(new Owner);
				personList[personList.size()-1]->Input();
				break;

			case 4:
                std::cout << "Showing all data entered : \n";
				Display(personList);
				
				break;
            case 5:
                {std::cout << "Find a person by name and view all the information for the person \n";   
                std::cout << "Please input the name of Person to display their information: \n";
                std::cin >> Searchedname;
                
                int N = personList.size();   
                int i;
                int result=-1;
                for (i = 0; i < N; i++) {
                    
                    if (personList.at(i)->GetName() == Searchedname){
                        std::cout << " After running the search feature of this program " << Searchedname << " is part of the Person List and can be found at element number: " << i <<endl;
                        result=i;
                        std::cout << "The information for " << Searchedname << " is displayed below:" <<endl;
                        // does work but not using due to consistancy not being followed.... personList[i]->Display(std::cout); 
                        // using below to Display as it follows the consistancy of .at(i) seen in program
                        personList.at(i)->Display(std::cout);
                        break;
                    }
                    }

                    if (result == -1){
                            std::cout << "Thank you for running the search feature of this program. Unfortunately " << Searchedname << " is not part of the Person List at this time.\n";
                    }
                }
                break;
            case 6: 
                // std::cout << "Find and remove a person by name \n" ;
                {std::cout << "Find and remove a person by name \n";   
                std::cout << "Please input the name of Person to find: \n";
                std::cin >> Searchedname;
                

                int N = personList.size();   
                int i;
                int result=-1;
                for (i = 0; i < N; i++) {
                    
                    if (personList.at(i)->GetName() == Searchedname){
                        std::cout << " After running the search feature of this program " << Searchedname << " is part of the Person List and can be found at element number: " << i <<endl;
                        result=i;
                        std::cout << " Please wait. Processing removal " << endl;
                        personList.erase (personList.begin()+i);
                        std::cout << " Thank you for your patience. The removal of " << Searchedname << " has been completed " << endl;
                        break;
                    }
                    }

                    if (result == -1){
                            std::cout << "Thank you for running the search feature of this program. Unfortunately " << Searchedname << " is not part of the Person List at this time.\n";
                    }
                }

                break;
            case 7:
                std::cout << "Thank you for entering menu option to Calculate and display the average amount earned for each of the 3 categories of people \n" ;
                Average(personList);
                break;
            case 8:
                int returnValue=0;

                ofstream output;
                output.open("persondata",ios::out);
                if (output.is_open()==1) {
                for (int i=0; i<personList.size(); i++) {
                output << personList.at(i)->Displayoutput() << endl;
	            if (output.fail()==1) {
                cerr << "Error writing to file!\n";
	            }
                }
                output.close();
                }
                 else {
                cerr << "Error!  Cannot open file!\n";
                returnValue=1;
                }
                return returnValue;
                cout << "Thank you! Goodbye!\n";
                break;

                std::cout << "Thank you! Goodbye!\n";
                break;                
		}
	} while (choice != 8);

	return 0;
}

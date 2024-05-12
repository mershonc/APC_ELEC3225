#include <iostream>
#include <string>
#include <limits>

using namespace std;

// base class representing a user
class User {
protected:
    string first_name;
    string last_name;
    string ID;

public:
    // constructor to initialize user details
    User(const string& first_name, const string& last_name, const string& ID)
        : first_name(first_name), last_name(last_name), ID(ID) {}

    // set user's first name
    void setFirstName(const string& first_name) {
        this->first_name = first_name;
    }

    // set user's last name
    void setLastName(const string& last_name) {
        this->last_name = last_name;
    }

    // set user ID
    void setID(const string& ID) {
        this->ID = ID;
    }

    // print user's full info
    void printInfo() const {
        cout << "First Name: " << first_name << ", Last Name: " << last_name << ", ID: " << ID << endl;
    }
};

// derived class for students
class Student : public User {
public:
    using User::User;

    // simulate course search
    void searchCourses() {
        cout << "Student is searching for courses.." << endl;
    }

    // simulate adding a course
    void addCourse() {
        cout << "Student is adding a course.." << endl;
    }

    // simulate dropping a course
    void dropCourse() {
        cout << "Student is dropping a course.." << endl;
    }

    // simulate printing a schedule
    void printSchedule() {
        cout << "Student is printing their schedule.." << endl;
    }
};

// derived class for instructors
class Instructor : public User {
public:
    using User::User;

    // simulate printing a schedule
    void printSchedule() {
        cout << "Instructor is printing their schedule.." << endl;
    }

    // simulate printing class list
    void printClassList() {
        cout << "Instructor is printing their class list.." << endl;
    }

    // simulate course search
    void searchCourses() {
        cout << "Instructor is searching for courses.." << endl;
    }
};

// derived class for admins
class Admin : public User {
public:
    using User::User;

    // simulate adding a course
    void addCourse() {
        cout << "Admin is adding a course to the system.." << endl;
    }

    // simulate removing a course
    void removeCourse() {
        cout << "Admin is removing a course from the system.." << endl;
    }

    // simulate adding a user
    void addUser() {
        cout << "Admin is adding a user.." << endl;
    }

    // simulate removing a user
    void removeUser() {
        cout << "Admin is removing a user.." << endl;
    }

    // simulate adding a student to a course
    void addStudentToCourse() {
        cout << "Admin is adding a student to a course.." << endl;
    }

    // simulate removing a student from a course
    void removeStudentFromCourse() {
        cout << "Admin is removing a student from a course.." << endl;
    }

    // simulate searching rosters
    void searchRosters() {
        cout << "Admin is searching rosters.." << endl;
    }

    // simulate printing rosters and courses
    void printRostersAndCourses() {
        cout << "Admin is printing rosters and courses.." << endl;
    }
};

// main function to handle the menus
int main() {
    int user_choice, action_choice;

    while (true) {
        // prompt for selecting user type
        cout << "\n1. Student\n2. Instructor\n3. Admin\n4. Exit\nSelect user type: ";
        cin >> user_choice;

        // error handling for invalid input
        if (cin.fail() || user_choice < 1 || user_choice > 4) {
            cout << "Invalid choice. Please try again.\n";
            cin.clear(); // clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore incorrect input until the next newline
            continue;
        }

        // check if the user chooses to exit the program
        if (user_choice == 4) break;

        // process user choice using a switch statement
        switch (user_choice) {
        case 1: {
            // create a student object
            Student student("Carson", "Mershon", "W00412473");

            do {
                cout << "\n1. Search Courses\n2. Add Course\n3. Drop Course\n4. Print Schedule\n5. Back\nSelect action: ";
                cin >> action_choice;

                // handle input errors
                if (cin.fail() || action_choice < 1 || action_choice > 5) {
                    cout << "Invalid choice. Please try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                switch (action_choice) {
                case 1: student.searchCourses(); break;
                case 2: student.addCourse(); break;
                case 3: student.dropCourse(); break;
                case 4: student.printSchedule(); break;
                case 5: break; 
                default: cout << "Invalid choice. Please try again.\n";
                }
            } while (action_choice != 5); 
            break;
        }
        case 2: {
            // create an instructor object
            Instructor instructor("Douglas", "Dow", "W0000001");

            do {
                cout << "\n1. Print Schedule\n2. Print Class List\n3. Search Courses\n4. Back\nSelect action: ";
                cin >> action_choice;

                // handle input errors
                if (cin.fail() || action_choice < 1 || action_choice > 4) {
                    cout << "Invalid choice. Please try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                switch (action_choice) {
                case 1: instructor.printSchedule(); break;
                case 2: instructor.printClassList(); break;
                case 3: instructor.searchCourses(); break;
                case 4: break;
                default: cout << "Invalid choice. Please try again.\n";
                }
            } while (action_choice != 4);
            break;
        }
        case 3: {
            // create an admin object
            Admin admin("Admin", "User", "W11111111");

            do {
                cout << "\n1. Add Course\n2. Remove Course\n3. Add User\n4. Remove User\n5. Add Student to Course\n6. Remove Student from Course\n7. Search Rosters\n8. Print Rosters and Courses\n9. Back\nSelect action: ";
                cin >> action_choice;

                // handle input errors
                if (cin.fail() or action_choice < 1 or action_choice > 9) {
                    cout << "Invalid choice. Please try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                switch (action_choice) {
                case 1: admin.addCourse(); break;
                case 2: admin.removeCourse(); break;
                case 3: admin.addUser(); break;
                case 4: admin.removeUser(); break;
                case 5: admin.addStudentToCourse(); break;
                case 6: admin.removeStudentFromCourse(); break;
                case 7: admin.searchRosters(); break;
                case 8: admin.printRostersAndCourses(); break;
                case 9: break;
                default: cout << "Invalid choice. Please try again.\n";
                }
            } while (action_choice != 9);
            break;
        }
        }
    }
    return 0; // end of program
}


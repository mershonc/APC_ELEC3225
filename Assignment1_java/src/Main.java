import java.util.Scanner;

// base class representing a user
class User {
    protected String firstName;
    protected String lastName;
    protected String ID;

    // constructor to initialize user details
    public User(String firstName, String lastName, String ID) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.ID = ID;
    }

    // set user's first name
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    // set user's last name
    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    // set user ID
    public void setID(String ID) {
        this.ID = ID;
    }

    // print user's full info
    public void printInfo() {
        System.out.println("First Name: " + firstName + ", Last Name: " + lastName + ", ID: " + ID);
    }
}

// derived class for students
class Student extends User {
    public Student(String firstName, String lastName, String ID) {
        super(firstName, lastName, ID);
    }

    // simulates course search
    public void searchCourses() {
        System.out.println("Student is searching for courses..");
    }

    // simulates adding a course
    public void addCourse() {
        System.out.println("Student is adding a course..");
    }

    // simulates dropping a course
    public void dropCourse() {
        System.out.println("Student is dropping a course..");
    }

    // simulates printing a schedule
    public void printSchedule() {
        System.out.println("Student is printing their schedule..");
    }
}

// derived class for instructors
class Instructor extends User {
    public Instructor(String firstName, String lastName, String ID) {
        super(firstName, lastName, ID);
    }

    // simulates printing a schedule
    public void printSchedule() {
        System.out.println("Instructor is printing their schedule..");
    }

    // simulates printing class list
    public void printClassList() {
        System.out.println("Instructor is printing their class list..");
    }

    // simulates course search
    public void searchCourses() {
        System.out.println("Instructor is searching for courses..");
    }
}

// derived class for 1 admin
class Admin extends User {
    public Admin(String firstName, String lastName, String ID) {
        super(firstName, lastName, ID);
    }

    // simulate adding a course
    public void addCourse() {
        System.out.println("Admin is adding a course to the system..");
    }

    // simulates removing a course
    public void removeCourse() {
        System.out.println("Admin is removing a course from the system..");
    }

    // simulates adding a user
    public void addUser() {
        System.out.println("Admin is adding a user..");
    }

    // simulates removing a user
    public void removeUser() {
        System.out.println("Admin is removing a user..");
    }

    // simulates adding a student to a course
    public void addStudentToCourse() {
        System.out.println("Admin is adding a student to a course..");
    }

    // simulates removing a student from a course
    public void removeStudentFromCourse() {
        System.out.println("Admin is removing a student from a course..");
    }

    // simulates searching rosters
    public void searchRosters() {
        System.out.println("Admin is searching rosters..");
    }

    // simulates printing rosters and courses
    public void printRostersAndCourses() {
        System.out.println("Admin is printing rosters and courses..");
    }
}

// main class to handle the user interface
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int userChoice, actionChoice;

        while (true) {
            System.out.println("\n1. Student\n2. Instructor\n3. Admin\n4. Exit\nSelect user type: ");
            userChoice = scanner.nextInt();

            if (userChoice == 4) break;

            switch (userChoice) {
                case 1: {
                    Student student = new Student("Carson", "Mershon", "W00412473");
                    do {
                        System.out.println("\n1. Search Courses\n2. Add Course\n3. Drop Course\n4. Print Schedule\n5. Back\nSelect action: ");
                        actionChoice = scanner.nextInt();
                        switch (actionChoice) {
                            case 1: student.searchCourses(); break;
                            case 2: student.addCourse(); break;
                            case 3: student.dropCourse(); break;
                            case 4: student.printSchedule(); break;
                            case 5: break;
                            default: System.out.println("Invalid choice. Please try again.");
                        }
                    } while (actionChoice != 5);
                    break;
                }
                case 2: {
                    Instructor instructor = new Instructor("Douglas", "Dow", "W0000001");
                    do {
                        System.out.println("\n1. Print Schedule\n2. Print Class List\n3. Search Courses\n4. Back\nSelect action: ");
                        actionChoice = scanner.nextInt();
                        switch (actionChoice) {
                            case 1: instructor.printSchedule(); break;
                            case 2: instructor.printClassList(); break;
                            case 3: instructor.searchCourses(); break;
                            case 4: break;
                            default: System.out.println("Invalid choice. Please try again.");
                        }
                    } while (actionChoice != 4);
                    break;
                }
                case 3: {
                    Admin admin = new Admin("Admin", "User", "W11111111");
                    do {
                        System.out.println("\n1. Add Course\n2. Remove Course\n3. Add User\n4. Remove User\n5. Add Student to Course\n6. Remove Student from Course\n7. Search Rosters\n8. Print Rosters and Courses\n9. Back\nSelect action: ");
                        actionChoice = scanner.nextInt();
                        switch (actionChoice) {
                            case 1: admin.addCourse(); break;
                            case 2: admin.removeCourse(); break;
                            case 3: admin.addUser(); break;
                            case 4: admin.removeUser(); break;
                            case 5: admin.addStudentToCourse(); break;
                            case 6: admin.removeStudentFromCourse(); break;
                            case 7: admin.searchRosters(); break;
                            case 8: admin.printRostersAndCourses(); break;
                            case 9: break;
                            default: System.out.println("Invalid choice. Please try again.");
                        }
                    } while (actionChoice != 9);
                    break;
                }
            }
        }
        scanner.close();
    }
}

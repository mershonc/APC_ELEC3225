# I've defined the base class User
class User:
    # initializes User with first name, last name, and ID
    def __init__(self, first_name, last_name, ID):
        self.first_name = first_name
        self.last_name = last_name
        self.ID = ID

    # created setters for each attribute
    def set_first_name(self, first_name):
        self.first_name = first_name

    def set_last_name(self, last_name):
        self.last_name = last_name

    def set_ID(self, ID):
        self.ID = ID

    # created methods to print all info for the object
    def print_info(self):
        print(f'First Name: {self.first_name}, Last Name: {self.last_name}, ID: {self.ID}')


# defines the derived class Student
class Student(User):
    # these are the methods for student actions
    def search_courses(self):
        print("Student is searching for courses..")

    def add_course(self):
        print("Student is adding a course..")

    def drop_course(self):
        print("Student is dropping a course..")

    def print_schedule(self):
        print("Student is printing their schedule..")


# defines the derived class Instructor
class Instructor(User):
    # these are the methods for instructor actions
    def print_schedule(self):
        print("Instructor is printing their schedule..")

    def print_class_list(self):
        print("Instructor is printing their class list..")

    def search_courses(self):
        print("Instructor is searching for courses..")


# defines the derived class Admin
class Admin(User):
    # these are the methods for admin actions
    def add_course(self):
        print("Admin is adding a course to the system..")

    def remove_course(self):
        print("Admin is removing a course from the system..")

    def add_user(self):
        print("Admin is adding a user..")

    def remove_user(self):
        print("Admin is removing a user..")

    def add_student_to_course(self):
        print("Admin is adding a student to a course..")

    def remove_student_from_course(self):
        print("Admin is removing a student from a course..")

    def search_rosters(self):
        print("Admin is searching rosters..")

    def print_rosters_and_courses(self):
        print("Admin is printing rosters and courses..")


# this is the main function for the menu
def main():
    # infinite loop for the menu
    while True:
        # displays the menu
        print("\n1. Student\n2. Instructor\n3. Admin\n4. Exit")
        # gets the user's choice
        try:
            user_choice = int(input("Select user type: "))
        except ValueError:
            print("Invalid choice. Please try again.")
            continue

        # handles the user's choice
        if user_choice == 1:
            # creates a student object
            student = Student("Carson", "Mershon", "W00412473")
            # here is the sub-menu for student actions
            while True:
                print("\n1. Search Courses\n2. Add Course\n3. Drop Course\n4. Print Schedule\n5. Back")
                try:
                    action_choice = int(input("Select action: "))
                except ValueError:
                    print("Invalid choice. Please try again.")
                    continue
                # handles the student's action choice
                if action_choice == 1:
                    student.search_courses()
                elif action_choice == 2:
                    student.add_course()
                elif action_choice == 3:
                    student.drop_course()
                elif action_choice == 4:
                    student.print_schedule()
                elif action_choice == 5:
                    break
                else:
                    print("Invalid choice. Please try again.")

        elif user_choice == 2:
            # creates an instructor object
            instructor = Instructor("Douglas", "Dow", "W0000001")
            # here is the sub-menu for instructor actions
            while True:
                print("\n1. Print Schedule\n2. Print Class List\n3. Search Courses\n4. Back")
                try:
                    action_choice = int(input("Select action: "))
                except ValueError:
                    print("Invalid choice. Please try again.")
                    continue
                # handles the instructor's action choice
                if action_choice == 1:
                    instructor.print_schedule()
                elif action_choice == 2:
                    instructor.print_class_list()
                elif action_choice == 3:
                    instructor.search_courses()
                elif action_choice == 4:
                    break
                else:
                    print("Invalid choice. Please try again.")

        elif user_choice == 3:
            # creates an admin object
            admin = Admin("Admin", "User", "W11111111")
            # here is the sub-menu for admin actions
            while True:
                print("\n1. Add Course\n2. Remove Course\n3. Add User\n4. Remove User\n5. Add Student to Course\n6. Remove Student from Course\n7. Search Rosters\n8. Print Rosters and Courses\n9. Back")
                try:
                    action_choice = int(input("Select action: "))
                except ValueError:
                    print("Invalid choice. Please try again.")
                    continue
                # handles the admin's action choice
                if action_choice == 1:
                    admin.add_course()
                elif action_choice == 2:
                    admin.remove_course()
                elif action_choice == 3:
                    admin.add_user()
                elif action_choice == 4:
                    admin.remove_user()
                elif action_choice == 5:
                    admin.add_student_to_course()
                elif action_choice == 6:
                    admin.remove_student_from_course()
                elif action_choice == 7:
                    admin.search_rosters()
                elif action_choice == 8:
                    admin.print_rosters_and_courses()
                elif action_choice == 9:
                    break
                else:
                    print("Invalid choice. Please try again.")

        elif user_choice == 4:
            # exits the program
            break

        else:
            # handler for invalid choices
            print("Invalid choice. Please try again.")


# calls the main function
if __name__ == "__main__":
    main()
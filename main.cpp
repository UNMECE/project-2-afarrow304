//Some functionality specified
//10 students 5 for art 5 for physics
//Assign various values for the variables
#include "artStudent.h"
#include "physStudent.h"
#include "Student.h"
#include <vector>
#include <fstream>
int main()
{
//5 students type art student
	 std::vector<Art_Student *> art_students;
	 std::vector<Physics_student *> physics_students;

	 art_students.push_back(new Art_Student);
	 art_students[0]->setName("some","name");
	 art_students[0]->setGPA(3.9);
   art_students[0]->setGraduationDetails(2025, "Spring");
	 art_students[0]->setEnrollmentDetails(2021, "Fall");
	 art_students[0]->setDegreeType("Undergrad");
	 art_students[0]->setEmphasis("Art Studio");
	 
	 art_students.push_back(new Art_Student);
	 art_students[1]->setName("Kevin","Bacon");
	 art_students[1]->setGPA(3.9);
	 art_students[1]->setGraduationDetails(2026, "Fall");
	 art_students[1]->setEnrollmentDetails(2022, "Spring");
	 art_students[1]->setDegreeType("Graduate");
	 art_students[1]->setEmphasis("Art Education");

	 art_students.push_back(new Art_Student);
	 art_students[2]->setName("Tom","Turtle");
	 art_students[2]->setGPA(4.0);
	 art_students[2]->setGraduationDetails(2020, "Spring");
	 art_students[2]->setEnrollmentDetails(2015, "Summer");
	 art_students[2]->setDegreeType("Graduate");
	 art_students[2]->setEmphasis("Art Studio");

	 art_students.push_back(new Art_Student);
	 art_students[3]->setName("Harry","Potter");
	 art_students[3]->setGPA(2.5);
	 art_students[3]->setGraduationDetails(2017, "Fall");
	 art_students[3]->setEnrollmentDetails(2010, "Spring");
	 art_students[3]->setDegreeType("Graduate");
	 art_students[3]->setEmphasis("Art History");

	 art_students.push_back(new Art_Student);
	 art_students[4]->setName("Susan","Merphy");
	 art_students[4]->setGPA(3.8);
	 art_students[4]->setGraduationDetails(1999, "Spring");
	 art_students[4]->setEnrollmentDetails(1981, "Fall");
	 art_students[4]->setDegreeType("Undergrad");
	 art_students[4]->setEmphasis("Art Studio");

//5 students type phys student

	physics_students.push_back(new Physics_student);
	physics_students[0]->setName("Candy","Cane");
	physics_students[0]->setGPA(2.1);
	physics_students[0]->setGraduationDetails(2039, "Summer");
	physics_students[0]->setEnrollmentDetails(2021, "Fall");
	physics_students[0]->setDegreeType("Undergrad");
	physics_students[0]->setConcentration("BioPhysics");

// Allocating space and storing 4 Physics students
	for (int i = 0; i < 4; i++) {
		Physics_student *physics_student = new Physics_student();
		physics_student->setName("Physics_First" +
		std::to_string(i), "Physics_Last" + std::to_string(i));
		physics_student->setGPA(3.8 - (i * 0.1));
		physics_student->setGraduationDetails(2026, "Fall");
		physics_student->setEnrollmentDetails(2022, "Spring");
		physics_student->setDegreeType("Grad");
		physics_student->setConcentration((i % 2 == 0) ? "Biophysics"
		: "Earth and Planetary Sciences");
		physics_students.push_back(new Physics_student());
	}

 //Write the student information you made to a single file
 //by looping over the students in each vector
 	std::ofstream outfile("student_info.dat",std::ios::out);
		for(int i = 0; i < art_students.size(); i++){
			art_students[i]->printStudentInfo(outfile);
			outfile<<"\n";
		}
		for(int i=0;i<physics_students.size(); i++){
			physics_students[i]->printStudentInfo(outfile);
			outfile<<"\n";
		}
		outfile.close();

		for(auto student:art_students) delete student;
		for(auto student:physics_students)delete student;
	return 0;
}

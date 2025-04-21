//Make a base class Student and two derived classes called
//"Art_Student" and "Physics_Student".
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
class Student{

	std::string first_name;
	std::string last_name;
	double gpa;
	int gradYear;
	std::string gradSem;
	int enrolledYear;
	std::string  enrolledSem;//spring,summer,fall
	std::string gradStudent;
	public:
	//Default constructor
		Student() :
		first_name("N/A"), last_name("N/A"), gpa(0.0), gradYear(0),
		enrolledYear(0), gradSem("N/A"), enrolledSem("N/A"),
		gradStudent("N/A") {}
	// Destructor
		virtual ~Student() {}
	// Setters
	
		 void setName(const std::string &first, const std::string &last)
		 		{ first_name = first; last_name = last;}

		 void setGPA(double g) { gpa = g; }
		 
		 void setGraduationDetails(int year, const std::string &semester)
		 		{ gradYear = year; gradSem = semester;}

		 void setEnrollmentDetails(int year, const std::string &semester)
		 		{ enrolledYear = year; enrolledSem = semester; }
			
		 void setDegreeType(const std::string &type)
				{ gradStudent = type;}

	// Getter (for file writing)
			virtual void printStudentInfo(std::ostream &os) const {
				os << first_name << " " << last_name << ", GPA: " << gpa
				<< ", Enrolled: " << enrolledSem << " " << enrolledYear
				<< ", Graduation: " << gradSem<<" " 
				<< gradYear<< ", degree type: "<<gradStudent; }
};
#endif 

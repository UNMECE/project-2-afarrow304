//("Art Studio", "Art History", and "Art Education".
//Implement a default constructor that initializes
//variables to default values that make sense
//Implement a destructor that deletes any thing allocated
//Make appropriate Getter and Setter functions
#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H

#include "Student.h"

class Art_Student : public Student {
private:
    std::string artEmphasis;

		public:
	// Default constructor
			Art_Student() : artEmphasis("Art Studio"){}
	//virtual destructor
	~Art_Student(){}
	// Setter for emphasis
			void setEmphasis(const std::string& emphasis){
				artEmphasis = emphasis;
			} 
	// Override print method
			void printStudentInfo(std::ostream& os) const override{
				Student::printStudentInfo(os);
				os<<", Art Emphasis: "<< artEmphasis<<std::endl;
			};
};
#endif 

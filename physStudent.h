#ifndef PHYSSTUDENT_H
#define PHYSSTUDENT_H
#include "Student.h"

//"Biophysics" and "Earth and Planetary Sciences"
//Implement a default constructor that initializes
//variables to default values that make sense
//Implement a destructor that deletes any thing allocated
//Make appropriate Getter and Setter functions
class Physics_student :public Student{
	private:
    std::string concentration;

	public:
		//Default constructor
			Physics_student():concentration("Biophysics"){}
    //virtual destructor
			~Physics_student() override{}
 		// Setter for concentration
			void setConcentration(const std::string &conc){
				concentration= conc;
			}

	//Override print method
		void printStudentInfo(std::ostream &os) const override{
			Student::printStudentInfo(os);
			os<<", Physics Concentration: "<< concentration<<std::endl;
		}
};
#endif 


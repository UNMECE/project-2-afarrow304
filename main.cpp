//Some functionality specified
//10 students 5 for art 5 for physics
//Create 5 objects of type "Art_Student" 
//and store them in a std::vector - Use pointers and allocate space
//Create 5 objects of type "Physics Student"
//and store them in a different std::vector
//- Use pointers and allocate space
//Assign various values for the variables
int main()
{
	 std::vector<Art_Student *> art_students;
	 art_students.push_back(new Art_Student);
	 art_students[0]->setName("some","name");
	 art_students[0]->setGPA("3.9");
 //Write the student information you made to a single file
 //by looping over the students in each vector
	outfile = open("student_info.dat",std::ios::write);
	for(int i = 0; i < art_students.size(); i++){

	}
	return 0;
}

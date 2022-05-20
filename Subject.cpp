#include "Subject.h"
#include <cstring>

Subject::Subject()
{
	subjectID = 0;
	strcpy(subjectName, "");
	strcpy(subjectDescription, "");
}

Subject::Subject(int psubjectID, const char psubjectName[], const char psubjectDescription[], int cos1, int cos2, int exm1, int exm2)
{
	subjectID = psubjectID;
	strcpy(subjectName, psubjectName);
	strcpy(subjectDescription, psubjectDescription);
	course[0] = new Course(cos1);
	course[1] = new Course(cos2);
	exam[0] = new Exam(exm1);
	exam[1] = new Exam(exm2);
}

void Subject::displayCourse()
{
	for (int i=0; i<SIZE; i++)
	{
		course[i]->CourseDetails();
	}	
}

void Subject::displayExam()
{
	for (int i=0; i<SIZE; i++)
	{
		exam[i]->displayExamDetails();
	}
}

void Subject::subjectDetails()
{
	
}

void Subject::displaySubjectDetails()
{
	
}

Subject::~Subject()  //Destructor
{
	//cout<< "Subject Delete" <<endl;
	for (int i=0; i<SIZE; i++)
	{
		delete course[i];
	}
	
	for (int i=0; i<SIZE; i++)
	{
		delete exam[i];
	}	
}





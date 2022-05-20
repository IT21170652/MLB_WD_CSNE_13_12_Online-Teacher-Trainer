#include "Exam.h"
#include <cstring>

Exam::Exam()
{
	examID = 0;
	strcpy(examName, "");
	strcpy(examDate, "");
	strcpy(examType, "");
}

Exam::Exam(int pexamID, const char pexamName[], const char pexamDate[10], const char pexamType[], Instructor *i, Learner *plern)
{
	examID = pexamID;
	strcpy(examName, pexamName);
	strcpy(examDate, pexamDate);
	strcpy(examType, pexamType);
	inst = i;
	lern = plern;
	lern->addExam();
}

void Exam::examInstructor()
{
	cout<< "Exam ID : " <<examID <<endl;
	cout<< "Exam Name : " <<examName <<endl;
	inst-> displayInstructor();
	cout<< "*******************************"<<endl;
}

void Exam::displayExamDetails()
{
	cout<< "Exam ID : " <<examID <<endl;
	cout<< "Exam Name : " <<examName <<endl;
	cout<< "Exam Date : " <<examDate <<endl;
	cout<< "Exam Type : " <<examType <<endl;
	cout<< "*******************************"<<endl;
}

Exam::~Exam()  //Destructor
{
	//cout<< "Destructor called" <<endl;
}








IT21170652

#include "Course.h"
#include <cstring>

Course::Course()
{
	courseID = 0; 
	strcpy(courseName, "");
	strcpy(courseDuration, "");
	coursePrice = 0.00;
	noOfLearners =0;
}

Course::Course(int pcourseID, const char pcourseName[], const char pcourseDuration[], double pcoursePrice, int pnoOfLearners, int no1, int no2)
{
	courseID = pcourseID; 
	strcpy(courseName, pcourseName);
	strcpy(courseDuration, pcourseDuration);
	coursePrice = pcoursePrice;
	noOfLearners = pnoOfLearners;
	pay[0] = new Payment(no1);
	pay[1] = new Payment(no2);
}

void Course::addLearners(Learner *lern)
{
	if (noOfLearners < SIZE)
	{
		ler[noOfLearners] = lern;
		noOfLearners++;
	}
}

void Course::displayPayment()
{
	for (int i=0; i<SIZE, i++)
	{
		pay[i]->displayPaymentDetails();
	}
}

void Course::addInstructor(Instructor *ins1, Instructor *ins2, Instructor *ins3)
{
	ins[0] = ins1;
	ins[1] = ins2;
	ins[2] = ins3;	
}

void Course::CourseDetails()
{
	cout<<"Course ID : "<<courseID<<endl;
	cout<<"Course Name : "<<courseName<<endl;
	cout<<"Course Duration : "<<courseDuration<<endl;
	cout<<"Course Price : "<<coursePrice<<endl;
	cout<<"***********************************"<<endl;
	
}

void Course::displayCourse()
{
	for (int i=0; i<SIZE, i++)
	{
		ins[i]->displayInstructor();
	}
	
	for (int i=0; i<noOfLearners, i++)
	{
		ler[i]->displayDetails();
	}
}

void Course::updateCourseDetails()
{
	
}

Course::~Course() //Destructor
{
	//cout<< "Course Delete" <<endl;
	for (int i=0; i<SIZE, i++)
	{
		delete pay[i];
	}
}








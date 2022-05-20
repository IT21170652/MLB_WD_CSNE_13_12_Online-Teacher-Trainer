#include "Learner.h"
#include "GuestUser.h"
#include "Instructor.h"
#include "Course.h"
#include "Exam.h"
#include "Payment.h"
#include "Subject.h"

#include <iostream>
using namespace std;

int main()
{
//---- Object creation ------

	Instructor *instruct = new Instructor();  // Dynamic Object - Instructor class
	Course *course = new Course();            // Dynamic Object - Course class
	GuestUser *lerner = new Learner();		 // Dynamic Object - Learner class
	Exam *exam = new Exam();                 // Dynamic Object - Exam class
	Payment *paym = new Payment();           // Dynamic Object - Payment class
	Subject *subj = new Subject();           // Dynamic Object - Subject class
	
//----Method Calling------

	instruct->login();
	instruct->displayInstructor();
	
	course->updateCourseDetails();
	course->CourseDetails();
	
	lerner->searchCources();
	lerner->displayDetails();
	
	exam->displayExamDetails();
	exam->examInstructor();
	
	subj->displaySubjectDetails();
	
	paym->checkPayment();
	paym->confirmPayment();
	paym->displayPaymentDetails();
	

//----Delete Dynamic objects------
	
	delete course;
	delete instruct;
	delete exam;
	delete lerner;
	delete exam;
	delete subj;
	delete paym;
	
	
	return 0;
}

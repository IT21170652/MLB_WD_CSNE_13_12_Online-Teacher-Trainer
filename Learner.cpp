#include "Learner.h"
#include <cstring>

Learner::Learner()
{
	strcpy(lerUsername, "");
	strcpy(lerPassword, "");
	noOfExams =0;
}

Learner::Lerner(const char plerUsername[], const char plerPassword[], int pID, const char pName[], const char pAddress[], const char pEmail[], int pPhoneNo, int pnoOfExams, Learner *plearn) : GuestUser(pID, pName[], pAddress[], pEmail[], pPhoneNo)
{
	strcpy(lerUsername, plerUsername);
	strcpy(lerPassword, plerPassword);
	noOfExams = pnoOfExams;
	learn = plearn;
	learn->addLearners();
}

void Lerner::addExam(Exam *e)
{
	if (noOfExams < SIZE)
	{
		exam[noOfExams] = e;
		noOfExams++;
	}
}

void Learner::displayDetails()
{
	
}

void Learner::login()
{
	
}

void Learner::logout()
{
	
}

void Learner::checkLoginDetails()
{
	//return 0;
}

Learner::~Learner()  //Destructor
{
	//cout<< "Lerner Delete" <<endl;
}

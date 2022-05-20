#include "Instructor.h"
#include <cstring>

Instructor::Instructor()
{
	insID = 0;
	strcpy(insName, "");
	strcpy(insEmail, "");
	strcpy(insSubject, "");
	strcpy(insUsername, "");
	strcpy(insPassword, "");
}

Instructor::Instructor(int pinsID, const char pinsName[], const char pinsEmail[], const char pinsSubject[], const char pinsUsername[], const char pinsPassword[])
{
	insID = pinsID;
	strcpy(insName, pinsName);
	strcpy(insEmail, pinsEmail);
	strcpy(insSubject, pinsSubject);
	strcpy(insUsername, pinsUsername);
	strcpy(insPassword, pinsPassword);	
}

void Instructor::displayInstructor()
{
	cout<< "Instructor ID : " <<insID <<endl;
	cout<< "Instructor Name : " <<insName <<endl;
	cout<< "Instructor Email : " <<insEmail <<endl;
	cout<< "Instructor Subject : " <<insSubject <<endl;
	cout<< "*******************************"<<endl;
}

void Instructor::login()
{
	
}

void Instructor::teach()
{
	
}

Instructor::~Instructor()  //Destructor
{
	//cout<< "Instructor delete" <<endl;	
}













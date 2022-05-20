#include "GuestUser.h"
#include <cstring>

GuestUser::GuestUser()
{
	userID = 0;
	strcpy(userName, "");
	strcpy(userAddress, "");
	strcpy(userEmail, "");
	userPhoneNo = 0000000000;
}
	
GuestUser::GuestUser(int pID, const char pName[], const char pAddress[], const char pEmail[], int pPhoneNo)
{
	userID = pID;
	strcpy(userName, pName);
	strcpy(userAddress, pAddress);
	strcpy(userEmail, pEmail);
	userPhoneNo = pPhoneNo;
}

void GuestUser::searchCources(Course *c)
{
	
}

void GuestUser::learner()
{
	
}

void GuestUser::displayDetails()
{
	cout<<"User ID : "<<userID<<endl;
	cout<<"User Name : "<<userName<<endl;
	cout<<"User Address : "<<userAddress<<endl;
	cout<<"User Email : "<<userEmail<<endl;
	cout<<"User Phone Number : "<<userPhoneNo<<endl;
	cout<<"***********************************"<<endl;
	
}

GuestUser::~GuestUser()  //Destructor
{
	//cout<< "Destructor called" <<endl;
}

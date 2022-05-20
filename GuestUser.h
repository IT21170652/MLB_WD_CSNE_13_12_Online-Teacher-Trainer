#include "Course.h"

class GuestUser
{
	protected:
		int userID;
		char userName[25];
		char userAddress[25];
		char userEmail[25];
		int userPhoneNo;
		
	public:
		GuestUser();
		GuestUser(int pID, const char pName[], const char pAddress[], const char pEmail[], int pPhoneNo);
		void learner();
		void searchCources(Course *cou);
		virtual void displayDetails();
		~GuestUser();
};

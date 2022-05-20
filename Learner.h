#include "GuestUser.h"
#include "Exam.h"
#define SIZE 5

class Learner :public GuestUser
{
	private:
		char lerUsername[10];
		char lerPassword[10];
		int noOfExams;
		Exam *exams[SIZE];
		Learner *learn;
		
	public:
		Learner();
		Lerner(const char plerUsername[], const char plerPassword[], int pID, const char pName[], const char pAddress[], const char pEmail[], int pPhoneNo, int noOfExams, Learner *plearn);
		void addExam(Exam *e);
		void login();
		void displayDetails();
		void logout();
		void checkLoginDetails();
		~Learner();		
};

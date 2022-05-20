#include "Course.h"
#define SIZE 5;

class Subject
{
	private:
		int subjectID;
		char subjectName[10];
		char subjectDescription[100];
		Course *course[SIZE];
		Exam *exam[SIZE];
	
	public:
		Subject();
		Subject(int psubjectID, const char psubjectName[], const char psubjectDescription[], int cos1, int cos2, int exm1, int exm2);
		void displayCourse();
		void displayExam();
		void subjectDetails();
		void displaySubjectDetails();
		~Subject();
};

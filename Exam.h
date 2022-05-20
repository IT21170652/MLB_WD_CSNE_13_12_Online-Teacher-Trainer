#include "Instructor.h"
#include "Learner.h"

class Exam
{
	private:
		int examID;
		char examName[10];
		char examDate[10];
		char examType[10];
		Instructor *inst;
		Learner *lern;
		
	public:
		Exam();
		Exam(int pexamID, const char pexamName[], const char pexamDate[10], const char pexamType[], Instructor *i, Learner *plern);
		void examInstructor();
		void displayExamDetails();
		~Exam();

};

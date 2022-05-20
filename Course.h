#include "Instructor.h"
#include "Learner.h"
#define SIZE 5

class Course
{
	private:
		int courseID; 
		char courseName[10];
		char courseDuration[10];
		double coursePrice;
		Instructor *ins[SIZE];
		int noOfLearners;
		Learner *ler[SIZE];
		Payment *pay[SIZE];
		
	public:
		Course();
		Course(int pcourseID, const char pcourseName[], const char pcourseDuration[], double pcoursePrice, int noOfLearners, int no1, int no2);
		void addInstructor(Instructor *ins1, Instructor *ins2, Instructor *ins3);
		void addLearners(Learner *lern);
		void displayPayment();
		void CourseDetails();
		void updateCourseDetails();
		void displayCourse();
		~Course();

};

class Instructor
{
	private:
		int insID;
		char insName[25];
		char insEmail[25];
		char insSubject[10];
		char insUsername[10];
		char insPassword[10];
		
	public:
		Instructor();
		Instructor(int pinsID, const char pinsName[], const char pinsEmail[], const char pinsSubject[], const char pinsUsername[], const char pinsPassword[]);
		void displayInstructor();
		void login();
		void teach();
		~Instructor();
};

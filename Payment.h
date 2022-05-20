class Payment
{
	private:
		int paymentID;
		char paymentType[10];
		double paymentAmount;
		
	public:
		Payment();
		Payment(int ppaymentID, const char ppaymentType[], double ppaymentAmount);
		void checkPayment();
		void confirmPayment();
		void displayPaymentDetails();
		~Payment();
};

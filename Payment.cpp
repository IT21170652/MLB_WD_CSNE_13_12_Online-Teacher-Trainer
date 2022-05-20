#include "Payment.h"
#include <cstring>

Payment::Payment()
{
	paymentID= 0;
	strcpy(paymentType, "");
	paymentAmount = 0.00;
}

Payment::Payment(int ppaymentID, const char ppaymentType[], double ppaymentAmount)
{
	paymentID= ppaymentID;
	strcpy(paymentType, ppaymentType);
	paymentAmount = ppaymentAmount;
}

void Payment::checkPayment()
{
	
}

void Payment::confirmPayment()
{
	
}

void Payment::displayPaymentDetails()
{
	
}

Payment::~Payment()  //Destructor
{
	//cout<< "Destructor called" <<endl;
}





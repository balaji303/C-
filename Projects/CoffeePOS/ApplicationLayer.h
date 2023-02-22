#ifndef APPLICATION_LAYER
#define APPLICATION_LAYER
#define INVALID_CUSTOMER_INPUT false
#define VALID_CUSTOMER_INPUT true
void WelcomeScreen(void);
void EndScreen( uint32_t printPrice );
bool ValidateCustomerInput(uint32_t customerInput, uint32_t maxValueAccepted);
#endif
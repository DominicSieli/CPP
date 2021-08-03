#include "Debug_Log.h"

int main()
{
	LOG("Testing", 'X', 20, 3.14)
	LOG_ERROR(6.77, "You Suck!", 64)
	LOG_WARNING(20, "You Kinda Suck.", 99.99)
}
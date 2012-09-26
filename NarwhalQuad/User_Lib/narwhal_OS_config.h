#include <CoOS.h>

#define AUTO_RESET 1
#define MANUAL_RESET 0

#define READY_STATE 1
#define NONREADY_STATE 0


#define INIT_STACK_SIZE   248
#define INIT_PRIORITY	    12
extern OS_STK *narwhalInitStack;

#define CONTROL_STACK_SIZE   256
#define CONTROL_PRIORITY	    5
extern OS_STK *narwhalControlStack;


#define INS_STACK_SIZE   1024
#define INS_PRIORITY	    6
extern OS_STK *narwhalINSStack;

extern OS_STK *LEDSignalStack;




/****************************************************************/
/*****************OS Flags***************************************/


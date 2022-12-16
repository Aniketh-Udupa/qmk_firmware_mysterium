#include "macropad.h"



#ifdef OLED_ENABLE

bool oled_task_user(){
    oled_set_cursor(0,1);
    
    oled_write("Hello there!", false);
    return false;
}
#endif


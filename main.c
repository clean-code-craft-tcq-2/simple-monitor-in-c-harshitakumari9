#include "check_limits.h"

int main() 
{
  int (*fnPtrForCheckBatteryStatus)(float,float,float) = Battery_Range_Check;
  
  test_battery_status(1, 36, 63, 0.5, fnPtrForCheckBatteryStatus);
  test_battery_status(1, 18, 45, 0.1, fnPtrForCheckBatteryStatus);
  
  test_battery_status(0, 54, 79, 0.3, fnPtrForCheckBatteryStatus);
  test_battery_status(0, 27, 20, 0.6, fnPtrForCheckBatteryStatus);
  test_battery_status(0, 41, 45, 0.8, fnPtrForCheckBatteryStatus);
  
  return 0;
}

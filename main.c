#include "check_limits.h"

int main() 
{
  int (*fnPtrForCheckBatteryStatus)(float,float,float) = Battery_Range_Check;
  
  test_battery_status(1, 45, 63, 0.5, fnPtrForCheckBatteryStatus);
  test_battery_status(0, 54, 90, 0.9, fnPtrForCheckBatteryStatus);
  
  return 0;
}

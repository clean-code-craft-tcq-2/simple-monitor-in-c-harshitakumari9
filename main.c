#include "check_limits.h"

int main() 
{
  test_battery_status(1, 45, 63, 0.5);
  test_battery_status(0, 54, 90, 0.9);
}

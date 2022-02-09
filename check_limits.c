#include <stdio.h>
#include <assert.h>

int Check_Temperature_Range(float temp_in_celcius)
{
  if((temp_in_celcius < Low_temp_limit) || (temp_in_celcius > High_temp_limit)) 
  {
    printf("Temperature out of range!\n");
    return 0;
  }
  else
  {
    return 1;
  }
}

int Check_SOC_Range(float soc_value)
{
  if((soc_value < soc_lower_limit) || (temp_in_celcius > soc_upper_limit)) 
  {
    printf("State of Charge out of range!\n");
    return 0;
  }
  else
  {
    return 1;
  }
}

int Charge_Rate_Limit(float chargeRate)
{
  if((chargeRate < chargeRate_lowerthreshold) || (chargeRate > chargeRate_upperthreshold)) 
  {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  else
  {
    return 1;
  }
}

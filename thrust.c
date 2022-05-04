
#include <stdio.h>

int main() {

float efficiency;
float power_e;
float power_i;

printf("Enter the power required to operate the thruster: ");
scanf("%f", &power_e);

printf("Enter the power required to ionize the propellant: ");
scanf("%f", &power_i);

efficiency = (1 - power_e / power_i) * 100;

printf("The efficiency of the ion thruster is: %.2f%%", efficiency);

return 0;
}

#include <stdio.h>

int main(void) {
   int hourlyWage;
   int weeklyHours;
   int weeklySalary;
   int overtimeHours;
   const int WEEKLY_LIMIT = 40;

   printf("Enter hourly wage: \n");
   scanf("%d", &hourlyWage);

   // FIXME: Get user input value for weeklyHours
   weeklyHours = 40;


   if (weeklyHours <= WEEKLY_LIMIT) {
      weeklySalary = weeklyHours * hourlyWage;
   }
   else {
      overtimeHours = weeklyHours - WEEKLY_LIMIT;
      weeklySalary = (int)((hourlyWage * WEEKLY_LIMIT) +
                           (hourlyWage * overtimeHours * 1.5));
   }

   printf("Weekly salary is: %d\n", weeklySalary);

   return 0;
}

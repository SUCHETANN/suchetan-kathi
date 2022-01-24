/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int main ()
{
  time_t s, val = 1;
  struct tm *current_time;

  // time in seconds
  s = time (NULL);

  // to get current time
  current_time = localtime (&s);

  // print time in minutes,
  // hours and seconds
  printf ("%02d:%02d:%02d",
	  current_time->tm_hour, current_time->tm_min, current_time->tm_sec);

  return 0;
}

/*
 ID: ajay01
 PROG: friday
 LANG: C++
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Opens input file and creates output file
  ofstream fout("friday.out");
  ifstream fin("friday.in");

  // Declare variables
  int N;
  int monthSize[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int weekDaysTotal[7] = {0};
  int dayOfTheWeek = 0;

  // Reads in the year length
  fin >> N;

  // Checks for leap years
  for (int yr = 1900; yr < 1900 + N; yr++)
  {
    if (yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
    {
      // Makes February have 29 days
      monthSize[1] = 29;
    }
    else
    {
      // Makes February have 28 days
      monthSize[1] = 28;
    }

    for(int month = 0; month < 12; month++)
    {
      for(int day = 0; day < monthSize[month]; day++ )
      {
        // Checks to see whether or not the day of the month is the 13th
        if (day == 12)
        {
          // Adds onto the amount of times the 13th is on a day
          weekDaysTotal[dayOfTheWeek]++;
        }

        if (dayOfTheWeek == 6)
        {
          // Sets the day to Monday
          dayOfTheWeek = 0;
        }
        else
        {
          // Sets to the next day
          dayOfTheWeek++;
        }
      }
    }
  }

  fout << weekDaysTotal[5] << " " << weekDaysTotal[6] << " " << weekDaysTotal[0] << " " << weekDaysTotal[1] << " " << weekDaysTotal[2] << " " << weekDaysTotal[3] << " " << weekDaysTotal[4] << endl;
  return 0;
}

/*
 ID: ajay01
 PROG: gift1
 LANG: C++
*/



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Opens input file and creates output file
    ifstream fin ("gift1.in");
    ofstream fout ("gift1.out");

    // Declare variables
    int numPeople, allMoney, numRecievers, moneyRecieved;
    string giver, reciever;

    // Reads in the size of the group
    fin >> numPeople;

    // Initializes the arrays
    string numFriends[numPeople];
    int bankAccount[numPeople];

    // Reads in all the names of the friends
    for (int i = 0; i < numPeople; i++)
    {
      fin >> numFriends[i];
      bankAccount[i] = 0;
    }

    // Reads in the giver, number of the recievers, and the
    // money that is being gifted.
    for (int i = 0; i < numPeople; i++)
    {
      fin >> giver;
      fin >> numRecievers;
      fin >> allMoney;
      for (int j = 0; j < numPeople; j++)
      {
        if (giver == numFriends[j])
        {
          if (numRecievers != 0)
          {
            // Figures out the giver's amount of end money
            bankAccount[j] -= allMoney;
            bankAccount[j] += allMoney % numRecievers;
          }
        }
      }


    for (int t = 0; t < numRecievers; t++)
    {
      // Reads the recievers in
      fin >> reciever;

      for (int k = 0; k < numPeople; k++)
      {
        if (reciever == numFriends[k])
        {
          bankAccount[k] += allMoney/numRecievers;
        }
      }
    }
    }
    // Determines the balance
    for (int i = 0; i < numPeople; i++)
    {
      fout << numFriends[i] << " " << bankAccount[i] << endl;
    }

    // Exit program
    return 0;
}

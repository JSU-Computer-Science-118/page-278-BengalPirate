// Brandon Newton J00610524 11/15/22
// Due Wednesday Nov 16, 2022
// P 278
//Program Sentinel Controlled Loop
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue, and the average number of 
//boxes sold by each volunteer

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "-1";

int main()
{
  string name;
  int numOfVolunteers;
  int numOfBoxesSold;
  int totalNumOfBoxesSold;
  double costOfOneBox;

  cout << fixed << showpoint << setprecision(2);

  cout << "Line 14: Enter each volunteer's name and "
      << "the number of boxes " << endl
      << "      sold by each volunteer, ending "
      << "with -1: " << endl;

  totalNumOfBoxesSold = 0;
  numOfVolunteers = 0;

  cin >> name;

  while (name != SENTINEL)
    {
      cin >> numOfBoxesSold;
      totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;

      numOfVolunteers++;
      cin >> name;
    }

  cout << endl;

  cout << "Line 26: Total number of boxes sold: "
      << totalNumOfBoxesSold << endl;

  cout << "Line 27: Enter the cost of one box: ";
  cin >> costOfOneBox;
  cout << endl;

  cout << "Line 30: Total money made:1.50 "
      << "cookies: $"
      << totalNumOfBoxesSold * costOfOneBox << endl;

  if (numOfVolunteers != 0)
      cout << "Line 32: Average number of "
        << "boxes sold by each person: "
        << totalNumOfBoxesSold / numOfVolunteers
        << endl;
  else
      cout << "Line 34: No input." << endl;

  return 0;
}

#include <iostream>

#include "student.h"

/*using namespace std;*/

/* C++ classes */
int main( int argc, char *argv[] )
{

  int 
    i,
    scores[5], /* Student scores */
    sum = 0;   /* Sum of student scores */
  double averageBall;
  std::string 
    name,      /* Student name */
    lastName;  /* Student lastname */
  STUDENTS student; /* Student class object */

  /* Write in name from keyboard */
  std::cout << "Name: ";
  getline(std::cin, name);
  /* Write in last name from keyboard */
  std::cout << "Last name: ";
  getline(std::cin, lastName);

  /* Save name and last name in STUDENTS class object */
  student.setName(name);
  student.setLastName(lastName);
  
  for (i = 0; i < 5; i++)
  {
    std::cout << "Score " << i + 1 << ": ";
    std::cin >> scores[i];
    /* sum scores */
    sum += scores[i];
  }

  /* Save scores in STUDENTS class object */
  student.SetStudentScores(scores);
  /* Calculate average score */
  averageBall = sum / 5.0;
  /* Save average score in STUDENTS class object */
  student.setAverageBall(averageBall);

  std::cout << "Average score for " << student.getName() << " " << student.getLastName() << " is " << student.getAverageBall() << std::endl;

  return 0;
}
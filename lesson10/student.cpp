/* STUDENT.CPP */

#include "student.h"

/* function calculated average */
void STUDENTS::calculateAverageBall()
{
  int sum = 0; /* sum all scores */
  for (int i = 0; i < 5; i++)
    sum += scores[i];
  AverageBall = sum / 5.0;
}
/* Set average score */
void STUDENTS::setAverageBall(double ball)
{
  AverageBall = ball;
}
/* Get average score */
double STUDENTS::getAverageBall()
{
  return AverageBall;
}

/* Set name */
void STUDENTS::setName(std::string InName)
{
  Name = InName;
}
/* Get name */
std::string STUDENTS::getName()
{
  return Name;
}

/* Set average score */
void STUDENTS::setLastName(std::string InLastName)
{
  LastName = InLastName;
}
/* Get average score */
std::string STUDENTS::getLastName()
{
  return LastName;
}
/* Set student scores */
void STUDENTS::SetStudentScores(int StudentScores[])
{
  for (int i = 0; i < 5; i++)
    scores[i] = StudentScores[i];
}

/* END OF 'STUDENT.CPP' FILE */

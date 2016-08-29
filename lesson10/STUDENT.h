#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>

class STUDENTS
{
public:
  /* function calculated average */
  void calculateAverageBall()
  {
    int sum = 0; /* sum all scores */
    for (int i = 0; i < 5; i++)
      sum += scores[i];
    AverageBall = sum / 5.0;
  }
  /* Set average score */
  void setAverageBall( double ball )
  {
    AverageBall = ball;
  }
  /* Get average score */
  double getAverageBall()
  {
    return AverageBall;
  }
  
  /* Set name */
  void setName( std::string InName )
  {
    Name = InName;
  }
  /* Get name */
  std::string getName()
  {
    return Name;
  }
  
  /* Set average score */
  void setLastName( std::string InLastName )
  {
    LastName = InLastName;
  }
  /* Get average score */
  std::string getLastName()
  {
    return LastName;
  }
  /* Set student scores */
  void SetStudentScores( int StudentScores[] )
  {
    for (int i = 0; i < 5; i++)
      scores[i] = StudentScores[i];
  }


private:
  /* Student name */
  std::string Name;
  /* Student surname */
  std::string LastName;
  /* 5 scores of student */
  int scores[5];
  /* Average */
  double AverageBall;
};

#endif /* __STUDENT_H_ */

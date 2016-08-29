#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>

class STUDENTS
{
public:
  /* Set student scores */
  void SetStudentScores(int StudentScores[]);

  /* function calculated average */
  void calculateAverageBall();
  /* Set average score */
  void setAverageBall(double ball);
  /* Get average score */
  double getAverageBall();

  /* Set name */
  void setName(std::string InName);
  /* Get name */
  std::string getName();
  /* Set average score */
  void setLastName(std::string InLastName);
  /* Get average score */
  std::string getLastName();

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

/* END OF 'STUDENT.H' FILE */

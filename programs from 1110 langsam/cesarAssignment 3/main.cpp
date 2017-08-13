/*
    Name: Homework 3
    Author: Cesar Melendez
    Date: 073117
    Description: In this program, we want to create functions to calculate several values of interest.
*/

#include<cstdlib>
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

float computeAverage (int, int, int); //prototype
string computeLetterGrade(float);
void printRecord(string, int, int , int , float, string, ofstream &);
float computeMax(float, float), computeMin(float, float);


int main()
{
   int test1,test2,finalTest, count=0;
   float maxGrade=0, minGrade=100, sumAverage=0, classAverage,semesterAverage;
   string name, letterGrade;

   ifstream infile;
   infile.open("StudentGrades.txt");
   ofstream outfile;
   outfile.open("Roster3.txt");

   if( !infile.is_open() ){
        cout << endl << "ERROR: Unable to open file." << endl;
        system("PAUSE");
        exit(1);
   }


   outfile << "Name           Test1   Test2  Final   Final Grade     Letter" << endl;
   infile >> name >> test1 >> test2 >> finalTest;

    while(!infile.eof()){
        semesterAverage=computeAverage(test1,test2,finalTest); //call
        letterGrade = computeLetterGrade(semesterAverage);

        sumAverage = sumAverage + semesterAverage;
        count ++;

        printRecord(name, test1, test2, finalTest, semesterAverage, letterGrade, outfile);
        maxGrade=computeMax(semesterAverage, maxGrade);
        minGrade=computeMin(semesterAverage, minGrade);

        infile >> name >> test1 >> test2 >> finalTest;
    }

    classAverage = sumAverage / count;
    outfile << classAverage << endl;

    outfile << maxGrade << endl;
    outfile << minGrade << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


// FUNCTION 1
float computeAverage (int test1, int test2, int finalTest ) //header
{
    float semesterAverage;

    semesterAverage = 0.20 * test1 + 0.30 * test2 + 0.50 * finalTest;

    return semesterAverage;
}


// FUNCTION 2
string computeLetterGrade(float semesterAverage)
{
    if( semesterAverage >= 90 )
        return "A";
    else if( semesterAverage >= 80 )
            return "B";
        else if (semesterAverage >= 70)
                return "C";
            else if (semesterAverage >= 60)
                    return "D";
                else
                    return "F";
}


// FUNCTION 3
void printRecord( string name, int test1, int test2 , int finalTest ,
                  float semesterAverage, string letterGrade, ofstream & outfile )
{
    outfile << name << "\t\t"<< test1 << "\t" << test2 << "\t"
        << finalTest << "\t" << semesterAverage << "\t\t"<< letterGrade << endl;

    return;
}


// FUNCTION 4
float computeMax (float semesterAverage, float maxGrade)
{
    if (semesterAverage > maxGrade)
        maxGrade = semesterAverage;

    return maxGrade;
}


// FUNCTION 5
float computeMin (float semesterAverage, float minGrade)
{
    if (semesterAverage < minGrade)
        minGrade = semesterAverage;

    return minGrade;
}




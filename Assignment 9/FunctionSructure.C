#include<stdio.h>
struct Student{
    int Roll;
    char name[50];
    char adress[50];
    int age;
    float averageMarks;
    };

    void readResultData(struct Student student[],int numStudents ){
        for(int i =0;i<numStudents;i++){
            printf("");
        }

    }
   int main(){
    struct  Student student[1];
    int numStudents = 1;

    readResultData(student,numStudents);

    
    
}
 
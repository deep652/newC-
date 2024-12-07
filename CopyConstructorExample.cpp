#include<string.h>
#include<cstring>
#include<iostream>

using namespace std;

class Student
{
    private:
    char *name;
    char *skillSets;
    char *dept;
    int rateing;
    public:
    Student(char *name, char *skillsets, char *dept, int rate)
    {
        cout<<"Default constrctor is called -->> "<<endl;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name,name);

        this->skillSets = new char[strlen(skillsets) + 1];
        strcpy(this->skillSets,skillsets);

        this->dept = new char[strlen(dept) + 1];
        strcpy(this->dept, dept);

        rateing = rate;
    }

    //Shallow copy
    Student(Student *s)
    {
        cout<<"Shallow copy is called -->> "<<endl;

        /**
         * 
         * what is wrong here and what you should avoid
         * 
         */
        // strcpy(this->name, s->name);
        // strcpy(this->dept, s->dept);
        // strcpy(this->skillSets, s->skillSets);
        // this->rateing = s->rateing;

        this->dept = s->dept;
        this->name = s->name;
        this->skillSets = s->skillSets;
        this->rateing = s->rateing;

    }

    // //Deep copy
    // Student(Student *s)
    // {
    //     cout<<"Deep copy is called -->> "<<endl;
    //     this->name = new char[strlen(s->name) + 1];
    //     strcpy(this->name,s->name);

    //     skillSets = new char[strlen(s->skillSets) + 1];
    //     strcpy(this->skillSets,s->skillSets);

    //     dept = new char[strlen(s->dept) + 1];
    //     strcpy(this->dept, s->dept);

    //     rateing = s->rateing;
    // }
    

};

int main()
{
    Student *s = new Student("Deep","cpp dev", "teradata rnd", 1);
    Student scopied(s);
    
    return 0;
}
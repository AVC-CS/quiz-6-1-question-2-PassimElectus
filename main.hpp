/***************************************************
 * Code your program here
 ***************************************************/
#include <iostream>
#include <fstream>
using namespace std;


void readFile(int);
void writefile(int);


void readFile(int filename)
{
    ifstream ifs;
    string id;
    string firstname;
    string deptname;
    string salary;
    int dummy;
    
    ifs.open("employee.txt");
    if(!ifs)
    {
        cout << "File Not Found" << endl;
    }
    else
    {
        ifs >> dummy;
        cout << dummy << endl;
        while (ifs >> id >> firstname >> deptname >> salary)
        {
            cout << id << firstname << deptname << salary << endl;
        }
    }


}

void writeFile (int filename)
{
    ofstream ofs;
    if (!ofs)
    {
        cout << "File Not Found" << endl;

    }
    
}
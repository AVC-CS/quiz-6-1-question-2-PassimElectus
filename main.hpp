/***************************************************
 * Code your program here
 ***************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int readFile(string);
int writefile(string);


int readFile(string filename)
{
    int count = 0;
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
    return count;

}

int writeFile (string filename)
{
    int count = 0;
    ofstream ofs;
    if (!ofs)
    {
        cout << "File Not Found" << endl;

    }
    string id;
    string firstname;
    string deptname;
    string salary;
    cout << "Please enter your id, name, Department, and Salary" << endl;
    cin >> id >> firstname >> deptname >> salary;
    ofs << id << " " << firstname << " " << deptname << " " << salary;

    ofs.close();
    return count;



}
#include <iostream>
#include "fstream"

#include "Logic5.6.h"
#include "PQueue.h"

using namespace std;


int main()
{
    PQueue<JobRequest> jobPool;
    ifstream f;
    int jobServisecUse[3] = { 0,0,0 };
    JobRequest pr;
    char ch;
    f.open("job.dat", ios::in);
    if (!f.is_open()) {
        cerr << "ERROR: file is not open!";
        exit(1);
    }
    while (f >> ch) {
        switch (ch)
        {
        case 'M': pr.staffPerson = Manager;
            break;
        case 'S': pr.staffPerson = Supervisor;
            break;
        case 'W': pr.staffPerson = Worker;
            break;
        default:
            break;
        }
        f >> pr.jobid;
        f >> pr.jobTime;
        jobPool.insert(pr);
    }
    cout << "Category Number  Time \n\n";
    while (!jobPool.empty()) {
        pr = jobPool.del();
        printJobInfo(pr);
        jobServisecUse[int(pr.staffPerson)] += pr.jobTime;
    }
    printJobSummary(jobServisecUse);
}


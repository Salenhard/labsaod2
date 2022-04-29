#pragma once
#include <iostream>
using namespace std;

enum Staff { Manager, Supervisor, Worker };

struct JobRequest {
    Staff staffPerson;
    int jobid;
    int jobTime;
};


int operator < (const JobRequest& a, const JobRequest& b) {
    return a.staffPerson < b.staffPerson;
}

void printJobInfo(JobRequest pr) {
    switch (pr.staffPerson) {
    case Manager: cout << "Manager " << pr.jobid << " " << pr.jobTime << endl;
        break;
    case Supervisor: cout << "Supervisor " << pr.jobid << " " << pr.jobTime << endl;
        break;
    case Worker: cout << "Worker " << pr.jobid << " " << pr.jobTime << endl;
    }
}

#include <iomanip>
void printJobSummary(int JobServiUse[]) {
    cout << "\nTime of servising categories\n";
    cout << "Mangager " << setw(3) << JobServiUse[0] << endl;
    cout << "Supervisor " << setw(3) << JobServiUse[1] << endl;
    cout << "Worker " << setw(3) << JobServiUse[2] << endl;
}


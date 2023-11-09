#pragma once

#include <iostream>
using namespace std;

class ModuleRecord
{
private:
	string moduleName;
	string subjectArea;
	int moduleCode;
	int credsPerSemester;
	int numOfSemesters;




public:
	ModuleRecord(string ModuleName, string SubjectArea = "COMP", int ModuleCode = 0, int CredsPerSemester = 20, int NumOfSemesters = 1) {
		moduleName = ModuleName;
		subjectArea = SubjectArea;
		moduleCode = ModuleCode;
		credsPerSemester = CredsPerSemester;
		numOfSemesters = NumOfSemesters;
	}

	string GetModuleName() {
		return moduleName;
	}

	string GetSubjectArea() {
		return subjectArea;
	}

	int GetModuleCode() {
		return moduleCode;
	}

	int GetCredsPerSemester() {
		return credsPerSemester;
	}

	int GetNumOfSemesters() {
		return numOfSemesters;
	}

	string moduleSummary() {
		cout << "Module Name : " << moduleName << endl;
		cout << "Subject Area : " << subjectArea << endl;
		cout << "Module Code : " << moduleCode << endl;
		cout << "Credits Per Semester : " << credsPerSemester << endl;
		cout << "Number Of Semesters : " << numOfSemesters << endl;
	}
};


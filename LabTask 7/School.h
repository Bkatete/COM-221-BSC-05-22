#pragma once
#include<string>
using namespace std;
class School{
    private:
    string mSchoolName;
    public:
    void SetSchoolName(string newShoolName);
    string GetSchoolName() const;
};
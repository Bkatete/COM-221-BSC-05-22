#include"School.h"
void School::SetSchoolName(string newShoolName){
    mSchoolName = newShoolName;
}
std::string School:: GetSchoolName() const{
    return mSchoolName;
}
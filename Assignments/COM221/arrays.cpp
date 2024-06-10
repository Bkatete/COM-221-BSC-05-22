#include <iostream>
#include <string>
#include "../../../../mingw64/include/c++/13.2.0/bits/codecvt.h"

int main()
 {
    
    std::string array[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (int i = 0; i < 8; i++)
     {
    
        if (array[i][0] == 'B')
         {
            std::cout << array[i] << std::endl;
        }

        }
    

    return 0;
}
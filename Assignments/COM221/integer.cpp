#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int daysUntilExpiration = rand() % 12; 

    cout << "Random number of days until expiration: " << daysUntilExpiration << endl;

    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired. Please renew it." << endl;
    } else {
        cout << "Your subscription is still active for " << daysUntilExpiration << " days." << endl;
    }

    return 0;
}

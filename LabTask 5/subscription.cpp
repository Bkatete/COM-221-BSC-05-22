#include<iostream>
#include<random>
using namespace std;

int main(){
     random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distr(0, 11);
    int daysUntilExpiration = distr(gen);

    cout<<"Days until expiration: "<<daysUntilExpiration<<endl;

    if(daysUntilExpiration == 0){
        cout<<"your subscription has expired ";
    }
    else if( daysUntilExpiration <= 1){
        cout<<"your subscription expires within a day \n";
        cout <<"renew now and save 20%";
    }
    else if(daysUntilExpiration <= 5){
        cout<<"your subscription expires in "<<daysUntilExpiration <<" days"<<endl;
        cout<<"renew now and save 10% \n";

    }
    else if( daysUntilExpiration<= 10){
        cout<<"your subscription will expire soon. Renew now! \n";
    }
    else{
        cout<<"you have an active subscription \n";
    }
    return 0;
}

    
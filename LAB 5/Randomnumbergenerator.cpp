#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand (static_cast<unsigned int >(time(0)));
    int daysuntilExpiration = rand () % 12;
    cout <<"daysuntilExpiration:"<< daysuntilExpiration << endl;
    if (daysuntilExpiration <=10){
        cout << "your subscription will expire soon.Renew now!" << endl;
        }
        else if (daysuntilExpiration <=5){
            cout <<"your subscription expires in" << daysuntilExpiration<< " days.Renew now and save 10%!" << endl;
            }
            else if (daysuntilExpiration==1){
                cout<< "your subscription expires within a day! Renew now and save 20%!"<<endl;
                }
                else if (daysuntilExpiration==0){
                        cout << " your subscription has expired!"<<endl;
                        }
                    else {
                        cout << " you have an active subscription!"<<endl;
                    }
    return 0;
}


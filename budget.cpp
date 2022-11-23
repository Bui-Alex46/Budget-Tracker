#include <iostream>
using namespace std;
class budget{
    public:
    void setCredit(double c){
        cout << "Credit card: ";
        cin >> c;
        credit = c; 
    }
    void setRent(double r){
        cout << "Rent: ";
        cin >> r;
        rent = r;
    }
    void setUtilities(double u){
        cout << "Utility bill: ";
        cin >> u;
        utility = u;
    }
    void setElectricity(double e){
     
        cout << "Electricity bill: ";
        cin >> e;
        electric = e;
    }
    void setBankAccount(double b){
        cout << "Current bank amount: ";
        cin >> b;
        bank = b;
    }
    void setInternet(double i){
        cout << "Internet: ";
        cin >> i;
        internet = i;
    }
    double getBank(){
        return bank;
    }
    double getCredit(){
        return credit;
    }
    double getElectric(){
        return electric;
    }
    double getUtility(){
        return utility;
    }
    double getRent(){
        return rent;
    }
    double getInternet(){
        return internet;
    }

    void calculations(){
        double  monthlyPayment = 0;
        monthlyPayment = getUtility() + getElectric() + (getRent()/2) + getCredit() + getInternet();
        
        bank -= monthlyPayment;
        cout <<"Bank Account: $" << bank << endl;
    }
    void summary(){
        double total = getUtility() + getElectric() + (getRent()/2) + getCredit() + getInternet();
        cout << endl << "Your total cost for this month is:"<< endl ;
        cout << "------------------------------" << endl;
        
        cout << "Utility: $" << getUtility() << endl << 
         "Electricity: $" << getElectric() << endl <<
        "Rent split in half: $" << getRent()/2 << endl << "Credit: $" << getCredit() <<  endl 
        << "Internet: $" << getInternet() << endl;

        cout << "------------------------------" << endl;
        cout << "Total Amount: -$" << total << endl;

    }
    private:
        double bank;
        double electric;   
        double utility;
        double rent;
        double credit;
        double internet;
};


int main(){
    budget Alex;
    double bank, utility, electric, rent, credit, total, internet;
    Alex.setBankAccount(bank);
    Alex.setUtilities(utility);
    Alex.setElectricity(electric);
    Alex.setRent(rent);
    Alex.setCredit(credit);
    Alex.setInternet(internet);
    Alex.summary();
    Alex.calculations();
    
   
    
}
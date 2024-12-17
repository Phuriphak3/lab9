#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double initialLoan, interestRate, paymentPerYear;
    double prevBalance, interest, total, payment, newBalance;
    int year = 1;

    cout << "Enter initial loan: ";
    cin >> initialLoan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> paymentPerYear;

    
    cout << setw(13) << left << "EndOfYear#"
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance" << "\n";

    
    cout << fixed << setprecision(2);

    
    prevBalance = initialLoan;

    while (prevBalance > 0) {
       
        interest = (prevBalance * interestRate) / 100.0;
        total = prevBalance + interest;
        if (total < paymentPerYear) {
            payment = total;
        } else {
            payment = paymentPerYear;
        }

        newBalance = total - payment;

        cout << setw(13) << left << year
             << setw(13) << left << prevBalance
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance << "\n";

        prevBalance = newBalance;
        year++;
    }

    return 0;
}

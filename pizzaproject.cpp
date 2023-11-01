// Pizza Project 
// Logan Phillips
// CS130
// 3-28-22

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {


    // Variables
    const string BORDER = "========";
    string nameOfPizza1;
    string nameOfPizza2;
    string nameOfPizza3;
    double diamOfPizza1;
    double diamOfPizza2;
    double diamOfPizza3;
    double costOfPizza1;
    double costOfPizza2;
    double costOfPizza3;
    const double PI {3.14159};
    double pizzaArea1;
    double pizzaRadius1;
    double pizzaArea2;
    double pizzaRadius2;
    double pizzaArea3;
    double pizzaRadius3;
    float $in1;
    float $in2;
    float $in3;

    // Ask the user for the name, diameter, and price for the first pizza

    cout << "Name of the pizza: ";
    getline(cin, nameOfPizza1);

    cout << "Diameter of pizza, in inches: ";
    cin >> diamOfPizza1;

    while ( diamOfPizza1 < 1 ) {
        cout << "Diameter must be positive." << endl;
        cout << "Diameter of pizza, in inches: ";
        cin >> diamOfPizza1;
    }

    cout << "Cost of the pizza. ";
    cin >> costOfPizza1;

    while ( costOfPizza1 < 1 ) {
        cout << "Price must be positive." << endl;
        cout << "Cost of the pizza. ";
        cin >> costOfPizza1;
    }
    cout << endl;

    // ask the user for the name, diameter, and cost of the second pizza
    
    cout << "Name of the Pizza: ";
    cin.ignore(1,'n');
    getline(cin, nameOfPizza2);

    cout << "Diameter of pizza, in inches: ";
    cin >> diamOfPizza2;

    while ( diamOfPizza2 < 1 ) {
        cout << "Diameter must be positve." << endl;
        cout << "Diameter of pizza, in inches: ";
        cin >> diamOfPizza2;
    }

    cout << "Cost of the pizza: ";
    cin >> costOfPizza2;

    while ( costOfPizza2 < 1 ) {
        cout << "Price must be positve" << endl;
        cout << "Cost of the pizza: ";
        cin >> costOfPizza2;
    }
    cout << endl;
    // ask the user for the name, diameter, and cost of the third pizza

    cout << "Name of the pizza: ";
    cin.ignore(1,'n');    
    getline(cin, nameOfPizza3);

    cout << "Diameter of pizza, in inches: ";
    cin >> diamOfPizza3;

    while ( diamOfPizza3 < 1 ) { 
        cout << "Diameter must be positive:" << endl;
        cout << "Diameter of pizza, in inches: ";
        cin >> diamOfPizza3;
    }

    cout << "Cost of the pizza: ";
    cin >> costOfPizza3;
    
    while ( costOfPizza3 < 1 ) { 
        cout << "Price must be positive:" << endl;
        cout << "Cost of the pizza: ";
        cin >> costOfPizza3;
    }

    // calculate area of the pizza for $/sqin

    pizzaRadius1 = diamOfPizza1 / 2;

    pizzaArea1 = PI * pizzaRadius1 * pizzaRadius1;

    pizzaRadius2 = diamOfPizza2 / 2;

    pizzaArea2 = PI * pizzaRadius2 * pizzaRadius2;

    pizzaRadius3 = diamOfPizza3 / 2;

    pizzaArea3 = PI * pizzaRadius3 * pizzaRadius3;

    // calculate $/sqin

    $in1 = costOfPizza1 / pizzaArea1;

    $in2 = costOfPizza2 / pizzaArea2;

    $in3 = costOfPizza3 / pizzaArea3;

    // output the table

    cout << endl;
    cout << setw(22) << left << "Name:" << setw(8) << right << "Diam:" << setw(8) << right << "Price:" <<
            setw(8) << right << "Area:" << setw(10) << right << "$/sq in:" << endl;
    cout << BORDER << BORDER << BORDER << BORDER << BORDER << BORDER << BORDER << endl;

    // first pizza inputs
    cout << fixed << showpoint;
    cout << setw(22) << left << nameOfPizza1.substr(0,20) << setw(8) << right << setprecision(1) << diamOfPizza1 <<
            setw(8) << right << setprecision(2) << costOfPizza1 << setw(8) << right << setprecision(1) << pizzaArea1 << 
            setw(10) << right << setprecision(2) << $in1 << endl;

    // second pizza inputs
    cout << fixed << showpoint;
    cout << setw(22) << left << nameOfPizza2.substr(0,20) << setw(8) << right << setprecision(1) << diamOfPizza2 <<
            setw(8) << right << setprecision(2) << costOfPizza2 << setw(8) << right << setprecision(1) << pizzaArea2 <<
            setw(10) << right << setprecision(2) << $in2 << endl;

    // third pizza inputs
    cout << fixed << showpoint;
    cout << setw(22) << left << nameOfPizza3.substr(0,20) << setw(8) << right << setprecision(1) << diamOfPizza3 <<
            setw(8) << right << setprecision(2) << costOfPizza3 << setw(8) << right << setprecision(1) << pizzaArea3 <<
            setw(10) << right << setprecision(2) <<  $in3 << endl;
    cout << endl;

    // calculate best deal

    if ($in1 <= $in2) {
    cout << "The best deal was " << nameOfPizza1 << ", " << "with a price of " << $in1 << " per square inch." << endl;
    }
    else if ( $in3 <= $in2) {
      cout << "The best deal was " << nameOfPizza3 << ", " << "with a price of " << $in3 << " per square inch." << endl;
    }
    else if ($in1 <= $in3) { 
    cout << "The best deal was " << nameOfPizza1 << ", " << "with a price of " << $in1 << " per square inch." << endl;
    }
    else if ($in2 <= $in3) {
      cout << "The best deal was " << nameOfPizza2 << ", " << "with a price of " << $in2 << " per square inch." << endl;
    }

    cout << endl;

    return 0;
}

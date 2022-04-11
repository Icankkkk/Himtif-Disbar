#include <iostream>

using namespace std;

int main() {

    /*
        The syntax of the if statement is:
        if (condition) {
            // body of if statement
        }

        The syntax of the if else statement is:
        if (condition) {
            // block of code if condition is true
        }
        else {
            // block of code if condition is false
        }

        The syntax of the if...else if...else statement is:
        if (condition1) {
            // code block 1
        }
        else if (condition2){
            // code block 2
        }
        else {
            // code block 3
        }

        The syntax of the nested if...else:
        // outer if statement
        if (condition1) {
            // statements

            // inner if statement
            if (condition2) {
                // statements
            }
        }

        The syntax of the Ternary operator is:
        condition ? expression1 : expression2;
    */

    // contoh penggunaan if statement
    int angka = 5;

    //kondisi
    if (angka >= 0) {
        // statement
        cout << "Ini bilangan positif" << endl;
    }

    int num;

    // input
    cout <<  "Masukan angka: ";
    cin >> num;

    // contoh penggunaan if else statement
    if (num > 0) {
        // statement dalam if
        cout <<  "ini bilangan positif" << endl;
    } else {
        //  statement dalam else
        cout <<  "ini bilangan negatif" <<  endl;
    }

    // contoh penggunaan operator Ternary
    string hasil = (num > 0) ? "ini bilangan positif" : "ini bilangan negatif";

    cout << "Hasil : " << hasil << endl;

    // another code
    cout <<  "statement ini akan selalu di cetak\n";


    // contoh penggunaan if...else if...else
    int nilai;
    cout << "Masukan nilai mahasiswa :"; cin >> nilai;

    // kondisi
    if (nilai >= 90) {
        // block 1
        cout << "Grade A" << endl;
    } else if (nilai >= 75) {
        // block 2
        cout << "Grade B" << endl;
    } else {
        // block 3
        cout << "Grade C" << endl;
    }

    // contoh penggunaan nested if

    int nums;

    // input nums
    cout << "masukan nums: "; cin >> nums;

        // outer if condition
    if (nums != 0) {

        // inner if condition
        if (nums > 0) {
        cout << "The number is positive." << endl;
        }
        // inner else condition
        else {
        cout << "The number is negative." << endl;
        }
    }
    // outer else condition
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }


    return 0;
}

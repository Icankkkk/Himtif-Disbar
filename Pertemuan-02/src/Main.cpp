#include <iostream>

using namespace std;


int main()
{
    // tipe implisit
    // eksplisit (casting)
        
    /*
    int angka = 11;
    int  angka2; // deklrasi variabel angka bertipe integer
    double num, num2;

    // implisit
    char kar = 'A'; // ASCII = 65
    char newKar = kar + 32; // 97 (ASCII) = a

   // cout << "kar = " << kar << '\n';
   // cout << "newKar = " << newKar << '\n';
    
    // secara ekplisit
    // (typeData)data;
    // typeData(data);

    cout << "kar = " << kar << '\n';
    cout << "Nilai ASCII = " << int(kar) << '\n';
    */

    // OPERATOR
    // operator aritmatika
    // operator logika
    
    int num1, num2;
    int hasil;

    num1 = 10, num2 = 5;

   // hasil = hasil + num1; // hasil += num1
   // hasil = num1 + num2;    
   // hasil = num1 - num2;
   // hasil = num1 * num2;
   // hasil = num1 / num2;
   // hasil = num1 % num2;

    cout << "num1 + num2 : " << num1 + num2 << '\n';
    cout << "num1 - num2 : " << num1 - num2 << '\n';
    cout << "num1 * num2 : " << num1 * num2 << '\n';
    cout << "num1 / num2 : " << num1 / num2 << '\n';
    cout << "num1 % num2 : " << num1 % num2 << '\n';

// ==

    // increment & decrement
    cout << "hasil increment " << num1 << " = " << ++num1 << '\n';
    cout << "hasil decrement " << num1 << " = " << --num1 << '\n';


    int a, b;
    a = 3;
    b = 5;
    bool result;

// Relational Operators
    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    // logical operator
    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    

    return 0;
}

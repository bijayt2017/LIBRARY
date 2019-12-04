 #include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int choice, number;
    number = (rand() % 100+1);

    do {
        cout << "Try to guess the Random Number" << endl;
        cin >> choice ;
       if (choice>number) {cout << "Too big !"<<endl;}
       else if (choice<number) {cout << "Too small !" << endl;}
       else if (choice==number) {
        cout << "Great you find the number!"<< endl;
        break;}
       } while (true);
 }




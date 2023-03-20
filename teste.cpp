//A class is a template in accordance to which objects are created
//A class is a piece of software that includes a data specification and a set of functions that operate on that data
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


class C {
	 public:
 C(char *s = "", int i = 0, double d = 1) {
    strcpy(dataMember1,s);
    dataMember2 = i;
    dataMember3 = d;
 }
 void memberFunction1() {
 cout << dataMember1 << ' ' << dataMember2 << ' '
 << dataMember3 << endl;
 }
 void memberFunction2(int i, char *s = "unknown") {
 dataMember2 = i;
 cout << i << " received from " << s << endl;
 }
	 protected:
 char dataMember1[20];
 int dataMember2;
 double dataMember3;
	 };
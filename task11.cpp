#include<iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
short int a = 100;
float b = 98.5f;
double c = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << (a + (int)b + (int)c)+1 << "\n"; // 200

cout<<sizeof((a + (int)b + (int)c)+1)<<"\n"; // 4 byets => int


/*
لديك مجموعة من المتغيرات يجب عدم التعديل عليهم
نريد أن تخرج لنا النتيجة رقم 200 ونوعه Integer
يجب عليك إستخدام ال Type Casting لتقوم بعمل اللازم
*/
}
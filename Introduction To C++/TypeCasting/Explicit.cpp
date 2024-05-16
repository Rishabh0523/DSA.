#include<iostream>
using namespace std;

int main(){

int a= 5;
float b = 5.5;
// float sum = a+b;
float sum = a+(int)b;

cout<<sum;

return 0;

}

// double to int

#include<iostream>
using namespace std;

int main(){

double pi = 3.14159265;
int result= (int)pi;
cout<<result<<endl;

return 0;

}

// float to char

#include<iostream>
using namespace std;

int main(){

float a = 65.5;
char ch = (char)a;
cout<<ch<<endl;

return 0;

}

//int to float

#include<iostream>
using namespace std;

int main(){

int a = 5;
int b = 3.0;

float c = a/((float)b);
cout<<c<<endl;
return 0;

}


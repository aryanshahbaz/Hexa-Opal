#include <iostream>
#include <fstream>
using namespace std;
int main() {
       ofstream MyFile("temp.txt");
       MyFile<<"Hi";
       MyFile.close();
}
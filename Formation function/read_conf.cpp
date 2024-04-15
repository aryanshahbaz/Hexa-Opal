#include <iostream>
#include <fstream>
using namespace std;
int main() {
       int counter_line=0;
       string text;
       ifstream conf_file("2.conf");
       while(getline(conf_file,text)){
              cout<<text<<endl;
       }
       conf_file.close();
}
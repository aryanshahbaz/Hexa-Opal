#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
       int counter_line=0;
       string text;
       double ball_x =0;
       double ball_y =0;
       ifstream conf_file("2.conf");
       while(getline(conf_file,text)){
              cout<<text<<endl;
              if(text[0]=='B' && text[1]=='a' && text[2]=='l' && text[3]=='l'){
                     counter_line += 1;   
                     // cout<<"Ball find"<<endl;
              }
       }
       cout<<"Ball : "<<counter_line<<endl;
       conf_file.close();
}
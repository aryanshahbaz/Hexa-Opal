#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>
#include <string>
#include <string.h>
#include<bits/stdc++.h> 
#include <cstdlib>
#include <typeinfo>



using namespace std;

// Voids : 
//     find ball //TODO     ~
//     get_ball_x //TODO    ~
//     get_ball_y //TODO    ~
//     get_p1_x //TODO
//     get_p1_y //TODO
//     get_p2_x //TODO
//     get_p2_y //TODO
//     get_p3_x //TODO
//     get_p3_y //TODO
//     get_p4_x //TODO
//     get_p4_y //TODO
//     get_p5_X //TODO
//     get_p5_y //TODO
//     get_p6_x //TODO
//     get_p6_y //TODO
//     get_p7_x //TODO
//     get_p7_y //TODO
//     get_p8_x //TODO
//     get_p8_y //TODO
//     get_p9_x //TODO
//     get_p9_y //TODO
//     get_p10_x //TODO
//     get_p10_y //TODO
//     get_p11_x //TODO
//     get_p11_y //TODO

double input_ball_x(double ball_x) {
       return ball_x;
}

double input_ball_y(double ball_y) {
       return ball_y;
}

bool find_ball(string line){
       int line_len = line.size();
       // cout<<"<find_ball>line_len : "<<line_len<<endl;
       if(line[0]=='B' && line[1]=='a' && line[2]=='l' && line[3]=='l'){
              // cout<<"Ball Find."<<endl;
              return true;
       }
       else{
              return false;
       }
}


double get_ball_x(string line){
       int line_len = line.size();
       string xs;
       double xd;
       // cout<<"<ball_x>line_len : "<<line_len<<endl;
       for(int i=5;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     xs=line.substr(5,i-5);
                     // cout<<xs<<endl;
                     xd=atof(xs.c_str());
                     return xd;
              }
       }
}

double get_ball_y(string line){
       int line_len = line.size();
       string ys;
       double yd;
       // cout<<"<ball_y>line_len : "<<line_len<<endl;
       for(int i=5;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     ys=line.substr(i,line_len);
                     // cout<<ys<<"0"<<endl;
                     yd=atof(ys.c_str());
                     return yd;
              }
       }
}

double get_p_x(string line){
       int line_len = line.size();
       string xs;
       double xd;
       // cout<<"<ball_x>line_len : "<<line_len<<endl;
       for(int i=2;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     xs=line.substr(2,i-2);
                     // cout<<xs<<endl;
                     xd=atof(xs.c_str());
                     return xd;
              }
       }
}

double get_p_y(string line){
       int line_len = line.size();
       string ys;
       double yd;
       // cout<<"<ball_y>line_len : "<<line_len<<endl;
       for(int i=2;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     ys=line.substr(i,line_len);
                     // cout<<ys<<"0"<<endl;
                     yd=atof(ys.c_str());
                     return yd;
              }
       }
}

double get_pp_x(string line){
       int line_len = line.size();
       string xs;
       double xd;
       // cout<<"<ball_x>line_len : "<<line_len<<endl;
       for(int i=3;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     xs=line.substr(3,i-3);
                     // cout<<xs<<endl;
                     xd=atof(xs.c_str());
                     return xd;
              }
       }
}

double get_pp_y(string line){
       int line_len = line.size();
       string ys;
       double yd;
       // cout<<"<ball_y>line_len : "<<line_len<<endl;
       for(int i=3;i<=line_len-1;i++){
              if(line[i]==32){
                     // cout<<"Second Space Find."<<endl;
                     ys=line.substr(i,line_len);
                     // cout<<ys<<"0"<<endl;
                     yd=atof(ys.c_str());
                     return yd;
              }
       }
}

int main() {
       double ball_x;
       double ball_y;
       double p1_x,p1_y,p2_x,p2_y;
       string text;
       bool run_while = true;

       // ifstream conf_file("2.conf");
       // while(getline(conf_file,text) && run_while==true){
       //        cout<<text<<endl;
       //        if(find_ball(text)==1){
       //               cout<<"Ball Find"<<endl;


       //        }
       // }


       // cout<<find_ball("Ballgo")<<endl;

       ball_x=get_ball_x("Ball -32.17 -29.55");
       cout<<"ball_x : "<<ball_x<<endl;
       ball_y=get_ball_y("Ball -32.17 -29.55");
       cout<<"ball_y : "<<ball_y<<endl;
       p1_x=get_p_x("2 -50.04 -3.51");
       cout<<"p_x : "<<p1_x<<endl;
       p1_y=get_p_y("2 -50.04 -3.51");
       cout<<"p_y : "<<p1_y<<endl;
       p2_x=get_pp_x("10 -25.66 17.68");
       cout<<"pp_x : "<<p2_x<<endl;
       p2_y=get_pp_y("10 -25.66 17.68");
       cout<<"pp_y : "<<p2_y<<endl;


       cout<<"EnD"<<endl;

       // conf_file.close();
}
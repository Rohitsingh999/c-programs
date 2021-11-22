#include<iostream>
using namespace std;

class base{


int a;

 public :
     base(){
       a=10;
     }
 
 int geta();
 
 };
 
 int base::geta(){
 
 return a;
 }
 
 class der:public base{
 
 int b;
 
 public :
 der(){
   b=2;
   }
 
 int c;
   void mul();
   void print();
   };
   
   void der ::mul(){
   
    c=b*geta();
    }
    
   void der ::print(){
   
   cout<<"a="<<geta(); 
    cout<<"b="<<b;
    cout<<"c="<<c;
}
   
int main(){


base w;
der s;

w.geta();

s.mul();
s.print();

return 0;
}

   

#include <iostream>
using namespace std;
 int menu(){
     int choice =-1;
     while(choice==-1){
        if(true){
           cout<<"\nMenu\n";
        cout<< "1) add 2 numbers\n";
                  cout<< "2) subtract 2 numbers\n";
                     cout<< "3) multiply 2 numbers\n";
                  
            cout<< "4) divide 2 numbers\n";
             cout<< "5) Exit\n";

        }
        cout<<"chose number from 1 to 5\n";
        cin>> choice;
       
        if(choice<1||choice>5)
        {
          cout<<"invalid input\n";
          choice=-1;
        }
     }
   return choice;
       
     
 }
 void read(double &a,double &b){
    cin>>a>>b;
 }


void add(double a, double b){
   cout<<"a+b ="<<a+b<<endl;
}
void subtract(double a, double b){
   cout<<"a-b ="<<a-b<<endl;
}
void multiply(double a, double b){
   cout<<"a*b ="<<a*b<<endl;
}
void divide(double a, double b){
   if(b==0)
      cout<<"invalid operation\n";
  else 
   cout<<"a/b ="<<a/b<<endl;
}

int main() {
     double a,b,total=0;
    while(true){
      int choice= menu();
       if(choice==5)
          break;
       total++;
       read(a,b);
       if(choice==1)
          add(a,b);
      else if(choice==2)
         subtract(a,b);
      else if(choice==3)
         multiply( a,  b);
      else if(choice==4)
         divide(a,b);
          
      
    }
   cout<<"\n total of operatrions= "<<total<<"\n";
  
 
} 
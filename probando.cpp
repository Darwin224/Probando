#include <iostream>

using namespace std;

int main(){
    
    //&& = y   

    /*
    * p|q|p && q| p||q |
    * v|v|   v  |    v   |
    * v|f|   f  |     v 
    * f|v|   f  |v        
    * f|f|   f  |   f
    */

int c=5;
int b=0;

   if(c>4 && b>3){

    cout<<"verdadero";
   }else{

    cout<<"verdadero";
   }

    return 0;
}
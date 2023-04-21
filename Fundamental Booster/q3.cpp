#include <iostream>
#include <string.h>
using namespace std;
int main() {

    char str[100];
    int i;
    cout << "Please Enter any String:-  ";   
    cin>>str;   
     i = 0;  
      while (str[i] != '\0') 
      {       
         if (str[i] >= 'a' && str[i] <= 'z') 
         {          
            str[i] = str[i] - 32;        
          }
           else if (str[i] >= 'A' && str[i] <= 'Z') 
              {
               str[i] = str[i] + 32;
              }
                 i++;
     }

    cout << "convert string to toggle= " << str;
    return 0;

}
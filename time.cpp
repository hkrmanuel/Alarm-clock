#include <time.h>
#include <iostream>
#include <string>
#include <iostream>
#include "windows.h"


using namespace std;




   



  // time display function
 int main(){

    string choice;
  int h1, m1;

  
   cout << " TO SET AN ALARM, TYPE 'YES'!!!:" <<endl;
  cin >> choice;

  if(choice == "yes"){

    
    cout << " PLEASE SET THE ALARM TIME IN FORMAT(HH:MM): " << endl;
    cin >> h1 >> m1;
   
   
   

  } else {

    
  }

  time_t now = time(NULL); 
  struct tm *time = localtime(&now); // access library of time functions

 

    int h=0,m=0,s=0;  

   h = time->tm_hour;  //hour
   m = time->tm_min; //min
   s = time->tm_sec; //sec
     
     


    
    
    
      start:
      for (h;h<24; h++){
        for (m;m<60;m++){
          for (s;s<60;s++){
            system("CLS");                             //main loops that display the change in time 
              cout << h <<":"<<m<<":"<< s;
            
             if(h == h1 && m == m1){
              PlaySound(TEXT("evil.wav") , NULL, SND_SYNC);
               
                    
              

            

             }

            for (double i = 0; i < 99999999; i++){
              i++;
              i--;
              }

            
            
  

            
          }
          s = 0;
          
        }
         m = 0;
      }
      h = 0;
      
      goto start;
   
   // adds 1 when minutes hit 60
   if (m == 60){
     h++;
   }

   

   

 
   


   
    

  


 
    

  }


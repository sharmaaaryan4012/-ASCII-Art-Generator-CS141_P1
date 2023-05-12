/**------------------------------------------
    Program 1: ASCII Flowers
    Prompt for the number of flower layers and display

    Course: CS 141, Spring 2023
    System: MacOS X 13.1
    Author: Aaryan Sharma
    Link:   https://replit.com/@UIC-CS141-Spr-2023/Project-1-AaryanSharma20#main.cpp
 ---------------------------------------------**/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // display the prompt to the user
    cout << "Program 1: ASCII Flowers\n"
         << "Choose from the following options:\n"
         << "   1. Display the HELLO graphic\n"
         << "   2. Display The Flower\n"
         << "   3. Exit the program\n"
         << "Your choice -> ";

    // read in the user's choice
    int menu_option;
    cin >> menu_option;

    // handle option to quit
    if (menu_option == 3) {
        exit(0);
    }

    // handle the HELLO graphic choice
    if (menu_option == 1) {
        char frame;
        cout << "Enter your frame character: ";
        cin >> frame;
        //top border
        cout << endl;
        for (int i=0; i<2; i++) {
            cout << setfill(frame) << setw(36) << ' ' << endl;
        }
        //message
        cout << setfill(frame) << setw(3) << right << " "
             << "** ** ***** **    **    *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** **    **    *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** **    **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "***** ***** **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "***** ***** **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** **    **    **    ** **"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** ***** ***** *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << setfill(frame) << setw(3) << right << " "
             << "** ** ***** ***** ***** *****"
             << setfill(frame) << setw(3) << left << " " << endl
             << right;
        //bottom border
        for (int i=0; i<2; i++) {
            cout << setfill(frame) << setw(36) << " " << endl;
        }
    }

    if (menu_option == 2) {                                   // Floral Pattern
      int num_sec;                                            // Number of sections needed.
      char colon = ':';
      int x = 0;
      int num_spaces;
      int adj_spaces;
      
      cout << "Enter the number of sections: ";
      cin >> num_sec;
      num_spaces = (num_sec*2)+3;
      
        

      for (int i=0; i<=num_sec; i++){                        // For loop used to generate each section of the flower.
        int x = 0;
        for (int j=1; j<((i*2)); j++){                       // For loop used to generate individual lines within each section.
          
          
          if (j == i){                                       // Center portion of flower section.
            adj_spaces = (num_spaces );
            cout << setfill(' ') << setw((adj_spaces/2)-1-x);
            cout << "{";
            cout  << setfill(colon) << setw(j+1) 
                  << "@"
                  << setfill(colon) << setw(j+1);
          }

          else if (x>0){                                     // Upper and Lower portion of the section.
            adj_spaces = (num_spaces );
            cout << setfill(' ') << setw((adj_spaces/2)-1-x) << "{";
            cout << setfill(colon) << setw(x+2) << ':';
            cout << setfill(colon) << setw(x+2);
          }
            
          else{                                              // First and Last portion of the section.
            adj_spaces = (num_spaces - 3)/2;
            cout << setfill(' ') << setw((adj_spaces)) << "{";
            cout << setfill(colon) << setw(4);
          }

          if (j<i){                                          // Managing the variable x.
            x++;
          }
          else{
            x--;
          }
          
          cout << "}" << endl;
        }
      adj_spaces = (num_spaces + 3)/2;
      cout << setfill(' ') << setw(adj_spaces);
      cout << "---" << endl;
      }

      for (int i=0; i < num_sec*2; i++){                     // For loop used to generate the stem portion of the required flower.
        adj_spaces = (num_spaces + 3)/2;
        cout << setfill(' ') << setw(adj_spaces);
        if (i%2 == 0){
          if (x%2 != 0){
            cout << "\\| " << endl;
            x++;
          }

          else{
            cout << " |/" << endl;
            x++;
          }
        }

        else{
          cout << " | " << endl;
        }
      }
    }
    return 0;
}
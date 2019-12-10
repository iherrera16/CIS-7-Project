//Program: Vigenere Cipher Program
//Group: Only1
//Name: Ivan Herrera

#include <iostream>
using namespace std;

int main()
{
   int i, input, key;
   char string[100], ch;
  
  // Explains to user what the program does
   cout << endl << "This program allows you to input a message, choose a shift value," 
   << endl << "and allows you to choose whether you want to encrypt or decrypt the message." 
   << endl << endl;
   cout << "Type in a message (no spaces): " << endl << endl;
   cin >> string;
   cout << "Now enter shift value: " << endl; //User can input thier shift value
   cin >> key;

  //User can select one of the two options down below
   cout << endl << "Now choose one of the two options down below:" << endl;
   cout << "1. This option allows you to encrypt your message." << endl;
   cout << "2. This option allows you to decrypt your message." << endl;
   cin >> input;

   switch(input)
   {// This is for the ecryption option
      case 1:
         for(i = 0; i < 100 && string[i] != '\0'; ++i)
         {
           ch = string[i];
              if(ch >= 'a' && ch <= 'z')
              {
                ch = ch + key;
                if(ch > 'z')
                {
                  ch = ch - 'z' + 'a' - 1;
                }
                string[i] = ch;
              }
              else if(ch >= 'A' && ch <= 'Z')
        {
              ch = ch + key;
                if(ch > 'Z')
                {
                ch = ch - 'Z' + 'A' - 1;
                }
              string[i] = ch;
            }
         cout << endl << "Encrypted message: " << string << endl;
         break;
    //This is for the decryption option
      case 2:
         for(i = 0; string[i] != '\0'; ++i)
    {
        ch = string[i];
      if(ch >= 'a' && ch <= 'z')
      {
          ch = ch - key;
          if(ch < 'a')
          {
            ch = ch + 'z' - 'a' + 1;
          } 
          string[i] = ch;
      }
      else if(ch >= 'A' && ch <= 'Z')
      {
          ch = ch - key;
          if(ch > 'a')
          {
            ch = ch + 'Z' - 'A' + 1;
          }
          string[i] = ch;
      }
    }
      cout << endl << "Decrypted message: " << string << endl;
      break;

      //This appears to user if they input an invalid message
      default:
         cout << endl << "The input you entered is not valid. " 
         "Please re-run the program and try again." << endl;
          }
   }
   return 0;
}


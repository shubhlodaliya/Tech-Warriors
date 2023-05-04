#include<bits/stdc++.h>
using namespace std;
class morse
{
private:
    string str;
public:

    morse()                          //for string input
     {
        cout<<"Enter your string : ";
        getline(cin ,str);
     }
    void change();
    void convert();

    void putdata()       //for print the morse code
     {
        cout<<"Morse code : ";
        convert();
     }
};
    void morse::change()                    //change the string into uppercase
    {
      for(int i=0;i<str.length();i++)
        {
           str[i]=toupper(str[i]);
        } 
    } 
     void morse::convert()
    {
        for(int i=0;i<str.length();i++)  //convert the string into morse code
         {

           switch(str[i])
            {
            case 'A': cout<<".- "; break;
            case 'B': cout<<"-... "; break;
            case 'C': cout<<"-.-. "; break;
            case 'D': cout<<"-.. "; break;
            case 'E': cout<<". "; break;
            case 'F': cout<<"..-. "; break;
            case 'G': cout<<"--. "; break;
            case 'H': cout<<".... "; break;
            case 'I': cout<<".. "; break;
            case 'J': cout<<".--- "; break;
            case 'K': cout<<"-.- "; break;
            case 'L': cout<<".-.. "; break;
            case 'M': cout<<"-- "; break;
            case 'N': cout<<"-. "; break;
            case 'O': cout<<"--- "; break;
            case 'P': cout<<".--. "; break;
            case 'Q': cout<<"--.- "; break;
            case 'R': cout<<".-. "; break;
            case 'S': cout<<"... "; break;
            case 'T': cout<<"- "; break;
            case 'U': cout<<"..- "; break;
            case 'V': cout<<"...- "; break;
            case 'W': cout<<".-- "; break;
            case 'X': cout<<"-..- "; break;
            case 'Y': cout<<"-.-- "; break;
            case 'Z': cout<<"--.. "; break;
            case '0': cout<<"----- "; break;
            case '1': cout<<".---- "; break;
            case '2': cout<<"..--- "; break;
            case '3': cout<<"...-- "; break;
            case '4': cout<<"....- "; break;
            case '5': cout<<"..... "; break;
            case '6': cout<<"-.... "; break;
            case '7': cout<<"--... "; break;
            case '8': cout<<"---.. "; break;
            case '9': cout<<"----. "; break;
            case '.': cout<<".-.-.- "; break;
            case ',': cout<<"--..-- "; break;
            case '?': cout<<"..-.. "; break;
            case ':': cout<<"---... "; break;
            case '!': cout<<"-.-.-- "; break;
            case '"': cout<<".-..-. "; break;
            case '\'': cout<<".----. "; break;
            case '=': cout<<"-...- "; break;
            case ';': cout<<"-.-.- "; break;
            case '/': cout<<"-..-. "; break;
            case '-': cout<<"-....- "; break;
            case '(': cout<<"-.--. "; break;
            case ')': cout<<"-.--.- "; break;       
            case '_': cout<<"..--.- "; break;
            case '@': cout<<".--.-. "; break;       
            case '&': cout<<".-... "; break;       
            default:  continue; break;
           }
       }
    }
int main()
{
    cout<<"\t\t\t";
    for(int i=1;i<78;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout<<"\t\t\t| *************************** MORSE CODE CONVERTER ************************ |"<<endl<<"\t\t\t";
    for(int i=1;i<78;i++)
    {
        cout<<"-";
    }
    cout<<endl<<endl<<"\t\t\t";
    morse m;                                   //creating the object for class morse
    m.change();                                //methode call
    cout<<endl<<"\t\t\t";
    for(int i=1;i<78;i++)
      {
        cout<<"-";
      }
    cout<<endl<<endl<<"\t\t\t";
    m.putdata();                                //putdata methode call
    cout<<endl;
    return 0;
}





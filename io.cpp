#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main () {
  std::ifstream inFile; // file input stream based on data file
  std::string currentLine; 
  std::stringstream converter; // for parsing/converting the data
  std::string sIntA, sIntB, text;
  
  int tempIntA, tempIntB; // the temp int variables that the string variables will be converted into
  inFile.open("data.csv");
  if (inFile.is_open()) {
    while (std::getline(inFile, currentLine)) {
      converter.clear(); 
      converter.str(currentLine); // converter holds this string

      std::getline(converter, sIntA, ','); // parse the string numbers by their commas
      std::getline(converter, sIntB, ',');
      std::getline(converter, text);
      
      converter.clear(); 
      converter.str(""); // converter holds an empty char
      converter << sIntA << " " << sIntB; // stringnum space stringnum in, intnum and intnum out
      converter >> tempIntA >> tempIntB;

      int sum = tempIntA + tempIntB;

      for (int i = 0; i < sum; i++ ) {
        std::cout << text << " "; // print the text with a space after it
      } // end for
      std::cout << std::endl;
    } // end while
    inFile.close();
  } // end if
} // end main
    

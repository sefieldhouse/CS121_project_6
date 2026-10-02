# CS121_project_6
## File I/O, data conversion, reading CSV data

int main() {  
  create a file input stream based on the data file  
  create a string stream for parsing and conversion  
  create intA, intB, text  
  create temp string variables for the ints, tempIntA, tempIntB  
  if the file was successfully opened:  
    loop thru the file lines  
    with each line:  
      read the line into a string  
      read until the first co  
      read until the next comma  
      read the rest of the string  
      clear the stringstream  
      put intA into converter and pass it out to another var, tempIntA  
      put intB into converter and pass it out to another var, tempIntB  
      add intA and intB, put result in total  
      repeat sum times  
        print text with a following space  
      print a newline  
    close file

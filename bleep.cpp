#include <iostream>
#include <string>

#include "functions.hpp"




int main(){

std::string word = "broccoli";
std::string sentence = "cheese and broccoli was the worst broccoli I have ever had.";

checkSentence(word, sentence);

for (int h = 0; h < sentence.size(); h++){

  std::cout << sentence[h];

}
  std::cout << std::endl;

  return 0;
}


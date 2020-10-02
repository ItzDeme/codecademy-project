#include <string>

void bleep(std::string word, std::string &sentence, int i){

  for (int z = 0; z < word.size(); z++){

  sentence[i+z] = '*';

}
}

void checkSentence(std::string word, std::string &sentence){

  

  for (int i = 0; i < sentence.size(); i++){

    int ifMatches = 0;

    for (int y = 0; y < word.size(); y++){

      if(sentence[i+y] == word[y]){

        ifMatches++;

      }

    }

    if(ifMatches == word.size()){

      bleep(word, sentence, i);

    }

  }

}

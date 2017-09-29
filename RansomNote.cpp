#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
istringstream iss;
istringstream piss;
vector <string> array;

int mag ; //Store the number of words in newspaper;
int ran ; //Store the number of words required to create a Ransom Note

int counter = 0; //Increases when a entered word matches similar word in Newspaper

cin >> mag;
cin >> ran;
string word;
string word_2;


//Takes Input of Present Words in Newspaer and stores them into an vector array
for(int i=0; i<mag; i++){
cin >> word;
array.push_back(word);
}





//Outer for loop takes input of required words for a ransom note
for(int j=0; j<ran; j++){
cin >> word_2;
//Innter for Loop matches the entered word with words present in vector array
for(int k=0; k<mag; k++){

if(word_2 == array[k]){
		counter++;
		array[j] = "";
		break;
}
}
}




     
     if(counter == ran){
     	cout << "Yes" <<endl;
     }
     else{
     	cout << "No"<<endl;
     }
     
   
      
}

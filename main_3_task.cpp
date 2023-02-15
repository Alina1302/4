#include <iostream>
#include <string>
using namespace std;


int main(){
    int k = 0;
    cout << "Enter sentence: ";
    string sentence;
    getline(cin,sentence);

    for(int i=1;i<sentence.size();i++){
        if ( (sentence[i-1] != ' ') && ( (sentence[i] == ' ') || (sentence[i+1] == '\0') ) ) {
            k++;
        }
    }

    cout << "Quantity of letters in this sentence is: " << k<<endl;
    return 0;
}
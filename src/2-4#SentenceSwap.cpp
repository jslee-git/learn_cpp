//
//  2-4#SentenceSwap.cpp
//  
//
//  Created by Jisang lee on 17.03.21.
//

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int main()
{
    int i;
    
    //get 5 sentences
    cout << "Enter 5 sentences (MAX 49 Characters):\n\n";
    char sentence[5][51];
    for (i = 0; i < 5; i++)
        cin.getline(sentence[i], 50);
    
    //check and swap
    int ch;
    cout << "\n";
    for (i = 0; i < 5; i++) {
        for (ch = 0; ch < strlen(sentence[i]); ch ++) {
            if (sentence[i][ch] == 'a')
                cout << 'A';
            else
                cout << sentence[i][ch];
        }
        cout << endl;
    }
    return 0;
}

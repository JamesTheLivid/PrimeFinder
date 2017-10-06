//
//  main.cpp
//  Prime FInder
//
//  Created by James Robinson on 06/10/2017.
//  Copyright © 2017 James Robinson. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int i = 1;
    int k = 2;
    int primeCounter = 0;
    int primeMax = 0;
    
    cout << ("How far do you want to go? ");
    cin >> primeMax;
    
    cout << ("Where do you want to start from? ");
    cin >> i;
    
    ofstream primefile;
    primefile.open ("PrimeFile.txt");
    
    while(i <= primeMax) {
        
        k = 2;
        primeCounter = 0;
        
        while(k <= i / 2){
        
            if (i % k == 0) {
    
                primeCounter += 1;
                
            }
                
        k += 1;
    
        }
        
        if (primeCounter <= 0) {
            
            primefile << i;
            primefile << (" \n");
            
        }
        
        if (i % 10000 == 0) {
            
            cout << i;
            cout << ("\n");
            
        }
        
        i += 1;
    }
        
    primefile.close();
    return 0;
}

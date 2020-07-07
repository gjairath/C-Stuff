#include <bits/stdc++.h> 
#include <iterator>
#include <string>
#include <iostream>
#include <unordered_map>
	
  
void printFrequency(std::string str) 
{ 
    // Define an unordered_map 
    std::unordered_map<char, int> M; 
  
    // Traverse string str check if 
    // current character is present 
    // or not 
    for (int i = 0; str[i]; i++) { 
  
        // If the current characters 
        // is not found then insert 
        // current characters with 
        // frequency 1 
        if (M.find(str[i]) == M.end()) { 
            M.insert(std::make_pair(str[i], 1)); 
        } 
  
        // Else update the frequency 
        else { 
            M[str[i]]++; 
        } 
    } 
  
    // Traverse the map to print the 
    // frequency 
    int counter = 0;
    
     for (std::pair<char, int> element : M)
    {
    	if (element.second == 1){
    		counter++;
		}
    }
    if (counter % 2 == 0) {
    	//std::cout << counter;
    	std::cout << "CHAT WITH HER!";
	} else {
		std::cout << "IGNORE HIM!";
	}
} 
  
// Driver Code 
int main() 
{ 
    std::string str = "sevenkplus"; 
  
    // Function call 
    printFrequency(str); 
    return 0; 
} 


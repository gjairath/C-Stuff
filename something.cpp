#include <bits/stdc++.h> 
#include <iterator>
#include <string>
#include <iostream>
#include <unordered_map>
	

int main() 
{ 
	std:: string str;
	std::cin >> str;
	
    std::unordered_map<char, int> M; 
  
  
    for (int i = 0; str[i]; i++) { 
        if (M.find(str[i]) == M.end()) { 
            M.insert(std::make_pair(str[i], 1)); 
        } 
  
        // Else update the frequency 
        else { 
            M[str[i]]++; 
        } 
    } 

    int counter = 0;
    
     for (std::pair<char, int> element : M)
    {
    	if (element.second > 1){
    		element.second = 1;
		}
		if (element.second == 1) {
			counter++;
		}
	//	std::cout << element.first << " " << element.second << std::endl;
    }
    if (counter % 2 == 0) {
    	//std::cout << counter;
    	std::cout << "CHAT WITH HER!";
	} else {
		std::cout << "IGNORE HIM!";
	} 
    return 0; 
} 


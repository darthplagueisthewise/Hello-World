//
//  proj415_2.cpp
//  
//
//  Created by Josh Everly on 4/22/17.
//
//

#include <iostream>
#include <string>

                                 
int main()
{
    
    
    std::string hash_buffer[8]; // previous 512-bit hash value
    std::string roundOuput[8];  // latest 512-bit hash value
  
  
    // 8 initial 64-bit buffer values in hex
    hash_buffer[0] = "6A09E667F3BCC908";
    hash_buffer[1] = "BB67AE8584CAA73B";
    hash_buffer[2] = "3C6EF372FE94F82B";
    hash_buffer[3] = "A54FF53A5F1D36F1";
    hash_buffer[4] = "510E527FADE682D1";
    hash_buffer[5] = "9B05688C2B3E6C1F";
    hash_buffer[6] = "1F83D9ABFB41BD6B";
    hash_buffer[7] = "5BE0CD19137E2179";
    
    // This is 384-byte (3072-bit) test input  
    std::string test_input = "fjaskljfowjfeifjakfjadsefwifjeuwfncncuanjdsklndjkalfjsdfjkhsafkasfnj44kjafklsj3j3hk45hu34n56byl2bl32b345blh63lhblhasjwehrljklfhasjdhcnasjkdfhjlhlasgdfhljh43j3lk4lhk5jglejrhljjcbvnfdjfdashkjwhjfnblajkncailufewnflakjhvljkashfkjasbhkkjhlkj3h4uh3u4k5hlkj34hily3ty3i4g5iblnvjajfdsglkjhgjksdhjgkhsreiuhsgheuiuskhgfuerisgnli3453klh5u3345jhwiywrwejksdfajerthkerljthlkej3lk4jhjkh34lkjh34nh56";

    
    // for loop for however many 1024 bit blocks exist in plaintext message
    int number_of_blocks = 0;
  
    for (int j = 0; j < test_input.size(); j += 128) {
        
        
        std::string s1024 = test_input.substr(number_of_blocks*128, 128);
        std::cout << "1024-bit block #" << number_of_blocks+1 << " = " << s1024 << std::endl;
        /*s1024.c_str();
        
        std::string roundOutput;
        
        roundOutput = round_funct(s1024, hash_buffer); // 512-bit string of concantenated 64-bit hash values
        
        
        // preforms addition based on round function output and prev hash value
        for (int i = 0; i < 8; i++){
            std::string newBuffer = roundOutput.substr(i*16, 16); // Gets 16 Hex values from round funct output string
            hash_buffer[i] = addition( strtoull(hash_buffer[i].c_str(), NULL, 16), strtoull(newBuffer.c_str(), NULL, 16)  );
        }
        
        */
        
        number_of_blocks++;
        
        
    }
 
    std::cout << "END OF PROGRAM" << std::endl;
}

    
    

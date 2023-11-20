/* #include <iostream>
#include "Movies.cpp"
using namespace std;

int main(){
    
    Movies movies;
    /* movies.Add_movie("Transformers 2", "G", 0);
    movies.Add_movie("Madagascar 3", "PG", 1); */
    movies.Add_movie("Oppenheimer", "E++", 2);
    movies.increment_watched("ice age");
    movies.Display();
    


    return 0;
} */

#include <iostream>
#include <algorithm>  // For reverse

std::string addStrings(const std::string& num1, const std::string& num2) {
    std::string result;
    int carry = 0;

    // Ensure num1 is not shorter than num2
    if (num1.length() < num2.length())
        std::swap(num1, num2);

    // Reverse the strings to start from the rightmost digits
    std::string reversedNum1(num1.rbegin(), num1.rend());
    std::string reversedNum2(num2.rbegin(), num2.rend());

    // Iterate through digits
    for (size_t i = 0; i < reversedNum1.length(); ++i) {
        int digit1 = reversedNum1[i] - '0';
        int digit2 = (i < reversedNum2.length()) ? reversedNum2[i] - '0' : 0;

        // Calculate the sum and update carry
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    // If there's a carry after the loop, add it to the result
    if (carry > 0) {
        result += carry + '0';
    }

    // Reverse the result to get the correct order
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    // Example usage
    std::string num1 = "123456789012345678901234567890";
    std::string num2 = "987654321098765432109876543210";
    
    std::string sum = addStrings(num1, num2);


    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}

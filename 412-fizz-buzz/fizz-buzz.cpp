class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzBuzz;
        for (int i = 0; i < n; i++) {
            int num = i + 1;
            if (num % 3 == 0 && num % 5 == 0) {
                fizzBuzz.push_back("FizzBuzz");
            } else if (num % 3 == 0) {
                fizzBuzz.push_back("Fizz");
            } else if (num % 5 == 0) {
                fizzBuzz.push_back("Buzz");
            } else {
                fizzBuzz.push_back(to_string(num));
            }
        }
        return fizzBuzz;
    }
};

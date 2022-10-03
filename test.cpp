#include <iostream>
#include <cstring>
using namespace std;

class Test {
    private:
        char ** char_copy_assignment;
    
    public:
        Test(const char ** char_copy_assignment);
};

Test::Test(const char** char_copy_assignment) {
    int i = 0;
    for (const char ** s = char_copy_assignment; s != nullptr; s++, i++) {
        strcpy(this->char_copy_assignment[i], s[0]);
    }
}

int main () {


}
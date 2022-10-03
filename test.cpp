#include <iostream>
#include <cstring>
using namespace std;


class Match{
    public:
    int num_event = 0;

    char** first_players;


    Match(const char* first_country_name, const char* second_country_name, const char** first_players, int num_first_players, const char** second_players, int num_second_players);
    Match(const Match& match);
    ~Match();

    void print_info() const;
};

Match::Match(const char** first_players = nullptr, int num_first_players = 0, const char** second_players = nullptr, int num_second_players = 0) : num_first_players(num_first_players), num_second_players(num_second_players) {


    //find length of 3d list
    int nd_list_length = 0;
    for (const char ** t = first_players; t!= nullptr; t++, nd_list_length++) {}

    
    this->first_players = new char*[nd_list_length];
    

    int i = 0;
    // this->first_players = new char*[]
    for (const char ** s = first_players; s != nullptr; s++, i++) {
        this->first_players[i] = new char[strlen(s[0])+1]; 
        strcpy(this->first_players[i], s[0]);
    }
}



int main () {

    const char * arr1[] = {"hello"};
    const char * arr2[] = {"apple"};
    const char * arr3[] = {"pear"};
    const char * arr4[] = {"orang"};
    const char** arr_p[4] = {arr1, arr2, arr3, arr4};

    Match test(arr_p);


}
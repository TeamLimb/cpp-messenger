#include <vector>
#include <string>
#include <sstream>


using namespace std;

namespace UTILS {

vector<string> split_string(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

}
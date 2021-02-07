#pragma once

#include <string>
#include <vector>


namespace MAIN_INTERFACE {

enum CommandType {
    HELP,
    LOGIN,
    REGISTER,
    WHOAMI,
    LIST_CHAT,
    LIST_FRIEND,
    MAKE_CHAT,
    MAKE_FRIEND,
    ENTER,
    NONE,
};

class MainInterface {

private:
    CommandType command_type = NONE;
    std::vector<std::string> arguments;
    std::vector<std::string> get_command_string();
    void parse_command_string(std::string);

public:
    void get_command();
    // void execute_command();
    // void initialize();
};

}
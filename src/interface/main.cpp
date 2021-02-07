#include <iostream>
#include <string>
#include <vector>

#include "main.h"
#include "utils.cpp"

using namespace MAIN_INTERFACE;

void MainInterface::get_command() {
    std::cout << "Please enter your command." << std::endl << "command: ";
    std::string command_string;
    std::getline(std::cin, command_string);
    while (this->command_type != CommandType::NONE)
        this->parse_command_string(command_string);
};


void MainInterface::parse_command_string(std::string command_string) {
    std::vector<std::string> splitted = UTILS::split_string(command_string, ' ');
    std::string command_type_string = splitted[0];
    splitted.erase(splitted.begin());
    this->arguments = splitted;

    if (command_type_string == "exit") {
        std::exit(0);
    }
    else if (command_type_string == "help") {
        this->command_type = CommandType::HELP;
    }
    else if (command_type_string == "login") {
        this->command_type = CommandType::LOGIN;
    }
    else if (command_type_string == "register") {
        this->command_type = CommandType::REGISTER;
    }
    else if (command_type_string == "whoami") {
        this->command_type = CommandType::WHOAMI;
    }
    else if (command_type_string == "list-chat") {
        this->command_type = CommandType::LIST_CHAT;
    }
    else if (command_type_string == "list-friend") {
        this->command_type = CommandType::LIST_FRIEND;
    }
    else if (command_type_string == "make-chat") {
        this->command_type = CommandType::MAKE_CHAT;
    }
    else if (command_type_string == "make-friend") {
        this->command_type = CommandType::MAKE_FRIEND;
    }
    else if (command_type_string == "enter") {
        this->command_type = CommandType::ENTER;
    }
    else {
        std::cout << "Invalid command! Please use another command." << std::endl;
    }
};

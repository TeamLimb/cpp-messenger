#include <iostream>
#include "./interface/main.cpp"

int main()
{
    MAIN_INTERFACE::MainInterface main_interface;
    while (true) {
        main_interface.get_command();
        // main_interface.execute_command();
        // main_interface.initialize();
    }
    return 0;
}

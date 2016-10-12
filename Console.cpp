//
// Created by Pedro Soares on 12/10/16.
//

#include "Console.h"

Tigre::String Tigre::Console::Run(Tigre::String command) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(command.getValue().c_str(), "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}
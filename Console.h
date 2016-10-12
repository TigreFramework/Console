//
// Created by Pedro Soares on 12/10/16.
//

#ifndef CONSOLE_CONSOLE_H
#define CONSOLE_CONSOLE_H

#include <iostream>
#include "String/String.h"

namespace Tigre {
    class Console {
        public:
            static String Run(String command);
    };
}


#endif //CONSOLE_CONSOLE_H

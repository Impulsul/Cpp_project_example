#pragma once
#include <iostream>
#include <dlib/timer.h>
#include <dlib/misc_api.h> // for dlib::sleep
#include <iostream>
class timer_example
{
public:
    void action_function()
    {
        // print out a message so we can see that this function is being triggered
        std::cout << "action_function() called" << std::endl;
    }

    void sample();

};


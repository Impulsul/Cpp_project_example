#include "pch.h"
#include "timer.h"

void timer_example::sample()
{
    timer_example e;

    // Here we construct our timer object.  It needs two things.  The second argument is
    // the member function it is going to call at regular intervals and the first argument
    // is the object instance it will call that member function on.
    dlib::timer<timer_example> t(e, &timer_example::action_function);

    // Set the timer object to trigger every second
    t.set_delay_time(1000);

    // Start the timer.  It will start calling the action function 1 second from this call
    // to start.
    t.start();

    // Sleep for 10 seconds before letting the program end.  
    dlib::sleep(10000);

}

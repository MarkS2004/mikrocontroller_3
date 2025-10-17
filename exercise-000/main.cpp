#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

void changeValueByParameter(int value)
{
    value = 99;
    fmt::println("In function: value = {}", value);
}


void changeValueByPointer(int* ptr)
{
    * ptr = 77;
    fmt::println("In function: ptr = {}", *ptr);
}

int main(int argc, char **argv) {

    double* ptr = new double(3.1415);
    fmt::println("value: {}, address: {}", *ptr, fmt::ptr(ptr));

    delete ptr;
    fmt::println("value: {}, address: {}", *ptr, fmt::ptr(ptr));



    int y = 5;
    fmt::println("Before function: y = {}", y);
    changeValueByParameter(y);
    fmt::println("After function: y = {}\n", y);

    fmt::println("Before function: y = {}", y);
    changeValueByPointer(&y);
    fmt::println("After function: y = {}", y);



    return 0; /* exit gracefully*/
}

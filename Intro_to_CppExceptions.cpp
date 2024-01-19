// C++ Weekly episode 411 by Jason Turner

#include<iostream>
#include<stdexcept>


void functionThrows(bool flag) {
    if (flag) {
        throw std::runtime_error("Runtime error detected");
    }
}

void doWork(bool flag) {
    functionThrows(flag);
}


// Lippincott function for central exception handling
int handler() {
    try {
        throw;
    } catch (int i) {
        return i;
    } catch (double d) {
        return 1;
    } catch (const std::runtime_error &e) {
        std::cout << e.what();
    } catch (const std::exception &e) {
        std::cout << e.what();
    } catch (...) {
        return -1;
    }
    return 0;
}


int main() {

    try {
        doWork(true);
    } catch (...) {
        handler();
    }
}

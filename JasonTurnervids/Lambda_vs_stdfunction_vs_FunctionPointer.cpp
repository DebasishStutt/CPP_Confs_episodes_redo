#include<functional>


int main() {    

    // a lambda is an unnamed function --> instantiated as an in place class definition
    auto add = [] (const int x, const int y) {
        return (x + y);};

    // just a holder i.e. a type erased wrapper around a callable
    //std::function<int(const int, const int)> func;
    
    // now the lambda is help by the std::function
    //func = add;
    
    std::function<int(const int, const int)> func{add};
    
    // direct lamda call
    // return add(10, 11);

    return func(1, 2);
}
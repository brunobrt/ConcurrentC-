#include <iostream>
#include <thread>   // Declaration for multithreading support

void hello()        
{
    std::cout<<"Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello);  
    /* Object named t has the new function hello() as its initial function.
       Rather than writing directly to standard output or calling hello(), it
       lanches a whole new thread to do it.
       
       The initial thread starts at main() and the new starts at hello().
       */
    t.join(); // causes the calling thread (in main()) to wait for the thread associeated with std::thread object
    return 0;
}
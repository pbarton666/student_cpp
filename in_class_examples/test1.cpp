#include <iostream>
#include <string>

// Uses boost 
// https://www.boost.org/doc/libs/1_43_0/libs/test/doc/html/minimal.html
// https://www.boost.org/doc/libs/1_43_0/libs/test/doc/html/utf/intro.html

// Test module:  source file(s) -> executable.   Consists of test setup (inits), test body, test cleanup, test runner.
// Tests are a collection of assertions, wrapped in cases, organized in a tree.

// minimal
// #include <boost/test/minimal.hpp>

int add( int i, int j ) { return i+j; }

int test_main( int, char *[] )             // note the name!
{
    // six ways to detect and report the same error:
    BOOST_CHECK( add( 2,2 ) == 4 );        // #1 continues on error
    BOOST_REQUIRE( add( 2,2 ) == 4 );      // #2 throws on error
    if( add( 2,2 ) != 4 )
        BOOST_ERROR( "Ouch..." );          // #3 continues on error
    if( add( 2,2 ) != 4 )
        BOOST_FAIL( "Ouch..." );           // #4 throws on error
    if( add( 2,2 ) != 4 ) throw "Oops..."; // #5 throws on error

    return add( 2, 2 ) == 4 ? 0 : 1;       // #6 returns error code
}

int main(){

    std::cout << std::endl;
} 
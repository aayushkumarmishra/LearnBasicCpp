// c++ programming language

// Include of headers to use more function that already exists
#include <iostream>
#include <cstring>

// If you write your functions after the main() you need to "redefine" above it or you program won't work
	void print42 ();
	int return42 ();
	bool isTrue  ();

// Your program run here 
	int main() {

		// Variables types
			int Integer;
			float Float;
			double Double;
			//Must be only one character
			char Char;
			// For this last one we need to add the library cstring to the code
			std::string String;
			// Can be only true or false
			bool Bool;

		// Read and print values on screen
			// Input
				std::cin >> Integer;
				std::cin >> Float;
				std::cin >> Double;
				std::cin >> Char;
				std::cin >> String;
				// accept only 1 or 0 as input... 
				std::cin >> Bool;
			// Output
				std::cout << "Output of values entered\n" << std::endl; 
				std::cout << "Integer value:   "          << Integer << std::endl;
				std::cout << "Float value:     "          << Float   << std::endl;
				std::cout << "Double value:    "          << Double  << std::endl;
				std::cout << "Character value: "          << Char    << std::endl;
				std::cout << "String value:    "          << String  << std::endl;
				std::cout << "Bool value:      "          << Bool    << std::endl;
				std::cout << std::endl;

		// You can make opearations with numeric variables such as '+' '-' '^' '%' '/'
			// You can create a new variable or just print the operation like this
				std::cout << "Operations: '+' '-' '*' '/' ..." << std::endl;
				
				std::cout << "Create a new float varible 'newFloat = Integer + Float'" << std::endl;
				float newFloat = Integer + Float;
				std::cout << newFloat << std::endl;
				
				std::cout << "Directly print the sum of Integer and Float w/o create a new varible" << std::endl;
				std::cout << Integer + Float << std::endl;
				std::cout << std::endl;
			// Note that the value will turn to a Float type and both of prints are equal.

		// We can compare the variables using conditional structions
			// You say what your code supposed to do 'if' of 'else'
				std::cout << "Is Integer variable equal to 42?" << std::endl;
				std::cout << "If yes -> 1\nelse   -> 0" << std::endl;
				std::cout << "Answer: ";
				if ( Integer == 42 ) {
					std::cout << true << std::endl;
				} else {
					std::cout << false << std::endl;
				}
				std::cout << std::endl;

		// Know the difference
			// While | For | Do.. While 
				// For
					// Will repeat the code inside it until reach the end of condition
						std::cout << "Begin of For Structure";
						std::cout << "\nIt will run 5 times and end\n\n";
						for ( int index = 0; index < 5; index++ ) {
							std::cout << "Running For Structure" << std::endl;
						}	
						std::cout << "\nEnd of For Structure" << std::endl;
						std::cout << std::endl;
					
				// While
					// Will repeat the code inside it until the condition turns false
						// If the condition is false at the beginnig will pass through it
							std::cout << "Begin of While Structure" << "\n\n";
							Integer = 0;
							while ( Integer != 42 ) {
								std::cout << "To leave make Integer be 42..." << std::endl;
								std::cout << "Integer: ";	
								std::cin >> Integer;
									if ( Integer != 42 ) {
										system("clear");
										std::cout << "Integer is not 42 yet.. " << std::endl;
									}
									else continue;
							}
							std::cout << "\nEnd of While Structure" << std::endl;
						// If you write "while(true)" which is always true you can easily end it with a "break"

				// Do.. While
					// Will repeat the code inside it until the condition turns false
						// If the condition is false at the beginnig will run only ont time
							std::cout << "\nBegin of Do.. While Structure" << "\n\n";
							// Run only one time
								do {
									std::cout << "Integer is 42!!" << std::endl;
								} while ( Integer != 42 ); 
							// Repeat the structure
								do {
									if ( Integer == 42 ) {
										std::cout << "Change his value to leave..." << std::endl;
										std::cout << "Integer: " << std::endl;
										std::cin >> Integer;
									}
									else {
										std::cout << "Integer is not 42" << std::endl;
									}
								} while ( Integer == 42 ); 
							std::cout << "\nEnd of Do.. While Structure" << "\n\n";

		// Call of Functions
			// W/O parameters
				print42 ();
				// For functions with return type you need to create a variable to receive the value
				int is42;
				is42 = return42 ();
				std::cout << is42 << std::endl;
				// We can re-use some varibles declare on the top of the program too
				Bool = isTrue ();
				std::cout << Bool << std::endl;
	}

//Functions can be define as the type they return and if recieve parameters
	// W/O parameters	
		// Void functions don't return any value
			void print42 () {
				std::cout << "This function only print the number 42" << std::endl;
				std::cout << 42 << std::endl;
			}

		// Int functions return Integer values (The same thing to float and double functions)
			int return42 () {
				std::cout << "This function only return the number 42" << std::endl;
				return 42;
			}

		// Bool functions return True or False
			bool isTrue () {
				std::cout << "This function only return True value" << std::endl;
				return true;
			}
	// With parameters

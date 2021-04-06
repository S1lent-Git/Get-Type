#include <iostream>
#include <boost/program_options.hpp>
#include "modules.h"

using namespace std;
namespace po = boost::program_options;

int main(int argc, char *argv[])
{
    if (argc > 2) {
        // Display basic help message and exit
        print_help(argv[0]);
    }
    else {
        try {
            // Init primary user options
            po::options_description desc("Main Option Stream");

            desc.add_options()
                ("help", "Display help (options) and exit.")
                ("type", po::value<string>(), "The type to get MIN and MAX (or BIT) of - i.e: 'int' or 'char' or 'float'");

            po::variables_map vmap;
            po::store(po::parse_command_line(argc, argv, desc), vmap);
            po::notify(vmap);

            if (vmap.count("help")) {
                // Display help and exit

            }
        }
        catch (const exception& ex) {
            cout << ex.what() << endl;
        }
    }
}


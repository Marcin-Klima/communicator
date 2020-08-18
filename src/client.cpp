#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include "ncurses.h"

using boost::asio::ip::tcp;

int main(int argc, char* argv[])
{
    try
    {
        boost::asio::io_service ioService;
        tcp::socket socket(ioService, tcp::endpoint(tcp::v4(), 50000));
        socket.connect(tcp::endpoint(boost::asio::ip::address_v4::loopback(), 1234));
        std::string string;

        while(1)
        {
            std::cout << "hello$$";
            std::cin >> string;

            if(string == "halt")
            {
                break;
            }
            else if(string == "xD")
            {

            }
            else if(string == "\n")
            {

            }
        }

        socket.close();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
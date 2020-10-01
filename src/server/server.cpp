#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main(int argc, char* argv[])
{
    try
    {
        boost::asio::io_service ioService;
        tcp::acceptor tcpAcceptor(ioService,  tcp::endpoint(tcp::v4(), 1234));
        tcp::socket socket(ioService);

        std::cout << "Waiting for the client to connect...\n";
        tcpAcceptor.accept(socket);
        std::cout << "Client has been connected from IP: " << socket.remote_endpoint().address().to_v4().to_string() << ":" <<socket.remote_endpoint().port() << "\n";

        while(1)
        {

        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
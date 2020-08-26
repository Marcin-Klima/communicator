#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
//#include "ncurses.h"
//
//using boost::asio::ip::tcp;
//
//int main(int argc, char* argv[])
//{
//    try
//    {
//        boost::asio::io_service ioService;
//        tcp::socket socket(ioService, tcp::endpoint(tcp::v4(), 50000));
//        socket.connect(tcp::endpoint(boost::asio::ip::address_v4::loopback(), 1234));
//        std::string string;
//
//        while(1)
//        {
//            std::cout << "hello$$";
//            std::cin >> string;
//
//            if(string == "halt")
//            {
//                break;
//            }
//            else if(string == "xD")
//            {
//
//            }
//            else if(string == "\n")
//            {
//
//            }
//        }
//
//        socket.close();
//    }
//    catch (std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//    }
//
//    return 0;
//}

#include <cppurses/cppurses.hpp>

using namespace cppurses;

class MainWidget final : public layout::Vertical
{
public:
    explicit MainWidget( System & system ) : system_( system )
    {
    }

    bool key_press_event( const Key::State & keyboard ) override
    {
	    if ( keyboard.key == Key::W )
	    {
		    for ( auto child : children.get_descendants())
		    {
			    child->close();
		    }
		    close();
		    system_.exit( 1 );
	    }

	    return true;
    }

private:
    System & system_;
};

class MessageBox final : public Textbox
{
public:
    MessageBox( System & sys ) : system_( sys )
    {
	    height_policy.max_size( 10 );
	    brush.set_background( Color::Red );
	    brush.set_foreground( Color::Black );
	    set_contents( "Type your message here..." );
    }

protected:
    bool key_press_event( const Key::State & keyboard ) override
    {
	    if ( keyboard.key == Key::Q )
	    {
//            set_contents("***** ***");
		    system_.exit( 0 );
	    }
	    return true;
    }

protected:
    bool mouse_press_event( const Mouse::State & mouse ) override
    {
	    set_contents( "XDDDDDD" );
	    return Textbox::mouse_press_event( mouse );
    }

private:
    System & system_;
};

int main()
{
	System sys;

	Glyph_string greeting{"Message", cppurses::Attribute::Underline};

	MainWidget verticalLayout( sys );
	verticalLayout.border.enable();

	auto & chatHistoryBox( verticalLayout.make_child<Textbox>());
	chatHistoryBox.brush.set_background( Color::Black );
	chatHistoryBox.brush.set_foreground( Color::White );
	chatHistoryBox.disable_input();

	auto & messageBox( verticalLayout.make_child<MessageBox>( sys ));

	return sys.run( verticalLayout );
}

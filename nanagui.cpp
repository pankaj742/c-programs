#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/button.hpp>

int main()
{
     using namespace nana;
     form fm;                   // The form is a window with title bar and a sizable border frame, 
     fm.caption("Hello World");
     button btn(fm, nana::rectangle(20, 20, 150, 30));
     btn.caption("Quit");
     btn.events().click(API::exit);  // API::exit is a function that is triggered on click
     fm.show();
     exec();
     return 0;
}

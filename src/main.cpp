#include <iostream>
#include <map>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include "presets.hpp"

 using namespace ftxui;

auto main(int argc, char* argv[]) -> int {
  auto logo_box = [&] {
    auto content = vbox({
      bitcoin() | color(Color::Gold1)
    });
    return content;
  };

  auto details_box = [&]() {
    auto content = vbox({
      paragraphAlignCenter("THE DETAILS ABOUT THE CURRENCY") | size(HEIGHT, GREATER_THAN, 500)
    });

    return bitcoin_details();
  };

  auto document = hbox({
    logo_box(),
    details_box()
  });

  auto screen = Screen::Create(Dimension::Fit(document), Dimension::Fit(document));
  Render(screen, document);

  std::cout << "\n\n";

  screen.Print();

  std::cout << "\n\n";
  return EXIT_SUCCESS;
}

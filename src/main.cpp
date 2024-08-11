#include <iostream>
#include <map>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include "presets.hpp"
#include <exception>
#include <optional>

 using namespace ftxui;

static auto screen(const std::optional<CoinDetails> inputCoin) { 

    Screen screen{0, 0};
    Element document;
    
    if (inputCoin.has_value()) {
        auto logo_box = [&] {
        auto content = vbox({
          std::get<0>(inputCoin.value())() | bold | color(std::get<2>(inputCoin.value()))
        });
        return content;
      };

      auto details_box = [&]() {
        return std::get<1>(inputCoin.value())();
      };

      document = hbox({
        logo_box(),
        details_box()
      });

      screen = Screen::Create(Dimension::Fit(document), Dimension::Fit(document));
    } else {
      document = hbox({
        paragraphAlignCenter("Currency not supported yet, please open a PR to add it.") | color(Color::Yellow3Bis)
      });
      screen = Screen::Create(Dimension::Fit(document), Dimension::Fit(document));
    }

  std::cout << "\n\n";
  Render(screen, document);
  screen.Print();

  std::cout << "\n\n";
}


static auto displayHelp() {

}

auto main(int argc, char* argv[]) -> int {
  
  if (argc > 0) {
    const auto currency = argv[1];
    if (coins.find(currency) != coins.end()) {
        screen(coins.at(currency));
    } else {
      screen(std::nullopt);
    }
  } else {
    displayHelp();
  }


  return EXIT_SUCCESS;
}

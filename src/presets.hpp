#pragma once 

#include <utility>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/dom/table.hpp>

using namespace ftxui;

static auto bitcoin() {
return vbox({       hbox({text(L"                                ================                                      ")}),
                    hbox({text(L"                          ============================                                ")}),
                    hbox({text(L"                      ====================================                            ")}),
                    hbox({text(L"                    ==========================================                         ")}),
                    hbox({text(L"                  ==============================================                       ")}),
                    hbox({text(L"                ==================================================                     ")}),
                    hbox({text(L"              ======================================================                   ")}),
                    hbox({text(L"            ===========================    ===========================                 ")}),
                    hbox({text(L"          ============================    ====    ====================                ")}),
                    hbox({text(L"        =============================     ===    ======================               ")}),
                    hbox({text(L"        =====================        =    ====    ========================             ")}),
                    hbox({text(L"      ======================                    ==========================            ")}),
                    hbox({text(L"      ==========================                  ========================            ")}),
                    hbox({text(L"      ===========================                     ======================           ")}),
                    hbox({text(L"    ============================       ======          =====================          ")}),
                    hbox({text(L"    ===========================        =========        ====================          ")}),
                    hbox({text(L"    ===========================       :=========        ====================          ")}),
                    hbox({text(L"    ============================       ==========        =====================         ")}),
                    hbox({text(L"    ===========================            ====          =====================         ")}),
                    hbox({text(L"    ===========================                        =======================         ")}),
                    hbox({text(L"    ==========================        ==             =========================         ")}),
                    hbox({text(L"    ==========================       ========          =======================         ")}),
                    hbox({text(L"    =========================        ==========.        ======================         ")}),
                    hbox({text(L"    ========================       ============         ====================          ")}),
                    hbox({text(L"    ==================             ============        =====================          ")}),
                    hbox({text(L"    =================                 =======          =====================          ")}),
                    hbox({text(L"      ====================                             =====================           ")}),
                    hbox({text(L"      =======================                        =====================            ")}),
                    hbox({text(L"      =======================    ===              :=======================            ")}),
                    hbox({text(L"        =====================    ====    =================================             ")}),
                    hbox({text(L"          ===================    ===     ================================              ")}),
                    hbox({text(L"          =========================    ===============================                ")}),
                    hbox({text(L"            ==========================================================                 ")}),
                    hbox({text(L"              ======================================================                   ")}),
                    hbox({text(L"                ==================================================                     ")}),
                    hbox({text(L"                  ==============================================                       ")}),
                    hbox({text(L"                    ==========================================                         ")}),
                    hbox({text(L"                      ====================================                            ")}),
                    hbox({text(L"                          ============================                                ")}),
                    hbox({text(L"                                ================                                      ")}),

    });

}


static auto bitcoin_details() {
    auto table =  Table({
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text("Name") | color(Color::Gold3Bis),                     text("          Bitcoin")},
        {text(""),                                                  text("")},
        {text("Symbol") | color(Color::Gold3Bis),                   text("          BTC")},
        {text(""),                                                  text("")},
        {text("Max Supply") | color(Color::Gold3Bis),               text("          21.000.000")},
        {text(""),                                                  text("")},
        {text("Creation") | color(Color::Gold3Bis),                 text("          2010")},
        {text(""),                                                  text("")},
        {text("Consensus Algorithm") | color(Color::Gold3Bis),      text("          Proof Of Work (PoW)")},
        {text(""),                                                  text("")},
        {text("Creator") | color(Color::Gold3Bis),                  text("          Satoshi Nakamoto")},
        {text(""),                                                  text("")},
        {text("Whitepaper") | color(Color::Gold3Bis),               text("          https://bitcoin.org/whitepaper.pdf")},
        {text(""),                                                  text("")},
        {text("Explorer") | color(Color::Gold3Bis),                 text("          https://mempool.space")},
        {text(""),                                                  text("")},
        {text("Source") | color(Color::Gold3Bis),                   text("          https://github.com/bitcoin/bitcoin")},
        {text(""),                                                  text("")},
        {text("Block Reward") | color(Color::Gold3Bis),             text("          3.5 BTC")},
        {text(""),                                                  text("")},
        {text("Genesis Block") | color(Color::Gold3Bis),            text("          000000000019d6689c085ae165831e934ff763ae46a2a6c172b3f1b60a8ce26f")}
    });

    table.SelectColumns(0, -1).Decorate(bold);
    return table.Render();
}


using CoinDetails = std::pair<std::function<Element(void)>, std::function<Element(void)>>;

std::map<std::string, CoinDetails> coins{
  std::make_pair("bitcoin", std::make_pair(&bitcoin, &bitcoin_details))
 };

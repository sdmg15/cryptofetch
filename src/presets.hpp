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

static auto ethereum() {
    return vbox({

                    hbox({text(L"                            +================+                              ")}),
                    hbox({text(L"                        *============================*                        ")}),
                    hbox({text(L"                    *====================================*                    ")}),
                    hbox({text(L"                  ==========================================*                 ")}),
                    hbox({text(L"               *=======================::=====================*               ")}),
                    hbox({text(L"             +========================: ::======================+             ")}),
                    hbox({text(L"           *=========================.  :::=======================*           ")}),
                    hbox({text(L"          ==========================.   ::::========================          ")}),
                    hbox({text(L"        *==========================     :::::-=======================*        ")}),
                    hbox({text(L"       *==========================      ::::::-=======================*       ")}),
                    hbox({text(L"      *=========================-       ::::::::=======================*      ")}),
                    hbox({text(L"     *=========================-        :::::::::=======================*     ")}),
                    hbox({text(L"     ++=======================:         ::::::::::=====================++     ")}),
                    hbox({text(L"    +=+======================:          :::::::::::====================+=+    ")}),
                    hbox({text(L"   *++======================.           ::::::::::::====================++*   ")}),
                    hbox({text(L"   +++==================+=+.            :::::::::::::=+===============+=+++   ")}),
                    hbox({text(L"  @+++=+=++++=+=+=+=+=+=+=          ::::====::::::::::-+++=+=+=+=+=+=+==+++@  ")}),
                    hbox({text(L"  *++++=+===+=++=+=+=+++=       ::::::::========-::::::-+=+=+=+=+=+=+=+++++*  ")}),
                    hbox({text(L"  *++++++++++++++++++++-   .::::::::::::============-::::+++++++++++++=++++*  ")}),
                    hbox({text(L"  *+++++++++++++++++++-.::::::::::::::::================-:=+++++++++++++++++  ")}),
                    hbox({text(L"  *++++++++++++++++++++=::::::::::::::::=================++++++++++++++++++*  ")}),
                    hbox({text(L"  *+++++++++++++++++++++++=:::::::::::::==============+++++++++++++++++++++*  ")}),
                    hbox({text(L"  %+++++++++++++++++++= =+++++::::::::::===========+++++-=+++++++++++++++++%  ")}),
                    hbox({text(L"  @*++++++++++++++++++++.  =+++*+-::::::=======++++++-::=+++++++++++++++++*@  ")}),
                    hbox({text(L"   #*+++++++++++++++++++*-    -+++*+=:::====+*++++:::::+++++++++++++++++***   ")}),
                    hbox({text(L"   %**+++++++++++++++++++*+      :=+*+*==+*+++=::::::=+++++++++++++++++*+*%   ")}),
                    hbox({text(L"    %**+++++++++++++++++++**:       :=+*+*+=::::::::=*++++++++++++++++***%    ")}),
                    hbox({text(L"    @***+*++*++++++++++++++**-         .=::::::::::**+*+*++++++++++++****@    ")}),
                    hbox({text(L"     @***+*++*+*+*+*+*+*+*+*+*=         :::::::::=**+*+*+*+*+*+*+*+*****@     ")}),
                    hbox({text(L"      @*************+***********:       ::::::::+******+*+*+***********@      ")}),
                    hbox({text(L"       @*****+*+*+****+*+*+******=      ::::::-*****+********+*+*+****@       ")}),
                    hbox({text(L"        @%************************+.    :::::=**********************%@        ")}),
                    hbox({text(L"          @*************************:   ::::+**********************@@         ")}),
                    hbox({text(L"           @@************************=  ::-**********************%@           ")}),
                    hbox({text(L"             @%***********************+ :=*********************%@             ")}),
                    hbox({text(L"               @%********************************************%@               ")}),
                    hbox({text(L"                 @@%**************************************%@@                 ")}),
                    hbox({text(L"                    @@%#******************************#%@@                    ")}),
                    hbox({text(L"                       @@@@%#********************#%@@@@                       ")}),
                    hbox({text(L"                            @@@@@@@%%%%%%%%@@@@@@@                            ")}),
                                                                                                
    });

}

static auto eth_details() {
        auto table =  Table({
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text(""),                                                  text("")},
        {text("Name") | color(Color::BlueLight),                     text("          Ethereum")},
        {text(""),                                                  text("")},
        {text("Symbol") | color(Color::BlueLight),                   text("          ETH")},
        {text(""),                                                  text("")},
        {text("Max Supply") | color(Color::BlueLight),               text("          N/A")},
        {text(""),                                                  text("")},
        {text("Creation") | color(Color::BlueLight),                 text("          2014")},
        {text(""),                                                  text("")},
        {text("Consensus Algorithm") | color(Color::BlueLight),      text("          Proof Of Stake (PoS)")},
        {text(""),                                                  text("")},
        {text("Creator") | color(Color::BlueLight),                  text("          Vitalik Buterin")},
        {text(""),                                                  text("")},
        {text("Whitepaper") | color(Color::BlueLight),               text("          https://ethereum.org/en/whitepaper/")},
        {text(""),                                                  text("")},
        {text("Explorer") | color(Color::BlueLight),                 text("          https://etherscan.com")},
        {text(""),                                                  text("")},
        {text("Source") | color(Color::BlueLight),                   text("          https://github.com/ethereum/go-ethereum")},
        {text(""),                                                  text("")},
        {text("Block Reward") | color(Color::BlueLight),             text("          Sum of Transaction fees")},
        {text(""),                                                  text("")},
        {text("Genesis Block") | color(Color::BlueLight),            text("          https://etherscan.io/block/0")}
    });

    table.SelectColumns(0, -1).Decorate(bold);
    return table.Render();   
}

using Logo = std::function<Element(void)>;
using Details = std::function<Element(void)>;
using LogoColor = Color; 
using CoinDetails = std::tuple<Logo, Details, LogoColor>;

const std::map<std::string, CoinDetails> coins{
  std::make_pair("bitcoin", std::make_tuple(&bitcoin, &bitcoin_details, Color::Gold3Bis)),
  std::make_pair("ethereum", std::make_tuple(&ethereum, &eth_details, Color::BlueLight))
 };

#include<future>
#include "execution.h"
#include "/home/leannejd/Dev/bitwyre/sdk/cpp/source/rest/public/Market.hpp"
struct Interface{
    std::future<void> get_balances() {
        return 1.0;
    };
    std::future<void> get_market_price(const std::string);
    std::future<void> place_sell_order(const std::string);
    std::future<void> place_buy_order(const std::string);
};
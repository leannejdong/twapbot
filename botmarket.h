#include<future>
#include "execution.h"
#include "bitwyresdk/rest/public/Market.hpp"
#include "bitwyresdk/source/details/Config.hpp"
struct botmarket{
    virtual std::future<double> get_balances() = 0;
    // virtual std::future<void> get_market_price(const std::string) = 0;
    // virtual std::future<void> place_sell_order(const std::string) = 0;
    // virtual std::future<void> place_buy_order(const std::string) = 0;
};

struct botA : botmarket{
    // static double square(double x){
    //     return x*x;
    // }

    Config conf1;

    std::future<double> get_balances() 
    {
        //return std::async(&square, 2.0);
        // return std::async(std::launch::async, []{ return 8.00;});
        return std::async(&conf1.config)
    }


};
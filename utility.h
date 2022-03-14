#include<string>
#include<iostream>
#include<sstream>
#include "bitwyresdk/rest/public/Asset.hpp"

std::ostream& operator<<(std::ostream& os, const AssetElement& assetelem) {
    return os << "Asset: " << assetelem.asset << "\n"
              << "URL: " << assetelem.iconUrl << "\n"
              << "Name: " << assetelem.name << "\n"
              << "Precision: " << assetelem.precision << "\n"
              << "LocalEquivalent: " << assetelem.localEquivalent << "\n"
              << "BtcEquivalent: " << assetelem.btcEquivalent << "\n"
              << "WithdrawalFee: " << assetelem.withdrawalFee << "\n"
              << "MinWithdrawal: " << assetelem.minWithdrawal << "\n"
              << "MaxWithdrawal: " << assetelem.maxWithdrawal << "\n"
              << "Is Deposit Enabled? " << assetelem.isDepositEnabled << "\n"
              << "Is Trading Enabled? " << assetelem.isTradingEnabled << "\n"
              << "Is Withdrawal Enabled? " << assetelem.isWithdrawEnabled << "\n";

}

// https://compiler-explorer.com/z/GKhKT7srq


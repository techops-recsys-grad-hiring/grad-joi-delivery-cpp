#ifndef LOYALTY_TIER_H
#define LOYALTY_TIER_H

#include <iostream>

enum class LoyaltyTier {
    DIAMOND = 10,
    GOLD = 5,
    SILVER = 3
};

// Helper function to get discount value
inline int getDiscount(LoyaltyTier tier) {
    return static_cast<int>(tier);
}

#endif // LOYALTY_TIER_H

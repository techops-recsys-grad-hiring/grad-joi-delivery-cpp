#pragma once

enum class LoyaltyTier { DIAMOND, GOLD, SILVER };

// Helper function to get discount value
[[nodiscard]] inline constexpr int getDiscount(const LoyaltyTier tier) noexcept {
  switch (tier) {
    case LoyaltyTier::DIAMOND:
      return 10;
    case LoyaltyTier::GOLD:
      return 5;
    case LoyaltyTier::SILVER:
      return 3;
  }

  return 0;
}

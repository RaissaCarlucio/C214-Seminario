#include <gtest/gtest.h>
#include "main.h"

TEST(CharacterTest, HealthInitialization) {
    Character character;
    EXPECT_EQ(character.getHealth(), 100);
}

#include <gtest/gtest.h>
#include "../inc/Game.hpp"

struct GameTests : public ::testing::Test
{
    Game game;
};

TEST_F(GameTests, check_initial_name)
{
    ASSERT_EQ("", game.getName());
}

TEST_F(GameTests, set_name_to_Adam)
{
    game.setName("Adam");
    ASSERT_EQ("Adam", game.getName());
}


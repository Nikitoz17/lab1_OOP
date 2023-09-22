#include <gtest/gtest.h>
#include <lib.h>

TEST(ExampleOfStandartUsageTest1, BasicAssertions) {
  // arrange 
  int upSpeed = 100;
  int downSpeed = 10;
  int desigredHeight = 910;

  // act
  int res = calc_day(upSpeed, downSpeed, desigredHeight);

  // assert
  EXPECT_EQ(res, 10);
}

TEST(ExampleOfStandartUsageTest2, BasicAssertions) {
  // arrange 
  int upSpeed = 150;
  int downSpeed = 5;
  int desigredHeight = 725;

  // act
  int res = calc_day(upSpeed, downSpeed, desigredHeight);

  // assert
  EXPECT_EQ(res, 5);
}

TEST(ExampleOfStandartUsageTest3, BasicAssertions) {
  // arrange 
  int upSpeed = 25;
  int downSpeed = 10;
  int desigredHeight = 55;

  // act
  int res = calc_day(upSpeed, downSpeed, desigredHeight);

  // assert
  EXPECT_EQ(res, 3);
}
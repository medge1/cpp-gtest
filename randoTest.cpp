/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, firstChildSmile)
{
	Rando rando;
        ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}

TEST(RandoTest, middleChildSmile)
{
	Rando rando;
        ASSERT_TRUE( rando.shouldWorry(false,true,false) );
}

TEST(RandoTest, lastChildSmile)
{
	Rando rando;
        ASSERT_TRUE( rando.shouldWorry(false,false,true) );
}

TEST(RandoTest, firstTwoChildrenSmile)
{
	Rando rando;
        ASSERT_FALSE( rando.shouldWorry(true,true,false) );
}       

TEST(RandoTest, lastTwoChildrenSmile)
{
	Rando rando;
        ASSERT_FALSE( rando.shouldWorry(false,true,true) );
}

TEST(RandoTest, outsideChildrenSmile)
{
	Rando rando;
        ASSERT_FALSE( rando.shouldWorry(true,false,true) );
}

TEST(RandoTest, noChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
}
 
TEST(RandoTest, isDivisable)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisibleBy(8,2) );
}

TEST(RandoTest, isNotDivisable)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisibleBy(5,2) );
}

TEST(RandoTest, isPrime)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(5) );
}

TEST(RandoTest, isNotPrime)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(6) );
}

TEST(RandoTest, aIsNearest)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(2, 3)), 2 );
}

TEST(RandoTest, bIsNearest)
{
	Rando rando;
	ASSERT_EQ( (rando.nearestToZero(-6, 2)), 2 );
}

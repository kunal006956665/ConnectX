/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"
 
class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest, ConscCheck0)
{
	ConnectX obj(-1,2,-3);
}

TEST(ConnectXTest, ConscCheck)
{
	ConnectX obj(10,12,13);
}

TEST(ConnectXTest, ConscCheck1)
{
	ConnectX obj(1,-20,3);
}

TEST(ConnectXTest, ConscCheck2)
{
	ConnectX obj(1,20,-30);
}

TEST(ConnectXTest, ConscCheck3)
{
	ConnectX obj(-0.1,2,3);
}


TEST(ConnectXTest, placePiece2)
{
	ConnectX obj;
	obj.placePiece(5);
	obj.placePiece(5);
	obj.showBoard();
}

TEST(ConnectXTest, placePiece3)
{
	ConnectX obj;
	obj.placePiece(2);
	obj.placePiece(3);
	obj.placePiece(1);
	obj.placePiece(4);
	obj.placePiece(6);
	obj.placePiece(112);
	obj.showBoard();
}

TEST(ConnectXTest, CheckATWithNegavtive1)
{
	ConnectX obj;
	ASSERT_EQ(-1, obj.at(1,-3));
}

TEST(ConnectXTest, CheckATWithBothNegavtive)
{
	ConnectX obj;	
	ASSERT_EQ(-1, obj.at(-11,-3));
}

TEST(ConnectXTest, CheckATWith1stNegavtive)
{
	ConnectX obj;	
	ASSERT_FALSE(obj.at(-1,3));
}

TEST(ConnectXTest, CheckATWithBothPositive)
{
	ConnectX obj;
	bool ret;
	ret = obj.at(10,13);
	ASSERT_TRUE(ret);
}

TEST(ConnectXTest, CheckATOutofBound)
{
	ConnectX obj;
	bool ret;
	ret = obj.at(22231, 12121);
	ASSERT_TRUE(ret);
}

TEST(ConnectXTest, placePieceNegativeValue)
{
	ConnectX obj;
	obj.placePiece(-3);
	obj.showBoard();
}


TEST(ConnectXTest, placePieceOutOfBound)
{
	ConnectX obj;
	obj.placePiece(10);
	obj.showBoard();
}

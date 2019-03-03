#include "../add_two_ints_server.cpp"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;
TEST(addTwoIntsServer, normal){
	cout << "testCase1 "; // 输出 testCase1
	EXPECT_EQ(6, add(1,5));
    	EXPECT_EQ(-2, add(-1,-1));
	EXPECT_EQ(0, add(-1,1));
   	 EXPECT_EQ(1, add(9,-8));
}

TEST(addTwoIntsServer, zero){
	 cout << "testCase2 "; // 输出 testCase2
	EXPECT_EQ(0, add(0,0));
	EXPECT_EQ(1, add(0,1));
	EXPECT_EQ(-1, add(-1,0));
}

TEST(addTwoIntsServer, wrong){
	 cout << "testCase3 "; // 输出 testCase3
	EXPECT_EQ(NULL, add(a,b));
        EXPECT_EQ(NULL, add(0.1,1));
        EXPECT_EQ(99, add(99,0.2));
	EXPECT_EQ(NULL, add(a,1));
        EXPECT_EQ(NULL, add(1,z));
        EXPECT_EQ(NULL, add(+,-));
}




int main(int argc, char **argv){

	::testing::InitGoogleTest(&argc, argv);
   	 return RUN_ALL_TESTS();

}

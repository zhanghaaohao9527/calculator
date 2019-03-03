#include "../add_two_ints_server.cpp"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;
TEST(addTwoIntsServer, testCase1){
	cout << "testCase1 "; // 输出 testCase1
}

TEST(addTwoIntsServer, testCase2){
	 cout << "testCase2 "; // 输出 testCase2

}

TEST(addTwoIntsServer, testCase3){
	 cout << "testCase3 "; // 输出 testCase3

}

TEST(addTwoIntsServer, testCase4){
         cout << "testCase4 "; // 输出 testCase4

}

TEST(addTwoIntsServer, testCase5){
         cout << "testCase5 "; // 输出 testCase5

}



TEST(addTwoIntsServer, badInput){
  //TODO - figure out what good error behavior is and test for it properly
  //EXPECT_EQ(0, meval::EvaluateMathExpression("4.1.3 - 4.1"));
  //EXPECT_EQ(0, meval::EvaluateMathExpression("4.1.3"));
}
int main(int argc, char **argv){

	::testing::InitGoogleTest(&argc, argv);
//    	ros::init(argc, argv, "test_talker");
  // 	 ros::NodeHandle nh;
   	 return RUN_ALL_TESTS();

}

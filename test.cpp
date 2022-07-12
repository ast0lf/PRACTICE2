#include "pch.h"
#include "../PRACTICE2/func.h"

int ptr[900] = {0};

TEST(input, input_arr) {
  EXPECT_EQ(InputArray(ptr), 0);
  
}

TEST(Sort, sortarr){
	EXPECT_EQ(SortArr(ptr), 0);
}

TEST(OUT, outarr) {
	EXPECT_EQ(OutArr(ptr), 0);
}

TEST(COMPAR, Compar_arr) {
	EXPECT_EQ(ComparArr(ptr), 0);
}
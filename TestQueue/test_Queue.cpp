#include "gtest.h"
#include "../lab4/Tqueue.h"

TEST(Tqueue, can_create_queue_with_positive_size) {
	ASSERT_NO_THROW(Tqueue<int> n(5));
}

TEST(Tqueue, cant_create_stack_with_negative_size) {
	ASSERT_ANY_THROW(Tqueue<int> n(-2));
}

TEST(Tqueue, after_create_queue_empty) {
	Tqueue<int> n(2);
	
	
	EXPECT_EQ(true,n.Empty());
}
TEST(Tqueue, can_pop_from_notEmpty_queue) {
	Tqueue<int> n(2);
	n.Push(1);
	

	ASSERT_NO_THROW( n.Pop());
}
TEST(Tqueue, cant_pop_empty_queue) {
	Tqueue<int> n(2);
	
	ASSERT_ANY_THROW(n.Pop());
}

TEST(Tqueue, can_push_notfull_queue) {
	Tqueue<int> n(2);
	n.Push(1);
	
	ASSERT_NO_THROW(n.Push(5));
}
TEST(Tqueue, cant_push_full_stack) {
	Tqueue<int> n(2);
	n.Push(1);
	n.Push(1);
	
	ASSERT_ANY_THROW(n.Push(5));
}


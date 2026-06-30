#include <gtest/gtest.h>
#include "helios/engine.h"

using namespace helios;

TEST(EngineTest, InitializationWorks)
{
	Engine e;
	EXPECT_NO_THROW(e.initialize());
}

TEST(EngineLifecycle, InitialStateIsUninitialized)
{
	Engine e;
	EXPECT_EQ(e.getState(), EngineState::Uninitialized);
}

TEST(EngineLifecycle, ValidLifecycleFlow)
{
	Engine e;

	EXPECT_TRUE(e.initialize());
	EXPECT_TRUE(e.start());
	EXPECT_TRUE(e.stop());
	EXPECT_TRUE(e.shutdown());

	EXPECT_EQ(e.getState(), EngineState::Shutdown);
}

TEST(EngineLifecycle, CannotStartBeforeInitialize)
{
	Engine e;

	EXPECT_FALSE(e.start());
	EXPECT_EQ(e.getState(), EngineState::Uninitialized);
}

TEST(EngineLifecycle, CannotStopBeforeStart)
{
	Engine e;

	EXPECT_TRUE(e.initialize());
	EXPECT_FALSE(e.stop());
}

TEST(EngineLifecycle, CannotReinitialize)
{
	Engine e;

	EXPECT_TRUE(e.initialize());
	EXPECT_FALSE(e.initialize());
}

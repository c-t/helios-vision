#include <gtest/gtest.h>
#include "helios/engine.h"

TEST(EngineTest, InitializationWorks)
{
	helios::Engine engine;

	EXPECT_NO_THROW(
			engine.initialize()
		       );
}

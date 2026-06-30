#pragma once

namespace helios
{
	enum class EngineState
	{
		Uninitialized,
		Initialized,
		Running,
		Stopped,
		Shutdown
	};

	class Engine{
		public:
			Engine();

			bool initialize();
			bool start();
			bool stop();
			bool shutdown();

			EngineState getState() const;
		
		private:
			EngineState m_state;
	};
}

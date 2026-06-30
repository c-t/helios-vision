#include "helios/engine.h"
#include <iostream>

namespace helios
{
	Engine::Engine()
		: m_state(EngineState::Uninitialized)
	{
	}

	EngineState Engine::getState() const
	{
		return m_state;
	}

	bool Engine::initialize()
	{
		if(m_state != EngineState::Uninitialized)
			return false;

		m_state = EngineState::Initialized;
		return true;
	}

	bool Engine::start()
	{
		if(m_state != EngineState::Initialized)
			return false;

		m_state = EngineState::Running;
		return true;
	}

	bool Engine::stop()
	{
		if(m_state != EngineState::Running)
			return false;

		m_state = EngineState::Stopped;
		return true;
	}

	bool Engine::shutdown()
	{
		if(m_state != EngineState::Stopped &&
				m_state != EngineState::Initialized)
			return false;

		m_state = EngineState::Shutdown;
		return true;
	}
}

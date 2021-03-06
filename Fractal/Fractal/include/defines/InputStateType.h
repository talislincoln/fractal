#ifndef INPUTSTATETYPE_H
#define INPUTSTATETYPE_H

namespace fractal {
	enum class InputStateType {
		PRESSED,
		RELEASED,
		DOWN,
		UP,
		MOUSE_MOTION,
		MOUSE_PRESSED,
		MOUSE_RELEASED,
		MOUSE_DOWN,
		MOUSE_UP,
		MOUSE_CLICK,
		MOUSE_DOUBLECLICK
	};
}


#endif // !INPUTSTATETYPE_H

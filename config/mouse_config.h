//////////////////////////////////////////////////////////////////////////
//
// Mouse keys (keyboard mouse control) requires v24.12 firmware or newer:
// override the "HID_POINTING" setting to "y" in Advanced Configuration
//////////////////////////////////////////////////////////////////////////

// TODO: scaling not migrated here
// TODO: this is a good candidate for the zmk-keymap-utils module

//
// NATURAL_SCROLLING reverses the directionality of the mouse scroll wheel
// to support "natural scrolling" in macOS and other desktop environments.
//
//#define NATURAL_SCROLLING

// difference w.r.t. Sunaku's -> names differ
#ifdef NATURAL_SCROLLING
  #define _SCRL_UP    SCRL_DOWN
  #define _SCRL_DOWN  SCRL_UP
  #define _SCRL_LEFT  SCRL_RIGHT
  #define _SCRL_RIGHT SCRL_LEFT
#else
  #define _SCRL_UP    SCRL_UP
  #define _SCRL_DOWN  SCRL_DOWN
  #define _SCRL_LEFT  SCRL_LEFT
  #define _SCRL_RIGHT SCRL_RIGHT
#endif

//
// MOUSE_MOTION_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_MOTION_DELAY
#define MOUSE_MOTION_DELAY 0
#endif

//
// MOUSE_MOTION_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_MOTION_ACCELERATION_EXPONENT
#define MOUSE_MOTION_ACCELERATION_EXPONENT 1
#endif

//
// MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED
#define MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_MOTION_MAXIMUM_SPEED defines how quickly the mouse pointer can move.
//
#ifndef MOUSE_MOTION_MAXIMUM_SPEED
#define MOUSE_MOTION_MAXIMUM_SPEED 600
#endif

//
// MOUSE_SCROLL_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_SCROLL_DELAY
#define MOUSE_SCROLL_DELAY 0
#endif

//
// MOUSE_SCROLL_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_SCROLL_ACCELERATION_EXPONENT
#define MOUSE_SCROLL_ACCELERATION_EXPONENT 0
#endif

//
// MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED
#define MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_SCROLL_MAXIMUM_SPEED defines how quickly the mouse wheel can scroll.
//
#ifndef MOUSE_SCROLL_MAXIMUM_SPEED
#define MOUSE_SCROLL_MAXIMUM_SPEED 10
#endif

// ==== MOUSE-KEY <section begins> ====
#define ZMK_POINTING_DEFAULT_MOVE_VAL MOUSE_MOTION_MAXIMUM_SPEED
#define ZMK_POINTING_DEFAULT_SCRL_VAL MOUSE_SCROLL_MAXIMUM_SPEED
#include <dt-bindings/zmk/pointing.h>
&mmv {
    delay-ms = <MOUSE_MOTION_DELAY>;
    acceleration-exponent = <MOUSE_MOTION_ACCELERATION_EXPONENT>;
    time-to-max-speed-ms = <MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED>;
};
&msc {
    delay-ms = <MOUSE_SCROLL_DELAY>;
    acceleration-exponent = <MOUSE_SCROLL_ACCELERATION_EXPONENT>;
    time-to-max-speed-ms = <MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED>;
};
// TODO: scaling not implemented
// ==== MOUSE-KEY <section ends> =====
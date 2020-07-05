/*** Copyright (C) 2019-2020 ZaidaTek and Andreas Riebesehl
**** This work is licensed under: Creative Commons Attribution-NoDerivatives 4.0 International Public License
**** For full license text, please visit: https://creativecommons.org/licenses/by-nd/4.0/legalcode
***/
#ifndef ZDX_DEFINE_H_INCLUDED
#define ZDX_DEFINE_H_INCLUDED

#define ZDX_FLAG_NONE 0x0
#define ZDX_TYPE_NONE 0x0

#define ZDX_RUNTIME_TYPE_WINDOWS 0x1
#define ZDX_RUNTIME_WINDOWS_SERIAL_SLEEP 3000
#define ZDX_RUNTIME_WINDOWS_SERIAL_BUFFER 1048576

#define ZDX_INTERFACE_TYPE_NONE ZDX_TYPE_NONE
#define ZDX_INTERFACE_TYPE_SERIAL 0x1
#define ZDX_INTERFACE_SERIAL_BAUD 2000000
#define ZDX_INTERFACE_SERIAL_BUFFER 65536
#define ZDX_INTERFACE_SERIAL_HEADER 0x800000
#define ZDX_INTERFACE_SERIAL_INDEX 0x400000
#define ZDX_INTERFACE_SERIAL_FLAG_RX 0x3fffff

#define ZDX_CHANNEL_TYPE_NONE ZDX_TYPE_NONE
#define ZDX_CHANNEL_TYPE_ANALOG_IN 0x1000
#define ZDX_CHANNEL_TYPE_ANALOG_OUT 0x2000
#define ZDX_CHANNEL_TYPE_DIGITAL_IN 0x4000
#define ZDX_CHANNEL_TYPE_DIGITAL_OUT 0x8000
#define ZDX_CHANNEL_SPEED_NONE 0
#define ZDX_CHANNEL_CONFIG_NONE 0x0
#define ZDX_CHANNEL_RESOLUTION_NONE 0
#define ZDX_CHANNEL_AT328P_TYPES (ZDX_CHANNEL_TYPE_ANALOG_IN | ZDX_CHANNEL_TYPE_DIGITAL_OUT)
#define ZDX_CHANNEL_AT328P_MAXSPEED 10000000
#define ZDX_CHANNEL_AT328P_MINSPEED 100
#define ZDX_CHANNEL_AT328P_MASK 0xff
#define ZDX_CHANNEL_AT328P_RESOLUTION 10

#define ZDX_DEVICE_FLAG_UNBUFFERED 0x1
#define ZDX_DEVICE_TYPE_AT328P 0x100

#define ZDX_DIAGRAM_FLAG_TRIGGER 0x1
#define ZDX_DIAGRAM_FLAG_CURSOR_DATA 0x2
#define ZDX_DIAGRAM_FLAG_GRID 0x4
#define ZDX_DIAGRAM_FLAG_GRIDREF_DATA 0x8
#define ZDX_DIAGRAM_COLOR_PLOT_1 0xffffff00
#define ZDX_DIAGRAM_COLOR_PLOT_2 0xff0080ff
#define ZDX_DIAGRAM_COLOR_PLOT_3 0xffff0000
#define ZDX_DIAGRAM_COLOR_PLOT_4 0xff00ff00
#define ZDX_DIAGRAM_COLOR_PLOT_5 0xffff8000
#define ZDX_DIAGRAM_COLOR_PLOT_6 0xffffffff
#define ZDX_DIAGRAM_COLOR_PLOT_7 0xff004000
#define ZDX_DIAGRAM_COLOR_PLOT_8 0xff400080
#define ZDX_DIAGRAM_COLOR_PLOTS 8
#define ZDX_DIAGRAM_COLOR_BACKGROUND 0xff000000
#define ZDX_DIAGRAM_COLOR_TRIGGER 0xffffffff
#define ZDX_DIAGRAM_COLOR_CURSOR_DATA 0xff800000
#define ZDX_DIAGRAM_COLOR_CURSOR_FIRST 0xffbfbfbf
#define ZDX_DIAGRAM_COLOR_CURSOR_SECOND 0xffbfbfbf
#define ZDX_DIAGRAM_COLOR_GRID_MAJOR 0xff303030
#define ZDX_DIAGRAM_COLOR_GRID_MINOR 0xff101010
#define ZDX_DIAGRAM_DEFAULT_FLAG (ZDX_DIAGRAM_FLAG_TRIGGER | ZDX_DIAGRAM_FLAG_CURSOR_DATA | ZDX_DIAGRAM_FLAG_GRID | ZDX_DIAGRAM_FLAG_GRIDREF_DATA)

#define ZDX_TRIGGER_TYPE_RISING 0x1
#define ZDX_TRIGGER_TYPE_FALLING 0x2

#endif // ZDX_DEFINE_H_INCLUDED

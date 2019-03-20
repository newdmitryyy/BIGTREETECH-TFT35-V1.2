#ifndef _LANGUAGE_H_
#define _LANGUAGE_H_

#include "includes.h"


enum
{
    ENGLISH = 0,
    CHINESE,
    RUSSIAN,
    JAPANESE,
//    ARMENIAN,
    
    LANGUAGE_NUM,
};

enum
{
    LABEL_BACKGROUND = -1,
    LABEL_LANGUAGE =0 ,
    LABEL_HEAT,
    LABEL_MOVE,
    LABEL_HOME,
    LABEL_PRINT,
    LABEL_EXTRUDE,
    LABEL_FAN,
    LABEL_SETTINGS,
    LABEL_LEVELING,
    LABEL_INC,
    LABEL_DEC,
    LABEL_NOZZLE,
    LABEL_BED,
    LABEL_STOP,
    LABEL_BACK,
    LABEL_PAGE_UP,
    LABEL_PAGE_DOWN,
    LABEL_PAUSE,
    LABEL_RESUME,
    LABEL_LOAD,
    LABEL_UNLOAD,
    LABEL_SLOW_SPEED,
    LABEL_NORMAL_SPEED,
    LABEL_FAST_SPEED,
    LABEL_FAN_FULL_SPEED,
    LABEL_FAN_HALF_SPEED,
    LABEL_POWER_OFF,
    LABEL_TOUCHSCREEN_ADJUST,
    LABEL_SCREEN_INFO,
    LABEL_DISCONNECT,
    LABEL_BAUDRATE_115200,
    LABEL_BAUDRATE_250000,
    LABEL_PERCENTAGE,
    LABEL_BABYSTEP,
    LABEL_PERCENTAGE_SPEED,
    LABEL_PERCENTAGE_FLOW,
    LABEL_VALUE_ZERO,
    LABEL_1_DEGREE,
    LABEL_5_DEGREE,
    LABEL_10_DEGREE,
    LABEL_X_INC,
    LABEL_Y_INC,
    LABEL_Z_INC,
    LABEL_X_DEC,
    LABEL_Y_DEC,
    LABEL_Z_DEC,
    LABEL_X_HOME,
    LABEL_Y_HOME,
    LABEL_Z_HOME,
    LABEL_001_MM,
    LABEL_01_MM,
    LABEL_1_MM,
    LABEL_5_MM,
    LABEL_10_MM,
    LABEL_1_PERCENT,
    LABEL_5_PERCENT,
    LABEL_10_PERCENT,
    
    LABEL_READY,
    LABEL_PRINTING,
    LABEL_BUSY,
    LABEL_UNCONNECTED,
    LABEL_DISCONNECT_INFO,
    LABEL_LOADING,
    LABEL_READ_SD_ERROR,
    LABEL_POWER_FAILED,
    LABEL_CONTINUE,
    LABEL_CANNEL,
    LABEL_ADJUST_TITLE,
    LABEL_ADJUST_INFO,
    LABEL_ADJUST_OK,
    LABEL_ADJUST_FAILED,
    LABEL_WARNING,
    LABEL_STOP_PRINT,
    LABEL_CONFIRM,
    
    LABEL_NUM,
};



bool isRussia(const u8 *const str);
bool isArmenian(const u8 *const str);
u16 my_strlen(const u8 *const str);
u8 * textSelect(u8 sel);

#endif

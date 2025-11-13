// 函数: ?pre_c_initialization@@YAHXZ
// 地址: 0x142c94148
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

_set_app_type(_crt_gui_app)
_set_fmode(0x4000)
*__p__commode() = 0

if (__scrt_initialize_onexit_tables(1) != 0)
    _RTC_Initialize()
    atexit(_RTC_Terminate)
    
    if (_configure_narrow_argv(_crt_argv_unexpanded_arguments) == 0)
        sub_142c943b4()
        
        if (sub_142c98adc() != 0)
            __setusermatherr(sub_140592360)
        
        _configthreadlocale(0)
        
        if (sub_14058f640() != 0)
            _initialize_narrow_environment()
        
        j_sub_140592360()
        return 0

__scrt_fastfail(7)
breakpoint

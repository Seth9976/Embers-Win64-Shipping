// 函数: sub_1429a0440
// 地址: 0x1429a0440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg2 u> 0x63)
    sub_14297d3f0(&exceptionObject, 
        "Invalid key code film manufacturer code (must be between 0 and 99).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

*arg1 = arg2

if (arg3 u> 0x63)
    sub_14297d3f0(&exceptionObject, "Invalid key code film type (must be between 0 and 99).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[1] = arg3

if (arg4 u> 0xf423f)
    sub_14297d3f0(&exceptionObject, "Invalid key code prefix (must be between 0 and 999999).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[2] = arg4

if (arg5 u> 0x270f)
    sub_14297d3f0(&exceptionObject, "Invalid key code count (must be between 0 and 9999).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[3] = arg5

if (arg6 u> 0x77)
    sub_14297d3f0(&exceptionObject, 
        "Invalid key code perforation offset (must be between 0 and 119).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[4] = arg6

if (arg7 - 1 u> 0xe)
    sub_14297d3f0(&exceptionObject, 
        "Invalid key code number of perforations per frame (must be between 1 and 15).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[5] = arg7

if (arg8 - 0x14 u> 0x64)
    sub_14297d3f0(&exceptionObject, 
        "Invalid key code number of perforations per count (must be between 20 and 120).")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

arg1[6] = arg8
__security_check_cookie(rax_1 ^ &var_98)
return arg1

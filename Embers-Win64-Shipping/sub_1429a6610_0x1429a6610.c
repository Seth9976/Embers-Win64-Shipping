// 函数: sub_1429a6610
// 地址: 0x1429a6610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rdx_1

if (arg2 == 0)
    rdx_1 = (arg3 << 2).d
else if (arg2 == 1)
    rdx_1 = (arg3 * 2).d
else
    if (arg2 != 2)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    rdx_1 = (arg3 << 2).d

int64_t result = sub_1429a37c0(arg1, rdx_1)
__security_check_cookie(rax_1 ^ &var_98)
return result

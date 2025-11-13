// 函数: sub_1429be1a0
// 地址: 0x1429be1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg1
int64_t rax_6

if (r10 == 0)
    rax_6 = **(arg1 + 0x10)
else if (r10 == 1)
    rax_6 = *(*(arg1 + 0x10) + sx.q(arg4) * 0x18)
else
    if (r10 != 2)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "Unknown LevelMode format.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    rax_6 = *(*(arg1 + 0x10) + sx.q(arg1[1] * arg5 + arg4) * 0x18)

int64_t result = *(rax_6 + sx.q(arg3) * 0x18) + (sx.q(arg2) << 3)
void var_98
__security_check_cookie(__security_cookie ^ &var_98 ^ &var_98)
return result

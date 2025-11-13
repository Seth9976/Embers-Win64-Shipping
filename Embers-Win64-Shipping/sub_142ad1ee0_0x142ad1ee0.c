// 函数: sub_142ad1ee0
// 地址: 0x142ad1ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    if (arg3 u> 1)
        return zx.q(data_144016680)
    
    return 0

if (arg2 != 1)
    return sub_142a730a0(arg1, arg2, arg3) __tailcall

if (arg3 s< 0 || arg3 s<= 1 || arg3 == 2 || arg3 - 3 u> 1)
    return 1

int32_t rdx_1 = data_144016680
int64_t* rcx_1 = data_144016670
int32_t arg_10 = 0
int32_t rax_3 = sub_142b540f0(rcx_1, rdx_1, &arg_10)
return zx.q(sub_142a730a0(arg1, 1, 3) - rax_3)

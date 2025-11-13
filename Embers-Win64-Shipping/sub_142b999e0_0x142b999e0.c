// 函数: sub_142b999e0
// 地址: 0x142b999e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result

if (arg3 s< 0 || arg4 s< 0 || arg2 s< 0)
    rdi = 6
    result = arg5
else if (arg4 == 0 || arg2 == 0)
    if (arg5 != 0)
        (*(arg1 + 0x10))()
    
    result = 0
else if (arg4 s> divs.dp.d(0:0x7fffffff, arg2))
    rdi = 0xa
    result = arg5
else if (arg3 != 0)
    result = arg5
    int64_t result_2 = (*(arg1 + 0x18))(arg1, zx.q(arg2 * arg3), zx.q(arg2 * arg4), result)
    
    if (result_2 == 0)
        rdi = 0x40
    else
        result = result_2
else
    int64_t result_1 = (*(arg1 + 8))(arg1, zx.q(arg2 * arg4))
    result = result_1
    
    if (result_1 == 0)
        rdi = 0x40

*arg6 = rdi
return result

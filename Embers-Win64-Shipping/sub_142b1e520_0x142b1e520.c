// 函数: sub_142b1e520
// 地址: 0x142b1e520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142af42a0(arg1, arg2)

if ((result.b & 1) != 0)
    if (arg3 == 0 || result.w == 1)
        result.b = 1
        return result
    
    bool cond:0_1
    
    if (result.w u< *(arg1 + 0x1a))
        cond:0_1 = *(*(arg1 + 0x30) + (zx.q(result.w) u>> 1 << 1)) u<= 0x1ff
    else
        result.b &= 6
        cond:0_1 = result.b u<= 2
    
    int32_t rdx
    rdx.b = cond:0_1
    
    if (rdx != 0)
        result.b = 1
        return result

result.b = 0
return result

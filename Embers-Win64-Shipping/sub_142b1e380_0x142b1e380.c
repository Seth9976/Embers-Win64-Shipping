// 函数: sub_142b1e380
// 地址: 0x142b1e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != arg3)
    uint32_t rax = zx.d(*(arg3 - 1))
    
    if (rax.b s< 0)
        rax = sub_142b6a840(*(arg1 + 0x20), rax, arg2, arg3 - 1) s>> 3
    
    result = zx.q(*(*(*(arg1 + 0x20) + 8) + (sx.q(rax) << 1)))
    
    if ((result.b & 1) == 0)
        return 0
    
    if (arg4 != 0 && result.w != 1)
        bool cond:0_1
        
        if (result.w u< *(arg1 + 0x1a))
            cond:0_1 = *(*(arg1 + 0x30) + (zx.q(result.w) u>> 1 << 1)) u<= 0x1ff
        else
            result.b &= 6
            cond:0_1 = result.b u<= 2
        
        int32_t rdx_2
        rdx_2.b = cond:0_1
        
        if (rdx_2 == 0)
            return 0

result.b = 1
return result

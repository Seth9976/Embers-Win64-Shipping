// 函数: sub_142b1e420
// 地址: 0x142b1e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != arg3)
    uint32_t r9 = zx.d(*(arg3 - 2))
    int32_t rax_4
    
    if ((r9 & 0xfffff800) == 0xd800)
        uint32_t rdx_2
        
        if (test_bit(r9, 0xa) && arg3 - 2 != arg2)
            rdx_2 = zx.d(*(arg3 - 4))
        
        if (not(test_bit(r9, 0xa)) || arg3 - 2 == arg2 || (rdx_2 & 0xfffffc00) != 0xd800)
            rax_4 = *(*(arg1 + 0x20) + 0x14) - 1
        else
            int64_t* rcx_1 = *(arg1 + 0x20)
            int32_t rdx_5 = ((rdx_2 - 0xd7f7) << 0xa) + r9
            
            if (rdx_5 s< rcx_1[3].d)
                rax_4 = sub_142b6a760(rcx_1, rdx_5)
            else
                rax_4 = *(rcx_1 + 0x14) - 2
    else
        rax_4 = zx.d(*(**(arg1 + 0x20) + (zx.q(r9) u>> 6 << 1))) + (r9 & 0x3f)
    
    result = zx.q(*(*(*(arg1 + 0x20) + 8) + (sx.q(rax_4) << 1)))
    
    if ((result.b & 1) == 0)
        return 0
    
    if (arg4 != 0 && result.w != 1)
        bool cond:0_1
        
        if (result.w u< *(arg1 + 0x1a))
            cond:0_1 = *(*(arg1 + 0x30) + (zx.q(result.w) u>> 1 << 1)) u<= 0x1ff
        else
            result.b &= 6
            cond:0_1 = result.b u<= 2
        
        int32_t rdx_7
        rdx_7.b = cond:0_1
        
        if (rdx_7 == 0)
            return 0

result.b = 1
return result

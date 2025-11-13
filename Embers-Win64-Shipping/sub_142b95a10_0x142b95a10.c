// 函数: sub_142b95a10
// 地址: 0x142b95a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 != 0)
    uint64_t rax_2 = zx.q(*(arg1 + 0x14))
    void* i = arg1 + 0x18
    
    for (void* rdx = i + (rax_2 << 3); i u< rdx; i += 8)
        if (*i == arg2)
            *(arg1 + 0x14) = rax_2.d - 1
            
            if (i u< rdx - 8)
                __builtin_memcpy(i, i + 8, (((rdx - 8 - i - 1) u>> 3) + 1) << 3)
            
            *(rdx - 8) = 0
            sub_142b912d0(arg2, rdx - 8)
            return 0

return 0x22

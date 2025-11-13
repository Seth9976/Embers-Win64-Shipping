// 函数: sub_142bb8990
// 地址: 0x142bb8990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 0x2e0)

if (r9 != 0)
    if (arg2 == 0)
        if (arg3 != 0)
            goto label_142bb8a05
        
        int32_t i = 0
        
        if (*r9 u<= 0)
            return 0
        
        do
            uint64_t i_3 = zx.q(i)
            i += 1
            uint64_t rdx = i_3 << 2
            *(rdx + *(r9 + 0x108)) = *(rdx + *(r9 + 0x110))
        while (i u< *r9)
        
        return 0
    
    if (arg3 != 0)
    label_142bb8a05:
        int32_t i_4 = *r9
        
        if (arg2 u< i_4)
            i_4 = arg2
        
        int32_t i_2 = 0
        
        if (i_4 != 0)
            int32_t* r10_1 = nullptr
            uint64_t i_6 = zx.q(i_4)
            i_2 = i_4
            uint64_t i_1
            
            do
                int32_t rax_5 = *(r10_1 + arg3)
                r10_1 = &r10_1[1]
                *(r10_1 + *(r9 + 0x108) - 4) = rax_5
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        while (i_2 u< *r9)
            uint64_t i_5 = zx.q(i_2)
            i_2 += 1
            *(*(r9 + 0x108) + (i_5 << 2)) = 0
        
        if (arg2 != 0)
            *(arg1 + 8) |= 0x8000
            return 0
        
        *(arg1 + 8) &= 0xffff7fff
        return 0

return 6

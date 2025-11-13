// 函数: sub_142b05e90
// 地址: 0x142b05e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = *(arg1 + 0x10)
int64_t rdx = *(arg1 + 0x18)

if (r10 u>= rdx)
    *arg2 = 1
    return 0xffff

char r9 = *r10
*(arg1 + 0x10) = &r10[1]

if ((r9 u> 0x1f || not(test_bit(0xfdffd9fe, zx.d(r9)))) && r9 u< 0x80)
    return zx.q(r9)

if (r9 != 0xf)
    if (r9 != 0x14)
        if (r9 u> 0x20)
            if (r9 u< 0x80)
                return 0
            
            void* rcx_8 = *(*(arg1 + 8) + 0x10)
            uint64_t r8_6 = zx.q(*(rcx_8 + 0xa0))
            void* rsi_2 = *(rcx_8 + (r8_6 << 3))
            
            if (r8_6.b u< 0x10)
                return zx.q(*(*(rsi_2 + 0x38) + (zx.q(r9) << 2)))
            
            if (sub_142afc860(rsi_2, r9) == 0)
                int64_t rdx_8 = *(arg1 + 0x10)
                
                if (rdx_8 u<= *(arg1 + 0x18))
                    return sub_142afc870(rsi_2, rdx_8 - 1, 1, 0)
            else if (*(arg1 + 0x10) + 1 u<= *(arg1 + 0x18))
                int32_t rax_30 = sub_142afc870(rsi_2, *(arg1 + 0x10) - 1, 2, 0)
                *(arg1 + 0x10) += 1
                return rax_30
        else
            void* rsi_1
            void* r11_1
            
            if (r9 u<= 0x13)
                rsi_1 = *(arg1 + 8)
                r11_1 = *(*(rsi_1 + 0x10) + (zx.q(r9) << 3))
            
            if (r9 u> 0x13 || r11_1 == 0)
                *arg2 = 0xa
                return 0
            
            if (r9 u< 0x10)
                if (&r10[2] u<= rdx)
                    char rdx_5 = r10[1]
                    *(arg1 + 0x10) = &r10[2]
                    
                    if (rdx_5 u>= 0x80)
                        return zx.q(*(*(r11_1 + 0x38) + (zx.q(rdx_5) << 2)))
                    
                    void* rcx_7 = **(rsi_1 + 0x10)
                    char arg_8 = r9
                    char arg_9 = rdx_5
                    return sub_142afc870(rcx_7, &arg_8, 2, 0)
            else if (&r10[3] u<= rdx)
                if (sx.d(r10[1]) != zx.d(r9))
                    int32_t rax_15 = sub_142afc870(r11_1, &r10[1], 2, 0)
                    *(arg1 + 0x10) += 2
                    return rax_15
                
                *(arg1 + 0x10) = &r10[2]
                int32_t rax_14 = sub_142afc870(r11_1, &r10[2], 1, 0)
                *(arg1 + 0x10) += 1
                return rax_14
    else if (&r10[3] u<= rdx)
        char rcx_1 = r10[1]
        *(arg1 + 0x10) = &r10[2]
        char rdx_1 = r10[2]
        *(arg1 + 0x10) = &r10[3]
        
        if (rcx_1 == 0xf6)
            rcx_1 = rdx_1
            rdx_1 = 0
        
        return zx.q(rdx_1) | zx.q(zx.d(rcx_1) << 8)
else if (&r10[2] u<= rdx)
    char rcx = r10[1]
    *(arg1 + 0x10) = &r10[2]
    uint32_t r8 = zx.d(rcx)
    
    if (rcx u< 0x80)
        return zx.q(r8 - 0x20)
    
    return zx.q(r8)

*arg2 = 0xb
*(arg1 + 0x10) = *(arg1 + 0x18)
return 0xffff

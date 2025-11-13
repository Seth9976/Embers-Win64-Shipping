// 函数: sub_142a9d9c0
// 地址: 0x142a9d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_8 = arg1
int64_t var_38 = -2
*arg1 = &icu_64::UnicodeSet::`vftable'{for `icu_64::UnicodeFilter'}
arg1[1] = &icu_64::UnicodeSet::`vftable'{for `icu_64::UMemory'}
arg1[2] = &arg1[0xc]
arg1[3].d = 0x19
*(arg1 + 0x1c) = 1
arg1[4].b = 0
int64_t rdi = 0
__builtin_memset(&arg1[5], 0, 0x14)
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0

if (*arg5 s> 0)
    sub_142aa0650(arg1)
else if (arg4 != 0 || arg2 == 0 || arg3 s< 1)
    *arg5 = 1
    sub_142aa0650(arg1)
else
    uint32_t rbp_1 = zx.d(*arg2)
    int16_t r15_1 = rbp_1.w
    
    if (rbp_1.w s< 0)
        r15_1 = arg2[1]
    
    uint64_t rsi_1 = zx.q(r15_1)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((rbp_1 & 0x7fff) - rsi_1.d)
    int32_t r13_1 = rsi_1.d + ((temp1_1 - temp0_1) s>> 1)
    
    if (sub_142a9f6f0(arg1, r13_1 + 1) != 0)
        int64_t r10_1
        r10_1.b = rbp_1.w s< 0
        uint64_t r8 = zx.q(rsi_1.d)
        
        if (rsi_1.d != 0)
            void* rdx_2 = &arg2[r10_1 + 1]
            
            do
                *(arg1[2] + (rdi << 2)) = zx.d(*rdx_2)
                rdi += 1
                rdx_2 += 2
            while (rdi s< r8)
        
        int64_t r11_1 = sx.q(r13_1)
        uint64_t rdx_3 = r8
        
        if (r8 s< r11_1)
            uint64_t r9 = rsi_1 * 2
            rsi_1 = zx.q(rsi_1.d + r11_1.d - zx.d(r15_1))
            
            do
                int64_t rax_13 = r9 - r8 + r10_1 + 1
                *(arg1[2] + (rdx_3 << 2)) = zx.d(arg2[rax_13 + 1]) + (zx.d(arg2[rax_13]) << 0x10)
                rdx_3 += 1
                r9 += 2
            while (rdx_3 s< r11_1)
        
        if (rsi_1.d == 0 || *(arg1[2] + (sx.q((rsi_1 - 1).d) << 2)) != 0x110000)
            *(arg1[2] + (sx.q(rsi_1.d) << 2)) = 0x110000
            rsi_1 = zx.q(rsi_1.d + 1)
        
        *(arg1 + 0x1c) = rsi_1.d

return arg1

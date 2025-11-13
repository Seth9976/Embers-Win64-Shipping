// 函数: sub_142a9d7b0
// 地址: 0x142a9d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::UnicodeSet::`vftable'{for `icu_64::UnicodeFilter'}
arg1[1] = &icu_64::UnicodeSet::`vftable'{for `icu_64::UMemory'}
arg1[2] = &arg1[0xc]
arg1[3].d = 0x19
*(arg1 + 0x1c) = 1
arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x14)
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0

if (sub_142a9f6f0(arg1, *(arg2 + 0x1c)) != 0)
    int64_t rax_2 = sx.q(*(arg2 + 0x1c))
    *(arg1 + 0x1c) = rax_2.d
    memcpy(arg1[2], *(arg2 + 0x10), (rax_2 << 2).d)
    void* rax_3 = *(arg2 + 0x50)
    int32_t arg_10
    char rax_4
    
    if (rax_3 != 0 && *(rax_3 + 8) != 0)
        arg_10 = 0
        rax_4 = sub_142a9ecb0(arg1, &arg_10)
        
        if (rax_4 != 0)
            sub_142ae7150(arg1[0xa], *(arg2 + 0x50), sub_142a9ee80, &arg_10)
    
    if (rax_3 == 0 || *(rax_3 + 8) == 0 || (rax_4 != 0 && arg_10 s<= 0))
        int64_t rdx_4 = *(arg2 + 0x40)
        
        if (rdx_4 != 0)
            sub_142aa05d0(arg1, rdx_4, *(arg2 + 0x48))
    else
        sub_142aa0650(arg1)

return arg1

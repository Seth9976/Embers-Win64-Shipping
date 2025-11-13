// 函数: sub_142a47e10
// 地址: 0x142a47e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2

if (arg2 == 0)
    return arg1

if (arg3 s< 0)
    rdi = -1
    
    do
        rdi += 1
    while (arg2[rdi] != 0)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1

if (sub_142a487e0(arg1, rdi.d, rdi.d, 0, 0, 0) == 0)
    if ((arg1[1].b & 4) != 0)
        void* rax_2 = arg1[3]
        int32_t rbp_1 = *(rax_2 - 4)
        *(rax_2 - 4) -= 1
        
        if (rbp_1 == 1)
            sub_142a7dcd0(arg1[3] - 4)
    
    arg1[3] = 0
    arg1[1].w = 1
    rax_1 = arg1
    arg1[2].d = 0
else
    void* rdx_1 = arg1 + 0xa
    
    if ((arg1[1].b & 2) == 0)
        rdx_1 = arg1[3]
    
    sub_142a8d750(arg2, rdx_1, rdi.d)
    rax_1 = arg1
    
    if (rdi.d s> 0x3ff)
        arg1[1].w |= 0xffe0
        *(arg1 + 0xc) = rdi.d
    else
        arg1[1].w &= 0x1f
        rdi.w <<= 5
        arg1[1].w |= rdi.w

return rax_1

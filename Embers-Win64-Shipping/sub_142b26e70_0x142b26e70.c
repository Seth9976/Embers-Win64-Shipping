// 函数: sub_142b26e70
// 地址: 0x142b26e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::SharedObject::icu_64::CollationSettings::VTable** arg_8 = arg1
arg_8.d = 0
arg1[1] = 0
arg1[2] = 0
*arg1 = &icu_64::CollationSettings::`vftable'{for `icu_64::SharedObject'}
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[5].d = *(arg2 + 0x28)
arg1[6] = 0
arg1[7].d = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa].d = *(arg2 + 0x50)

if (*(arg2 + 0x20) != 0)
    arg1[5].d = *(arg2 + 0x28)
    
    if (*(arg2 + 0x4c) != 0)
        sub_142b273d0(arg1, *(arg2 + 0x40), *(arg2 + 0x48), *(arg2 + 0x30), *(arg2 + 0x38), 
            *(arg2 + 0x20), &arg_8)
    else
        arg1[4] = *(arg2 + 0x20)
        arg1[6] = *(arg2 + 0x30)
        arg1[7].d = *(arg2 + 0x38)
        arg1[8] = *(arg2 + 0x40)
        arg1[9].d = *(arg2 + 0x48)
else
    arg1[4] = 0
    arg1[5].d = 0
    arg1[7].d = 0
    arg1[9].d = 0

if (arg1[0xa].d s>= 0)
    void* rcx_1 = arg1 + 0x54
    int64_t i_1 = 6
    void* rax_12 = arg2 + 0x54
    int64_t i
    
    do
        rcx_1 += 0x80
        int128_t zmm0 = *rax_12
        rax_12 += 0x80
        *(rcx_1 - 0x80) = zmm0
        *(rcx_1 - 0x70) = *(rax_12 - 0x70)
        *(rcx_1 - 0x60) = *(rax_12 - 0x60)
        *(rcx_1 - 0x50) = *(rax_12 - 0x50)
        *(rcx_1 - 0x40) = *(rax_12 - 0x40)
        *(rcx_1 - 0x30) = *(rax_12 - 0x30)
        *(rcx_1 - 0x20) = *(rax_12 - 0x20)
        *(rcx_1 - 0x10) = *(rax_12 - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1

// 函数: sub_142aa8200
// 地址: 0x142aa8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::Format::`vftable'{for `icu_64::UObject'}

if (arg1 != arg2)
    char* r8_1 = arg2 + 0xa5
    void* rcx_1 = arg1 + 0xa5 - r8_1
    char i
    
    do
        i = *r8_1
        *(rcx_1 + r8_1) = i
        r8_1 = &r8_1[1]
    while (i != 0)
    void* rax_1 = arg2 + 8
    char* rdx_1 = &arg1[1] - rax_1
    char i_1
    
    do
        i_1 = *rax_1
        *(rdx_1 + rax_1) = i_1
        rax_1 += 1
    while (i_1 != 0)

return arg1

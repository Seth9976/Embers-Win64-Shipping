// 函数: sub_14108bab0
// 地址: 0x14108bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[2] = 0

if (*arg1 != 0)
    void* rax_1 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx)

arg1[8] = arg2[8]
arg1[0xa] = 0

if (arg1[8] != 0)
    void* rax_4 = arg2[0xa]
    void* rcx_1 = &arg2[0xc]
    
    if (rax_4 != 0)
        rcx_1 = rax_4
    
    (**rcx_1)(rcx_1)

arg1[0x10] = arg2[0x10]
arg1[0x12] = 0

if (arg1[0x10] != 0)
    void* rax_7 = arg2[0x12]
    void* rcx_2 = &arg2[0x14]
    
    if (rax_7 != 0)
        rcx_2 = rax_7
    
    (**rcx_2)(rcx_2)

return arg1

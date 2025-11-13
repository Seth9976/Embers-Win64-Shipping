// 函数: sub_141e70140
// 地址: 0x141e70140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[2] = arg2[2]
arg1[4] = 0

if (arg1[2] != 0)
    void* rax_2 = arg2[4]
    void* rcx = &arg2[6]
    
    if (rax_2 != 0)
        rcx = rax_2
    
    (**rcx)(rcx)

arg1[0xa] = arg2[0xa]
*(arg1 + 0x58) = *(arg2 + 0x58)
arg1[0xd] = arg2[0xd]
arg1[0xe].d = arg2[0xe].d
return arg1

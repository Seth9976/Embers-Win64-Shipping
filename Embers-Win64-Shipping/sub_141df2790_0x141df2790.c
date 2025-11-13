// 函数: sub_141df2790
// 地址: 0x141df2790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9f0(arg1, arg2)
*arg1 = &data_143240ff0

if (arg1[5] != u"Remove Trivial Keys")
    int32_t rdx = 0
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x14)
        sub_1405947f0(&arg1[5], 0x14)
        rdx = arg1[6].d
    
    arg1[6].d = rdx + 0x14
    
    if (rdx + 0x14 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    void* rax_2 = arg1[5]
    __builtin_memcpy(rax_2, u"Remove Trivial K", 0x20)
    *(rax_2 + 0x20) = 0x7300790065

arg1[8].d = 0x38d1b717
*(arg1 + 0x44) = 0x399d4952
arg1[9].d = 0x3727c5ac
return arg1

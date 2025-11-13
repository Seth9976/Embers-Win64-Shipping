// 函数: sub_141ddef50
// 地址: 0x141ddef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9f0(arg1, arg2)
*arg1 = &data_143240898

if (arg1[5] != u"Remove Every Second Key")
    int32_t rdx = 0
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x18)
        sub_1405947f0(&arg1[5], 0x18)
        rdx = arg1[6].d
    
    arg1[6].d = rdx + 0x18
    
    if (rdx + 0x18 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    __builtin_memcpy(arg1[5], u"Remove Every Second Key", 0x30)

arg1[8].d = 0xa
return arg1

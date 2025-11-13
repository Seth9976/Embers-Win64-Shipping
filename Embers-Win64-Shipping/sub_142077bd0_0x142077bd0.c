// 函数: sub_142077bd0
// 地址: 0x142077bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142078e70(arg1, arg2)
arg1[0xd].d |= 3
*arg1 = &data_1432b7f60
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
arg1[9] = sub_1424d2090()

if (arg1[0xb] != u"Color Scale")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0xc)
        sub_1405947f0(&arg1[0xb], 0xc)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0xc
    
    if (rdx + 0xc s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Color Scale", 0x18)

return arg1

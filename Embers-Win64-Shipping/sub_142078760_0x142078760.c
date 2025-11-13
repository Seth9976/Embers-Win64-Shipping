// 函数: sub_142078760
// 地址: 0x142078760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
*arg1 = &data_1432b5af0
arg1[5] = &data_1432b5e48
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0

if (arg1[0xb] != u"Generic LinearColor Track")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x1a)
        sub_1405947f0(&arg1[0xb], 0x1a)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0x1a
    
    if (rdx + 0x1a s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Generic LinearColor Track", 0x34)

arg1[0x11].d = 0
return arg1

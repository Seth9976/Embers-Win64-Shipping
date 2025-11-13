// 函数: sub_142078ac0
// 地址: 0x142078ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rcx = 0
*arg1 = &data_1432b2428
arg1[5] = &data_1432b2780
arg1[6] = &data_1432b07a8
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0xd].d |= 0x20
arg1[0x11].d = 0

if (arg1[0xb] != u"Move Axis Track")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x10)
        sub_1405947f0(&arg1[0xb], 0x10)
        rcx = arg1[0xc].d
    
    arg1[0xc].d = rcx + 0x10
    
    if (rcx + 0x10 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Move Axis Track", 0x20)

return arg1

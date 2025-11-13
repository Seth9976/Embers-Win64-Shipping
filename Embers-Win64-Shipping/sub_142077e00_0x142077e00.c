// 函数: sub_142077e00
// 地址: 0x142077e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
*arg1 = &data_1432b4588
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
arg1[0xd].d |= 3
*(arg1 + 0x94) = data_14399f5e0
arg1[9] = sub_1424cfe40()

if (arg1[0xb] != u"Fade")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 5)
        sub_1405947f0(&arg1[0xb], 5)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 5
    
    if (rdx + 5 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Fade")

return arg1

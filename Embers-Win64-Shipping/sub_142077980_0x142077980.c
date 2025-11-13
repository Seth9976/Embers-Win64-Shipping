// 函数: sub_142077980
// 地址: 0x142077980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142078e70(arg1, arg2)
arg1[0xd].d |= 3
*arg1 = &data_1432b7c08
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
arg1[9] = sub_1424d1c00()

if (arg1[0xb] != u"Audio Master")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0xd)
        sub_1405947f0(&arg1[0xb], 0xd)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0xd
    
    if (rdx + 0xd s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Audio Master")

return arg1

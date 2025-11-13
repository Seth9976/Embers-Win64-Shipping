// 函数: sub_142078220
// 地址: 0x142078220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_1432b5ed0
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
arg1[0x12] = 0
arg1[9] = sub_1424d03f0()

if (arg1[0xb] != u"Float Property")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0xf)
        sub_1405947f0(&arg1[0xb], 0xf)
        rdi = arg1[0xc].d
    
    arg1[0xc].d = rdi + 0xf
    
    if (rdi + 0xf s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Float Property")

return arg1

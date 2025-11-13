// 函数: sub_142077ec0
// 地址: 0x142077ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432bafb0
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0x13], 0, 0x11)
arg1[9] = sub_1424cffe0()

if (arg1[0xb] != u"Float AnimBP Param")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x13)
        sub_1405947f0(&arg1[0xb], 0x13)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 0x13
    
    if (rsi + 0x13 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Float AnimBP Param")

return arg1

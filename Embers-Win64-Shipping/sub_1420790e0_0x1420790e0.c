// 函数: sub_1420790e0
// 地址: 0x1420790e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b3060
arg1[5] = &data_143294088
arg1[6] = &data_1432b07a8
arg1[0xe] = 0
arg1[0xf] = 0
arg1[9] = sub_1424d1270()

if (arg1[0xb] != u"Visibility")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0xb)
        sub_1405947f0(&arg1[0xb], 0xb)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 0xb
    
    if (rsi + 0xb s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Visibility")

arg1[0x10].d |= 7
return arg1

// 函数: sub_1420778a0
// 地址: 0x1420778a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b3638
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b3990
__builtin_memset(&arg1[0x12], 0, 0x18)
arg1[9] = sub_1424d19e0()

if (arg1[0xb] != u"Anim")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 5)
        sub_1405947f0(&arg1[0xb], 5)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 5
    
    if (rsi + 5 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Anim")

arg1[0xd].d |= 0x10
arg1[0x12] = data_143f398e0
return arg1

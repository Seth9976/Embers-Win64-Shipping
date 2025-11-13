// 函数: sub_142079030
// 地址: 0x142079030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142078e70(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b64a8
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
arg1[0x12] = 0
arg1[9] = sub_1424d0ed0()

if (arg1[0xb] != u"Vector Property")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x10)
        sub_1405947f0(&arg1[0xb], 0x10)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 0x10
    
    if (rsi + 0x10 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Vector Property", 0x20)

return arg1

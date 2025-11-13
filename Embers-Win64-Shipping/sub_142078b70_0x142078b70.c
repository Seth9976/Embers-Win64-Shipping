// 函数: sub_142078b70
// 地址: 0x142078b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b96c0
arg1[5] = &data_143294088
arg1[6] = &data_1432b9a18
arg1[0xe] = 0
arg1[0xf] = 0
arg1[9] = sub_1424d06d0()

if (arg1[0xb] != u"Particle Replay")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x10)
        sub_1405947f0(&arg1[0xb], 0x10)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 0x10
    
    if (rsi + 0x10 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Particle Replay", 0x20)

return arg1

// 函数: sub_142078ce0
// 地址: 0x142078ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142078e70(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b5518
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
arg1[0x12] = 0
arg1[0x13] = 0
arg1[9] = sub_1424d08e0()

if (arg1[0xb] != u"Sound")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 6)
        sub_1405947f0(&arg1[0xb], 6)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 6
    
    if (rsi + 6 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    int64_t* rcx_2 = arg1[0xb]
    *rcx_2 = 0x6e0075006f0053
    rcx_2[1].d = 0x64

arg1[0x14].d |= 0x10
return arg1

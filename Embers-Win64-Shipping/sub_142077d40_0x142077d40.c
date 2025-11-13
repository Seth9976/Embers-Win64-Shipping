// 函数: sub_142077d40
// 地址: 0x142077d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b3c58
arg1[5] = &data_143294088
arg1[6] = &data_1432b07a8
arg1[0xe] = 0
arg1[0xf] = 0
arg1[9] = sub_1424cfd70()

if (arg1[0xb] != u"Event")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 6)
        sub_1405947f0(&arg1[0xb], 6)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 6
    
    if (rsi + 6 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    int64_t* rcx_2 = arg1[0xb]
    *rcx_2 = 0x6e006500760045
    rcx_2[1].d = 0x74

arg1[0x10].d |= 3
return arg1

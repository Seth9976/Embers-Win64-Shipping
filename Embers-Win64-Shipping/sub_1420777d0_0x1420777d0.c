// 函数: sub_1420777d0
// 地址: 0x1420777d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b0450
arg1[5] = &data_143294088
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[7], 0, 0x18)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[9] = sub_1424d1860()
arg1[0xa].b = 0

if (arg1[0xb] != u"Track")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 6)
        sub_1405947f0(&arg1[0xb], 6)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 6
    
    if (rsi + 6 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    int64_t* rcx_2 = arg1[0xb]
    *rcx_2 = 0x63006100720054
    rcx_2[1].d = 0x6b

arg1[0xd].d = (arg1[0xd].d & 0xffffff77) | 0x40
return arg1

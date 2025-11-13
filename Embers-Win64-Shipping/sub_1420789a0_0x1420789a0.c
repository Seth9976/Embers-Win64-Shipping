// 函数: sub_1420789a0
// 地址: 0x1420789a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
*arg1 = &data_1432b1c30
arg1[5] = &data_1432b1fc0
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x11)
__builtin_memset(arg1 + 0x84, 0, 0x15)
__builtin_memset(arg1 + 0x9c, 0, 0x1c)
arg1[9] = sub_1424d05c0()
arg1[0xd].d |= 1

if (arg1[0xb] != u"Movement")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 9)
        sub_1405947f0(&arg1[0xb], 9)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 9
    
    if (rdx + 9 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_wcscpy(arg1[0xb], u"Movement")

int32_t rax_3 = arg1[0x18].d & 0xffffffef
arg1[0x17] = 0
*(arg1 + 0xc4) = 0
arg1[0x18].d = rax_3 | 8
return arg1

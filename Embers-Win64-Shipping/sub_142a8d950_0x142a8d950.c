// 函数: sub_142a8d950
// 地址: 0x142a8d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0x7f)
    *arg1 = arg2.b
    return &arg1[1]

if (arg2 s<= 0x7ff)
    char rax_2 = (arg2 s>> 6).b
    arg2.b &= 0x3f
    *arg1 = rax_2 | 0xc0
    arg2.b |= 0x80
    arg1[1] = arg2.b
    return &arg1[2]

if (arg2 s<= 0xffff)
    *arg1 = (arg2 s>> 0xc).b | 0xe0
    char rax_6 = (arg2 s>> 6).b
    arg2.b &= 0x3f
    arg1[1] = (rax_6 & 0x3f) | 0x80
    arg2.b |= 0x80
    arg1[2] = arg2.b
    return &arg1[3]

*arg1 = (arg2 s>> 0x12).b | 0xf0
arg1[1] = ((arg2 s>> 0xc).b & 0x3f) | 0x80
char rax_12 = (arg2 s>> 6).b
arg2.b &= 0x3f
arg2.b |= 0x80
arg1[2] = (rax_12 & 0x3f) | 0x80
arg1[3] = arg2.b
return &arg1[4]

// 函数: sub_141adec50
// 地址: 0x141adec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d6a040
int64_t* r8 = &arg1[3]
arg1[1] = 0
arg1[2] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
arg1[0xb] = 0
arg1[0xc] = 0
*arg1 = &data_142da7b28
arg1[0xd].d = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x6d) = *(arg2 + 0x6d)
*arg1 = &data_142da7f70
arg1[0xe] = 0
int32_t rsi = *(arg2 + 0x78)
int64_t rbp = *(arg2 + 0x70)
arg1[0xf].d = rsi

if (rsi != 0)
    sub_1405c4b20(&arg1[0xe], rsi, 0)
    memcpy(arg1[0xe], rbp, rsi * 0x1c)
else
    *(arg1 + 0x7c) = 0

return arg1

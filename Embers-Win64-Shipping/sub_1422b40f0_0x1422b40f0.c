// 函数: sub_1422b40f0
// 地址: 0x1422b40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9].b = arg2[9].b
*(arg1 + 0x49) = *(arg2 + 0x49)
*(arg1 + 0x4a) = *(arg2 + 0x4a)
*(arg1 + 0x4b) = *(arg2 + 0x4b)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x4d) = *(arg2 + 0x4d)
*(arg1 + 0x4e) = *(arg2 + 0x4e)
*(arg1 + 0x4f) = *(arg2 + 0x4f)
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe].w = arg2[0xe].w
arg1[0xf] = 0
int32_t rsi = arg2[0x10].d
int64_t rbp = arg2[0xf]
arg1[0x10].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[0xf], rsi, 0)
    memcpy(arg1[0xf], rbp, rsi * 2)
else
    *(arg1 + 0x84) = 0

return arg1

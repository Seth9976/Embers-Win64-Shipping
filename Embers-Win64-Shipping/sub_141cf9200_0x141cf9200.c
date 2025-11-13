// 函数: sub_141cf9200
// 地址: 0x141cf9200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3].b = arg2[3].b
*(arg1 + 0x19) = *(arg2 + 0x19)
*(arg1 + 0x1a) = *(arg2 + 0x1a)
*(arg1 + 0x1b) = *(arg2 + 0x1b)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1d) = *(arg2 + 0x1d)
*(arg1 + 0x1e) = *(arg2 + 0x1e)
*(arg1 + 0x1f) = *(arg2 + 0x1f)
arg1[4].b = arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
*(arg1 + 0x22) = *(arg2 + 0x22)
*(arg1 + 0x23) = *(arg2 + 0x23)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x25) = *(arg2 + 0x25)
*(arg1 + 0x26) = *(arg2 + 0x26)
*(arg1 + 0x27) = *(arg2 + 0x27)
arg1[5].b = arg2[5].b
*(arg1 + 0x29) = *(arg2 + 0x29)
*(arg1 + 0x2a) = *(arg2 + 0x2a)
*(arg1 + 0x2b) = *(arg2 + 0x2b)

if (&arg1[6] != &arg2[6])
    sub_140a2c970(&arg1[6], &arg2[6])
    arg1[7].d = arg2[7].d
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    arg2[7] = 0

arg1[8].d = arg2[8].d
*(arg1 + 0x44) = *(arg2 + 0x44)
arg1[9].b = arg2[9].b
*(arg1 + 0x49) = *(arg2 + 0x49)
return arg1

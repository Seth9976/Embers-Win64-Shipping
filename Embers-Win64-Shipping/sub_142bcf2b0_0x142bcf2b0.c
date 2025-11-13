// 函数: sub_142bcf2b0
// 地址: 0x142bcf2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x70)
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = &arg2[6]
arg1[7] = arg2 + 0x34
arg1[8] = &arg2[7]
arg1[9] = &arg2[8]
arg1[0xa] = &arg2[9]
char result

if (arg3 == 0)
    arg1[0xb].b = arg2[0xb].b
    *(arg1 + 0x59) = *(arg2 + 0x59)
    *(arg1 + 0x5a) = *(arg2 + 0x5a)
    result = *(arg2 + 0x5b)
else
    arg1[0xb].b = 0
    *(arg1 + 0x59) = *(arg2 + 0x5c)
    *(arg1 + 0x5a) = *(arg2 + 0x5d)
    result = *(arg2 + 0x5e)

*(arg1 + 0x5c) = arg3
*(arg1 + 0x5b) = result
*(arg1 + 0x60) = data_143688650.o
return result

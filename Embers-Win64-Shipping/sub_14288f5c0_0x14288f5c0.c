// 函数: sub_14288f5c0
// 地址: 0x14288f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg1
arg2[1] = (*arg1 u>> 8).b
arg2[2] = arg1[2]
arg2[3] = arg1[3]
arg2[4] = arg1[4]
arg2[5] = (*(arg1 + 4) u>> 8).b
arg2[6] = arg1[6]
arg2[7] = arg1[7]
arg2[8] = arg1[8]
arg2[9] = (*(arg1 + 8) u>> 8).b
arg2[0xa] = arg1[0xa]
arg2[0xb] = arg1[0xb]
arg2[0xc] = arg1[0xc]
arg2[0xd] = (*(arg1 + 0xc) u>> 8).b
arg2[0xe] = arg1[0xe]
char result = arg1[0xf]
arg2[0xf] = result
return result

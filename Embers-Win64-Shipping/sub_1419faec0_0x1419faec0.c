// 函数: sub_1419faec0
// 地址: 0x1419faec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].q = arg2[2].q
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[3].q = arg2[3].q
*(arg1 + 0x38) = 0
int32_t rbp = arg2[4].d
int64_t r14 = *(arg2 + 0x38)
arg1[4].d = rbp

if (rbp != 0)
    sub_1405c4b20(arg1 + 0x38, rbp, 0)
    memcpy(*(arg1 + 0x38), r14, rbp * 0x1c)
else
    *(arg1 + 0x44) = 0

*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[5].q = arg2[5].q
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x59) = *(arg2 + 0x59)
return arg1

// 函数: sub_140e15ab0
// 地址: 0x140e15ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x779) & 2) != 0)
    *arg2 = 0
    arg2[1].d = *(arg1 + 0x7a0)
    *(arg2 + 0xc) = *(arg1 + 0x7a4)
    return arg2

float zmm2 = *(arg1 + 0x790)
float zmm0 = *(arg1 + 0x794)
float zmm3 = zmm2 f+ *(arg1 + 0x7a0)
*arg2 = zmm2
float zmm1 = zmm0 f+ *(arg1 + 0x7a4)
*(arg2 + 4) = zmm0
arg2[1].d = zmm3
*(arg2 + 0xc) = zmm1
return arg2

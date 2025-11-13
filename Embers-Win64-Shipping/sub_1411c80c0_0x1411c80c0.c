// 函数: sub_1411c80c0
// 地址: 0x1411c80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
void* rax_7 = arg2[7]
arg1[7] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
return arg1

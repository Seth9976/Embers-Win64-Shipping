// 函数: sub_140f15340
// 地址: 0x140f15340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xa1] = arg2
arg1[0xa2] = arg2 + 8
arg1[0xa3] = arg2 + 0x90
arg1[0xa4] = arg2 + 0x118
arg1[0xa5] = arg2 + 0x1a0
*(arg1 + 0x4e0) = *(arg2 + 0x228)
*(arg1 + 0x4f0) = *(arg2 + 0x238)
*(arg1 + 0x580) = *(arg2 + 0x260)
arg1[0xb2] = *(arg2 + 0x270)
*(arg1 + 0x598) = *(arg2 + 0x248)
int64_t zmm1 = *(arg2 + 0x258)
arg2.b = 1
arg1[0xb5] = zmm1
return sub_140e19ef0(arg1, arg2.b) __tailcall

// 函数: sub_14222c950
// 地址: 0x14222c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x18) ^= (*(arg2 + 0x18) ^ *(arg1 + 0x18)) & 1
sub_140780bc0(arg1 + 0x30, arg2 + 0x30)
sub_14090a0d0(arg1 + 0x40, arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
int32_t result = *(arg2 + 0x68)
*(arg1 + 0x68) = result
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
return result

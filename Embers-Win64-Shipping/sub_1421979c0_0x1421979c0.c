// 函数: sub_1421979c0
// 地址: 0x1421979c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142274540(arg1)
int32_t rax = arg1[0x4d].d
*(arg1 + 0x27c) &= 0xfffffffd
int32_t result = (rax & 1) * 2
*(arg1 + 0x27c) |= result
return result

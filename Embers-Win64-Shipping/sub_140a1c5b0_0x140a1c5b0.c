// 函数: sub_140a1c5b0
// 地址: 0x140a1c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = 0
*(arg1 + 0x88) = 0
int32_t rax = sub_140a2d7c0(&data_143cf0ae0)
*(arg1 + 0x40) &= 0xfffffffffc000000
uint64_t rdx = zx.q(rax)
*(arg1 + 0x40) |= rdx
*(arg1 + 0x88) &= 0xfffffffffc000000
*(arg1 + 0x88) |= rdx
return arg1

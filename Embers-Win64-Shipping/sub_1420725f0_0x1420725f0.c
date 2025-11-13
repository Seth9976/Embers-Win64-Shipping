// 函数: sub_1420725f0
// 地址: 0x1420725f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142337dc0(*(arg1 + 0x30), *(arg1 + 0x70))
*(arg1 + 0x38) = sub_1422c5b90(rax)
*(arg1 + 0x3c) = *(rax + 0x28)
int32_t rdx_2
rdx_2.b = *(rax + 0x28) != 0
*(arg1 + 0x40) = rdx_2 + 1
int32_t r8
r8.b = *(rax + 0x28) != 0
*(arg1 + 0x44) = (r8 + 2) * *(rax + 0x24)
sub_1405d16e0(arg1 + 0x48, *(rax + 0x18))
return sub_1405d16e0(arg1 + 0x50, *(rax + 0x60)) __tailcall

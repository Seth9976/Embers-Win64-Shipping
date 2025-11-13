// 函数: sub_141c53200
// 地址: 0x141c53200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1[1].d) * 0x3f0
void* r8 = *(*arg1 + 0xc8)
*(r9 + r8 + 0x2d0) = arg1[2].d
*(r9 + r8 + 0x2d4) = *(arg1 + 0x14)
*(r9 + r8 + 0x2d8) = arg1[3].d
*(r9 + r8 + 0x2dc) = *(arg1 + 0x1c)
sub_1405cd980(r8 + 0x2e0 + r9, &arg1[4])
int64_t rdx_1 = sx.q(arg1[1].d) * 0x3f0
void* result = *arg1
int64_t rcx_2 = *(result + 0xc8)
*(rdx_1 + rcx_2 + 0x3d2) |= 8
return result

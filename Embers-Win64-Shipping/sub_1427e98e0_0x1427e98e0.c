// 函数: sub_1427e98e0
// 地址: 0x1427e98e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x68)
int64_t r9_1 = sx.q(arg2) * 2
*(rdx + (r9_1 << 3) + 0xb8) = *arg3
*(rdx + (r9_1 << 3) + 0xc0) = arg3[1].d
*(rdx + (r9_1 << 3) + 0xc4) = *(arg3 + 0xc)
*(arg1 + 0x70) = 1
jump(*(**(arg1 + 0x60) + 0x40))

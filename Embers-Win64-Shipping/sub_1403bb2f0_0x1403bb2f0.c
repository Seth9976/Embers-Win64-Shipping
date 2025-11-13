// 函数: sub_1403bb2f0
// 地址: 0x1403bb2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg3
int64_t r8 = arg2 * 3
*arg1 = result
*(arg1 + arg2) = result
*(arg1 + (arg2 << 1)) = result
*(arg1 + r8) = result
void* rcx = arg1 + (arg2 << 2)
*rcx = result
*(rcx + arg2) = result
*(rcx + (arg2 << 1)) = result
*(rcx + r8) = result
return result

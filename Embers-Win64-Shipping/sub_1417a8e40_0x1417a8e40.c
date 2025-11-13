// 函数: sub_1417a8e40
// 地址: 0x1417a8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg2)
void* r9 = **(arg1 + 8)
int64_t r10_1 = r10 * 2
int64_t rdx = r10 * 0xc
void* rcx = *(r9 + 0x3c8)
uint64_t* r8 = *(r9 + 0x28)
*(r8 + rdx) = *(rcx + rdx)
*(r8 + rdx + 8) = *(rcx + rdx + 8)
int64_t result = *(r9 + 0x3e0)
*(*(r9 + 0x68) + (r10_1 << 3)) = *(result + (r10_1 << 3))
return result

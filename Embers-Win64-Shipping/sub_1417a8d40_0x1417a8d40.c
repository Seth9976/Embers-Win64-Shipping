// 函数: sub_1417a8d40
// 地址: 0x1417a8d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(**(arg1 + 8) + (sx.q(*arg2) << 3))
void* r9 = *rax
int64_t r10 = sx.q(rax[1].d)
void* rcx_1 = *(r9 + 0x3c8)
uint64_t* r8_1 = *(r9 + 0x28)
int64_t rdx = r10 * 0xc
int64_t r10_1 = r10 * 2
*(r8_1 + rdx) = *(rcx_1 + rdx)
*(r8_1 + rdx + 8) = *(rcx_1 + rdx + 8)
int64_t result = *(r9 + 0x3e0)
*(*(r9 + 0x68) + (r10_1 << 3)) = *(result + (r10_1 << 3))
return result

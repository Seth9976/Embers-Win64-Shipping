// 函数: sub_141d35900
// 地址: 0x141d35900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
int64_t r8 = sx.q(*arg2)
int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_10 = 0
void* r9 = *rax
int64_t rdx = r8 * 3
int32_t var_10_1 = 0
int64_t rcx = *(r9 + 0x230)
*(rcx + (rdx << 2)) = temp0
*(rcx + (rdx << 2) + 8) = 0
int64_t rdx_1 = r8 * 3
int64_t rcx_1 = *(r9 + 0x248)
*(rcx_1 + (rdx_1 << 2)) = _mm_unpacklo_ps(zx.o(0), 0)
*(rcx_1 + (rdx_1 << 2) + 8) = 0
return 0

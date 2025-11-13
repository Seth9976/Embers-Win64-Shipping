// 函数: sub_141d35980
// 地址: 0x141d35980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
int64_t r8 = sx.q(*arg2)
int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_10 = 0
int64_t* rax_1 = *(*rax + (r8 << 3))
void* r9 = *rax_1
int64_t r8_1 = sx.q(rax_1[1].d)
int32_t var_10_1 = 0
int64_t rcx_1 = *(r9 + 0x230)
int64_t rdx = r8_1 * 3
*(rcx_1 + (rdx << 2)) = temp0
*(rcx_1 + (rdx << 2) + 8) = 0
int64_t rdx_1 = r8_1 * 3
int64_t rcx_2 = *(r9 + 0x248)
*(rcx_2 + (rdx_1 << 2)) = _mm_unpacklo_ps(zx.o(0), 0)
*(rcx_2 + (rdx_1 << 2) + 8) = 0
return 0

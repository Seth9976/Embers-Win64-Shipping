// 函数: sub_140b29c50
// 地址: 0x140b29c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

if (arg1[0x11].d == 0)
    return 

*(*(arg1[0x10] + (sx.q(arg1[0x11].d) << 3) - 8) + 0x30) = _mm_cvtepi32_ps(zx.o(arg3)).d
int64_t rax_2 = arg1[0x10]
int64_t rcx_2 = sx.q(arg1[0x11].d)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg2))
void* rcx_3 = *(rax_2 + (rcx_2 << 3) - 8)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg3 - arg2))
*(rcx_3 + 0x34) = zmm1.d
*(*(arg1[0x10] + (sx.q(arg1[0x11].d) << 3) - 8) + 0x38) = zmm0.d
sub_140b26350(arg1, 0)

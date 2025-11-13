// 函数: src_short_to_float_array
// 地址: 0x141c2c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rax_1 = sx.q(arg3)
int32_t* rdx = arg2 + (rax_1 << 2)
void* rcx = arg1 + (rax_1 << 1)
int32_t i

do
    int32_t rax = sx.d(*(rcx - 2))
    rcx -= 2
    rdx = &rdx[-1]
    uint128_t zmm0
    zmm0.q = _mm_cvtepi32_pd(zx.q(rax)).q f* 0x3f00000000000000
    *rdx = _mm_cvtpd_ps(zmm0).d
    i = arg3
    arg3 -= 1
while (i != 1)

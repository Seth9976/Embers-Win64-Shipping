// 函数: sub_140385000
// 地址: 0x140385000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r15 = sx.q(arg7)
uint128_t zmm7 = zx.o(arg3[1])
int64_t rbx = 0
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(*arg3)).d f* 3.7252903e-09f
zmm7.d = _mm_cvtepi32_ps(zmm7).d f* 3.7252903e-09f
uint128_t zmm8
zmm8.d = _mm_cvtepi32_ps(zx.o(*arg2)).d f* 3.7252903e-09f
int64_t rdx = sx.q(arg6)
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(arg2[2])).d f* 3.7252903e-09f
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(arg2[1])).d f* 3.7252903e-09f
float zmm4
float zmm5

if (rdx s>= 4)
    int64_t rsi_1 = r15 << 2
    result = ((rdx - 4) u>> 2) + 1
    float* rdi_1 = rsi_1 + arg5
    rbx = result << 2
    void* const* i
    
    do
        zmm4 = *(arg1 - rsi_1 - arg5 + rdi_1)
        zmm5 = zmm8.d * zmm4 f+ *arg4
        *arg4 = arg4[1] f- zmm5 f* zmm6.d + zmm9.d * zmm4
        arg4[1] = zmm10.d * zmm4 - zmm7.d * zmm5 + 1e-30f
        rdi_1[neg.q(r15)] = zmm5
        zmm4 = *(arg1 - arg5 + rdi_1)
        zmm5 = zmm8.d * zmm4 f+ *arg4
        *arg4 = arg4[1] f- zmm5 f* zmm6.d + zmm9.d * zmm4
        arg4[1] = zmm10.d * zmm4 - zmm7.d * zmm5 + 1e-30f
        *rdi_1 = zmm5
        zmm4 = *(rsi_1 - arg5 + arg1 + rdi_1)
        zmm5 = zmm8.d * zmm4 f+ *arg4
        *arg4 = arg4[1] f- zmm5 f* zmm6.d + zmm9.d * zmm4
        arg4[1] = zmm10.d * zmm4 - zmm7.d * zmm5 + 1e-30f
        rdi_1[r15] = zmm5
        zmm4 = *((r15 << 3) - arg5 + arg1 + rdi_1)
        zmm5 = zmm8.d * zmm4 f+ *arg4
        *arg4 = arg4[1] f- zmm5 f* zmm6.d + zmm9.d * zmm4
        arg4[1] = zmm10.d * zmm4 - zmm7.d * zmm5 + 1e-30f
        rdi_1[r15 * 2] = zmm5
        rdi_1 = &rdi_1[r15 * 4]
        i = result
        result -= 1
    while (i != 1)
    r15 = zx.q(arg7)

if (rbx s< rdx)
    int64_t rax_5 = sx.q(r15.d)
    result = rax_5 * rbx
    int64_t i_2 = rdx - rbx
    float* rcx_2 = arg5 + (result << 2)
    int64_t i_1
    
    do
        zmm4 = *(arg1 - arg5 + rcx_2)
        zmm5 = zmm8.d * zmm4 f+ *arg4
        *arg4 = arg4[1] f- zmm5 f* zmm6.d + zmm9.d * zmm4
        arg4[1] = zmm10.d * zmm4 - zmm7.d * zmm5 + 1e-30f
        *rcx_2 = zmm5
        rcx_2 = &rcx_2[rax_5]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result

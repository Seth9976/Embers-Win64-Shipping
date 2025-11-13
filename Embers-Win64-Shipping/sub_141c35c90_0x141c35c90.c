// 函数: sub_141c35c90
// 地址: 0x141c35c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 8)

if (r10 s<= arg4)
    return 

int32_t rcx_1 = r10 - arg4
int64_t rbp_1 = arg2[6] - arg5
float (* rsi_1)[0x4] = arg2[4] - arg5
float (* rdi_1)[0x4] = arg2[2] - arg5
float (* rbx_1)[0x4] = *arg2 - arg5
float zmm4[0x4] = *(arg3 + (sx.q(rcx_1) << 2))
int128_t* r8 = arg5 + (sx.q(arg4) << 2)
float (* rax)[0x4] = arg3 + (sx.q(rcx_1 - 4) << 2)
uint64_t i_1 = zx.q(((r10 - arg4 - 1) u>> 2) + 1)
uint64_t i

do
    float zmm3[0x4] = *(arg3 - arg5 + r8)
    float temp0_1[0x4] = __shufps_xmmps_memps_immb(zmm4, *rax, 0xe4)
    zmm4 = *rax
    rax -= 0x10
    *r8 = _mm_add_ps(
        _mm_add_ps(_mm_mul_ps(*(r8 + rbp_1), _mm_shuffle_ps(temp0_1, temp0_1, 0xb1)), 
            _mm_mul_ps(*(rsi_1 + r8), temp0_1)), 
        _mm_add_ps(_mm_mul_ps(*(rdi_1 + r8), _mm_shuffle_ps(zmm3, zmm3, 0xb1)), 
        _mm_mul_ps(*(rbx_1 + r8), zmm3)))
    r8 = &r8[1]
    i = i_1
    i_1 -= 1
while (i != 1)

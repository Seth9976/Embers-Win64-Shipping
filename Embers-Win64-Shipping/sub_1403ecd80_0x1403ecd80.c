// 函数: sub_1403ecd80
// 地址: 0x1403ecd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
uint64_t r14 = zx.q(arg8)
int64_t i_1 = 0
uint32_t rax_2 = (r14 * 5).d
int64_t rdx = 0
int64_t rdi = sx.q(rax_2)
void var_5a

if (rax_2 s> 0)
    do
        float zmm0 = *(arg1 + (rdx << 2))
        rdx += 1
        *(&var_5a + (rdx << 1)) = (int.d(zmm0 * 16384f)).w
    while (rdx s< rdi)

int64_t i = 0
int32_t rax_5 = r14.d * 0x19
void var_1e8

if (rax_5 s> 0)
    do
        void* rax_6 = arg5 - &var_1e8 + (i << 2)
        i += 1
        void var_1ec
        *(&var_1ec + (i << 2)) = int.d(*(&var_1e8 + rax_6) * 262144f)
    while (i s< sx.q(rax_5))

int16_t var_58[0x14]
int32_t result = sub_14040cb30(&var_58, arg2, arg3, arg4, &var_1e8, arg6, arg7, r14.d)
uint128_t zmm0_1

if (rdi s>= 4)
    void* rcx_1 = arg1 + 8
    
    do
        int32_t rax_10 = sx.d(var_58[i_1])
        i_1 += 4
        rcx_1 += 0x10
        void var_5e
        int32_t rax_11 = sx.d(*(&var_5e + (i_1 << 1)))
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_10))
        void var_5c
        int32_t rax_12 = sx.d(*(&var_5c + (i_1 << 1)))
        zmm0_1.d = zmm0_1.d f* 6.10351562e-05f
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_11))
        *(rcx_1 - 0x18) = zmm0_1.d
        result = sx.d(*(&var_5a + (i_1 << 1)))
        zmm1.d = zmm1.d f* 6.10351562e-05f
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_12))
        *(rcx_1 - 0x14) = zmm1.d
        zmm0_1.d = zmm0_1.d f* 6.10351562e-05f
        *(rcx_1 - 0x10) = zmm0_1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 6.10351562e-05f
        *(rcx_1 - 0xc) = zmm1.d
    while (i_1 s< rdi - 3)

while (i_1 s< rdi)
    result = sx.d(var_58[i_1])
    i_1 += 1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 6.10351562e-05f
    *(arg1 + (i_1 << 2) - 4) = zmm0_1.d

__security_check_cookie(rax_1 ^ &var_238)
return result

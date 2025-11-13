// 函数: sub_14110fdb0
// 地址: 0x14110fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_c8 = 1
char var_b0 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_b4 = (1 << (data_1439c7a34).b) - 1
uint64_t rax_4 = zx.q(*(arg1 + 0x18))
int128_t var_c4 = data_143dbb1e0
int64_t var_a8 = 0
int32_t var_a0 = 0
void* var_e0
__builtin_memset(&var_e0, 0, 0x18)
void var_e8
int128_t var_d8
(*(*rcx_1 + 0x488))(rcx_1, &var_e8, &data_143f02b98, zx.q((rax_4 * 3).d << 4), 1, &var_d8, &var_e0)
sub_1405d1600(arg1 + 0x10, &var_e8)
int128_t zmm6 = sub_1405d1550(&var_e8)
int32_t rbx = *(arg1 + 0x18)
void* rsi = var_e0
int128_t zmm11 = 0x3f800000
int32_t i_1 = 0
int128_t zmm9
zmm9.d = 1f f/ cosf(3.14159274f f/ _mm_cvtepi32_ps(zx.o(rbx)).d).d

if (rbx s> 0)
    int64_t rdi_1 = 0
    void* r14_1 = rsi + 4
    int128_t var_38_1 = zmm6
    int128_t zmm10 = 0x40c90fdb
    int32_t i
    
    do
        i = i_1 + 1
        zmm6.d = zmm11.d f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18))).d
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(i_1)).d f* zmm6.d
        zmm1.d = zmm1.d f* zmm10.d
        float zmm0_3[0x4]
        int32_t zmm6_1
        float zmm9_1
        int32_t zmm10_1
        zmm0_3, zmm6_1, zmm9_1, zmm10_1 = __libm_sse2_sincosf_(zmm1)
        float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(i))
        zmm0_3[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
        temp0_3[0] = temp0_3[0] f* zmm6_1
        temp0_4[0] = temp0_4[0] * zmm9_1
        temp0_3[0] = temp0_3[0] f* zmm10_1
        uint128_t zmm0_2
        int32_t zmm7_2
        int32_t zmm8_2
        int32_t zmm9_2
        zmm0_2, zmm7_2, zmm8_2, zmm9_2, zmm10, zmm11 = __libm_sse2_sincosf_(temp0_3)
        *(r14_1 + 4) = zmm7_2
        zmm1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        i_1 = i
        *(r14_1 + 8) = zmm8_2
        *(r14_1 - 4) = 0
        r14_1 += 0x30
        *(rdi_1 + rsi + 0x10) = 0
        *(rdi_1 + rsi + 0x20) = 0
        *(rdi_1 + rsi + 0x28) = 0x3f000000
        *(rdi_1 + rsi + 0x2c) = 0x3f000000
        rdi_1 += 0x30
        zmm1.d = zmm1.d f* zmm9_2
        zmm0_2.d = zmm0_2.d f* zmm9_2
        *(rdi_1 + rsi - 0x18) = zmm1.d
        *(rdi_1 + rsi - 0x14) = zmm0_2.d
    while (i s< *(arg1 + 0x18))

int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_128)
return result

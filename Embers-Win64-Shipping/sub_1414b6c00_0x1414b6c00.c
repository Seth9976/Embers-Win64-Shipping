// 函数: sub_1414b6c00
// 地址: 0x1414b6c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r9 = data_1439b7094
void* var_b0
int64_t* var_c8 = &var_b0
int32_t var_98 = 1
char var_80 = 0
int128_t var_a8
int128_t* var_d0 = &var_a8
int64_t* rcx_1 = data_143f0f180
int128_t var_94 = data_143dbb1e0
int32_t var_84 = (1 << (data_1439c7a34).b) - 1
int64_t var_78 = 0
int32_t var_70 = 0
__builtin_memset(&var_b0, 0, 0x18)
void var_b8
(*(*rcx_1 + 0x488))(rcx_1, &var_b8, &data_143f02b98, zx.q(r9 << 4), 1, var_d0, var_c8)
sub_1405d1600(arg1 + 0x10, &var_b8)
int32_t zmm6 = sub_1405d1550(&var_b8)
int32_t rsi = data_1439b7094
int32_t rdi = 0
int128_t zmm7
zmm7.d = 1f / cosf(3.14159274f f/ _mm_cvtepi32_ps(zx.o(rsi)).d)[0]

if (rsi s> 0)
    int32_t var_28_1 = zmm6
    void* rbx_2 = var_b0 + 4
    int128_t zmm9 = 0x40c90fdb
    
    do
        *(rbx_2 - 4) = 0
        uint128_t zmm1
        zmm1.d = float.s(rdi)
        float zmm0_2[0x4] = zx.o(0)
        zmm0_2[0] = float.s(rsi - 1)
        zmm1.d = zmm1.d f/ zmm0_2[0]
        zmm1.d = zmm1.d f* zmm9.d
        int32_t zmm6_1
        int32_t zmm7_1
        int32_t zmm8_1
        zmm0_2, zmm6_1, zmm7_1, zmm8_1, zmm9 = __libm_sse2_sincosf_(zmm1)
        rdi += 1
        zmm1.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 1).d f* zmm7_1
        zmm0_2[0] = zmm0_2[0] f* zmm7_1
        zmm1.d = zmm1.d f+ zmm8_1
        zmm0_2[0] = zmm0_2[0] f+ zmm8_1
        zmm1.d = zmm1.d f* zmm6_1
        zmm0_2[0] = zmm0_2[0] f* zmm6_1
        *(rbx_2 + 4) = zmm1.d
        *(rbx_2 + 8) = zmm0_2[0]
        rbx_2 += 0x10
        rsi = data_1439b7094
    while (rdi s< rsi)

int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_f8)
return result

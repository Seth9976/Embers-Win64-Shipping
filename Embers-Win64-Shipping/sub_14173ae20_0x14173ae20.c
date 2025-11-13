// 函数: sub_14173ae20
// 地址: 0x14173ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
float zmm4[0x4] = *arg2
float zmm2 = zmm4[0]
zmm4[0] = zmm4[0] - arg5
float var_f4 = arg5 * arg5
float zmm0 = *(arg2 + 4)
int32_t rsi = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
uint64_t var_d8 = 0
float var_d0 = 0f
temp0[0] = zmm0 - arg5
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2 + arg5
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm0 + arg5
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_e8[0x4] = temp0_3
var_e8 = temp0_3
uint128_t zmm6
int128_t zmm7
zmm6, zmm7 = sub_14173e270(arg1, &var_e8, &var_d8)
float* var_c0 = &var_f4
int32_t var_f0
int32_t* var_b0 = &var_f0
int32_t var_f8
int32_t* var_a8 = &var_f8
int64_t var_b8 = arg3
uint64_t rdi_1 = var_d8
var_f0 = 0x7f7fffff
uint64_t r15 = rdi_1
var_f8 = rsi
int128_t* var_c8 = arg2
int64_t r12 = rdi_1 + (sx.q(var_d0) << 3)

if (rdi_1 != r12)
    uint128_t var_38_1 = zmm6
    int128_t var_48_1 = zmm7
    zmm7 = 0x3f800000
    
    do
        int32_t rcx_1 = zx.d(*(arg1 + 0x46)) - 1
        float zmm1_1 = *(arg1 + 0x4c)
        float zmm2_1 = *(arg1 + 0x3c)
        uint32_t r8_1 = zx.d(*(arg1 + 0x46))
        uint128_t zmm4_1 = *(arg1 + 0x30)
        int32_t rbx_3 = *(r15 + 4) * rcx_1 + *r15
        int32_t r9 = rbx_3 + divs.dp.d(sx.q(rbx_3), rcx_1)
        int64_t rcx_2 = sx.q(r9)
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(r9)
        uint128_t zmm3_1 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp8_1:temp9_1, r8_1)))
        int64_t rdx_4 = *(arg1 + 0x10)
        zmm6 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp8_1:temp9_1, r8_1)))
        uint128_t zmm5_1
        zmm5_1.d = zmm6.d f+ zmm7.d
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_2 << 1)))).d f* zmm1_1
        zmm0_1.d = zmm0_1.d f+ zmm2_1
        int32_t var_98_1 = zmm0_1.d
        uint64_t var_88 = (_mm_unpacklo_ps(zmm6, zmm3_1.q)).q
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_2 << 1) + 2))).d f* zmm1_1
        zmm0_1.d = zmm0_1.d f+ zmm2_1
        int32_t var_8c_1 = zmm0_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm5_1, zmm3_1.q)
        zmm3_1.d = zmm3_1.d f+ zmm7.d
        uint64_t var_7c = zmm0_1.q
        int64_t rcx_3 = sx.q(r8_1 + r9)
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_3 << 1)))).d f* zmm1_1
        zmm0_1.d = zmm0_1.d f+ zmm2_1
        var_e8[2] = zmm0_1.d
        float rax_15 = var_e8[2]
        uint64_t var_70 = (_mm_unpacklo_ps(zmm6, zmm3_1.q)).q
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_3 << 1) + 2))).d f* zmm1_1
        zmm1_1 = var_88:4.d
        zmm0_1.d = zmm0_1.d f+ zmm2_1
        zmm2_1 = *(arg1 + 0x38)
        var_d0 = zmm0_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm5_1, zmm3_1.q)
        zmm3_1 = *(arg1 + 0x34)
        uint64_t var_64 = zmm0_1.q
        zmm0_1.d = zmm4_1.d f* zmm6.d
        var_88.d = zmm0_1.d
        zmm0_1.d = var_98_1.d f* zmm2_1
        var_88:4.d = zmm1_1 f* zmm3_1.d
        int32_t var_80_2 = zmm0_1.d
        int32_t rbx_4 = rbx_3 * 2
        zmm0_1.d = zmm4_1.d f* zmm5_1.d
        var_7c:4.d = var_7c:4.d f* zmm3_1.d
        var_7c.d = zmm0_1.d
        zmm0_1.d = var_8c_1.d f* zmm2_1
        int32_t var_74_2 = zmm0_1.d
        zmm0_1.d = zmm4_1.d f* zmm6.d
        var_70:4.d = var_70:4.d f* zmm3_1.d
        var_70.d = zmm0_1.d
        zmm0_1.d = rax_15.d f* zmm2_1
        zmm4_1.d = zmm4_1.d f* zmm5_1.d
        int32_t var_68_2 = zmm0_1.d
        zmm0_1.d = var_64:4.d.d f* zmm3_1.d
        var_64:4.d = zmm0_1.d
        var_64.d = zmm4_1.d
        float var_5c_2 = var_d0 * zmm2_1
        sub_1417134e0(&var_c8, rbx_4, &var_88, &var_7c, &var_64)
        zmm7 = sub_1417134e0(&var_c8, rbx_4 + 1, &var_88, &var_64, &var_70)
        r15 += 8
    while (r15 != r12)
    
    rsi = var_f8

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rsi)

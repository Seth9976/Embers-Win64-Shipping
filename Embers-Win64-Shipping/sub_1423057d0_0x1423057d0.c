// 函数: sub_1423057d0
// 地址: 0x1423057d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
int32_t arg_20
sub_142337b80(arg4, arg3, &arg_10, &arg_20)
int32_t r14 = arg_20
void* rax_2 = *(arg2 + 0x430)
void* rdi_1 = sx.q(arg_10) * 0xe8 + *arg4
float var_78
int128_t var_68
char rax_3

if (rax_2 != 0 && *(rax_2 + 0x300) s> 0 && (*(arg2 + 0x71a) & 2) == 0 && not(0f f>= *(arg2 + 0x734))
        && *(rdi_1 + 0x20) s> 0)
    var_68 = *(rdi_1 + 0x44)
    rax_3 = sub_142312a80(arg2, &var_68, r14, &var_78)

if (rax_2 == 0 || *(rax_2 + 0x300) s<= 0 || (*(arg2 + 0x71a) & 2) != 0 || 0f f>= *(arg2 + 0x734)
        || *(rdi_1 + 0x20) s<= 0 || rax_3 == 0)
    sub_141f4f710(arg1, arg2, rdi_1, &arg4[0x17], arg5, r14, arg6)
else
    float zmm5[0x4] = *(arg2 + 0x1e0)
    float temp0_1[0x4] = __mulps_xmmps_memps(*(arg2 + 0x1c0), data_143f57950)
    int32_t var_74
    float temp0_2[0x4] = _mm_unpacklo_ps(var_74, 0)
    int32_t var_70
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_78, var_70[0].q), temp0_2[0].q), *(arg2 + 0x1d0))
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_8[0x4] = _mm_rcp_ps(zmm5)
    float zmm7[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f57820)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_6)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_7)
    bool cond:0_1 = 1f f<= *(arg2 + 0x734)
    float temp0_15[0x4] = _mm_sub_ps(temp0_14, temp0_11)
    float temp0_16[0x4] = _mm_mul_ps(temp0_8, temp0_8)
    float temp0_17[0x4] = _mm_add_ps(temp0_8, temp0_8)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm5)
    float temp0_20[0x4] = _mm_mul_ps(temp0_13, temp0_18)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm7)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm5)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f57850), data_143f57940, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_6))
    zmm5 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm5)
    var_78 = temp0_36[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)
    float var_74_1 = temp0_37[0]
    float var_70_1 = temp0_38[0]
    
    if (not(cond:0_1))
        float zmm6_1 = sub_141f4f710(&var_68, arg2, rdi_1, &arg4[0x17], arg5, r14, arg6)
        float zmm1_1 = *(arg2 + 0x734)
        float zmm0_1[0x4] = var_68.d
        int128_t zmm9
        zmm9.d = 1f - zmm1_1
        temp0_36[0] = temp0_36[0] * zmm1_1
        zmm0_1[0] = zmm0_1[0] f* zmm9.d
        temp0_38[0] = temp0_38[0] * zmm1_1
        temp0_36[0] = temp0_36[0] + zmm0_1[0]
        zmm0_1 = var_68:4.d
        zmm0_1[0] = zmm0_1[0] f* zmm9.d
        zmm6_1 = zmm6_1 * zmm1_1 + zmm0_1[0]
        var_78 = temp0_36[0]
        zmm0_1 = var_68:8.d
        zmm0_1[0] = zmm0_1[0] f* zmm9.d
        float var_74_2 = zmm6_1
        temp0_38[0] = temp0_38[0] + zmm0_1[0]
        var_70_1 = temp0_38[0]
    
    *arg1 = var_78.q
    arg1[1].d = var_70_1

return arg1

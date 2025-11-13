// 函数: sub_1420644f0
// 地址: 0x1420644f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4[1].d
int64_t var_148 = *arg4
int32_t var_f8
int32_t var_e8
uint64_t result = sub_140ad6430(&var_148, &var_f8, &var_e8)
float zmm0_1[0x4] = *(arg4 + 0xc)
int32_t zmm8 = *arg4
int32_t zmm9 = *(arg4 + 4)
int128_t zmm10 = arg4[1].d
int128_t zmm12 = var_148:4.d
int32_t zmm5 = var_e8
int128_t zmm13
zmm13.d = rax.d f* zmm0_1[0]
int32_t var_12c = 0
float var_138[0x4]
float zmm1[0x4] = var_138
int128_t zmm11
zmm11.d = var_148.d.d f* zmm0_1[0]
zmm1[0] = var_f8
int32_t var_11c = 0
zmm12.d = zmm12.d f* zmm0_1[0]
int32_t var_10c = 0
float var_128[0x4]
var_128[0] = zmm5
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
float temp0_1[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
int32_t var_f4
temp0[0] = var_f4
int32_t var_e4
temp0_1[0] = var_e4
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
int32_t var_f0
temp0_2[0] = var_f0
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
int32_t var_e0
temp0_3[0] = var_e0
*arg2 = temp0_4
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
arg2[1] = temp0_5
var_138 = temp0_4
float var_118[0x4]
var_118[0] = zmm8
float temp0_6[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
temp0_6[0] = zmm9
int32_t var_fc = 0x3f800000
float var_108[0x4]
var_108[0] = zmm11.d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
float temp0_8[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
temp0_7[0] = zmm10.d
temp0_8[0] = zmm12.d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
arg2[2] = temp0_9
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_10[0] = zmm13.d
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
arg2[3] = temp0_11
int32_t rcx_2 = arg3[1].d + arg1[1].d
arg1[1].d = rcx_2

if (rcx_2 s> *(arg1 + 0xc))
    result = sub_1405a4f90(arg1)

int32_t i = 0

if (arg3[1].d s> 0)
    int128_t* r12_1 = nullptr
    int64_t r13_1 = 0
    int32_t var_cc_1 = 0x3f800000
    int32_t var_bc_1 = 0x3f800000
    
    do
        int64_t rbx_1 = *arg3
        sub_1408041d0(arg2, &var_138)
        float zmm1_1[0x4] = *(r12_1 + rbx_1 + 4)
        float zmm2_1[0x4] = *(r12_1 + rbx_1 + 8)
        float* rax_1 = *arg1
        float var_d8[0x4]
        var_d8[0] = (*(r12_1 + rbx_1))[0]
        float temp0_12[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
        temp0_12[0] = zmm1_1[0]
        int64_t var_b8_1 = 0
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
        temp0_13[0] = zmm2_1[0]
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        var_d8 = temp0_14
        float temp0_16[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_14, temp0_14, 0xff), temp0_11)
        float temp0_18[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_14, temp0_14, 0x55), temp0_5)
        float temp0_20[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_14, temp0_14, 0xaa), temp0_9)
        float temp0_22[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_14, temp0_14, 0), var_138)
        float temp0_25[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_16, temp0_20), _mm_add_ps(temp0_18, temp0_22))
        *(rax_1 + r13_1) = temp0_25[0]
        *(*arg1 + r13_1 + 4) = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)[0]
        int64_t rbx_2 = *arg3
        sub_1408041d0(arg2, &var_138)
        float zmm0_3[0x4] = *(r12_1 + rbx_2 + 0xc)
        i += 1
        float zmm1_2[0x4] = *(r12_1 + rbx_2 + 0x10)
        float zmm2_2[0x4] = *(r12_1 + rbx_2 + 0x14)
        r12_1 += 0x18
        int64_t rax_3 = *arg1
        float var_c8[0x4]
        var_c8[0] = zmm0_3[0]
        float temp0_27[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
        temp0_27[0] = zmm1_2[0]
        int64_t var_b8_2 = 0
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc6)
        temp0_28[0] = zmm2_2[0]
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
        var_c8 = temp0_29
        float temp0_31[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_29, temp0_29, 0xff), temp0_11)
        float temp0_33[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_29, temp0_29, 0x55), temp0_5)
        float temp0_35[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_29, temp0_29, 0xaa), temp0_9)
        float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_29, temp0_29, 0), var_138)
        float temp0_40[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_31, temp0_35), _mm_add_ps(temp0_33, temp0_37))
        *(rax_3 + r13_1 + 8) = temp0_40[0]
        result = *arg1
        *(result + r13_1 + 0xc) = _mm_shuffle_ps(temp0_40, temp0_40, 0x55)[0]
        r13_1 += 0x10
    while (i s< arg3[1].d)

return result

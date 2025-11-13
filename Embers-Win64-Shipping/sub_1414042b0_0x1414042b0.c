// 函数: sub_1414042b0
// 地址: 0x1414042b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint128_t* rsi = arg4
int64_t* arg_30
int64_t* rdi = arg_30
uint128_t* r14 = arg3
uint64_t var_108

if (data_143ec82ec != 0)
    int64_t var_100
    var_100.d = rdi[1].d
    var_108 = *rdi
    sub_1422aff50(arg2, arg5, arg3, arg4, &var_108)

int32_t var_e0 = *(r14 + 0x18)
uint128_t zmm1 = zx.o(r14[1].q)
int32_t rax_3 = *(rsi + 0x18)
uint128_t var_f8 = *r14
int32_t var_c4 = rax_3
uint128_t var_dc = *rsi
int32_t var_70 = rdi[1].d
uint64_t var_e8 = zmm1.q
uint128_t var_b8 = *arg5
uint64_t var_cc = rsi[1].q
uint128_t var_98 = arg5[2]
uint128_t zmm0 = zx.o(*rdi)
uint128_t var_a8 = arg5[1]
zmm1 = arg5[3]
var_108 = &arg_10
uint64_t var_78 = zmm0.q
uint128_t var_88 = zmm1
uint128_t* var_100_1 = &var_f8
int32_t* result = sub_1413b8590(arg1 + 0x6428, &arg_30, &var_108, nullptr)

if (arg6[3].b == 0)
    return result

float zmm3[0x4] = *arg6
void* rax_5 = arg_10
float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
int64_t* rcx_2 = *(rax_5 + 0x110)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
arg_30 = rcx_2
float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
float temp0_8[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_1, temp0_1, 0x12))
float zmm1_1[0x4] = arg6[2]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
float temp0_10[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
float zmm4_1[0x4] = data_143eca1e0
float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
float temp0_15[0x4] = _mm_sub_ps(zmm4_1, temp0_12)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1_1)
float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1_1), data_143eca1f0)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), temp0_20, 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), temp0_23, 0x88)
float zmm0_1[0x4] = arg6[1]
zmm4_1[0].q = zmm0_1 u>> 0x40
float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
float temp0_27[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
float var_38_1[0x4] = temp0_27
float var_68[0x4] = temp0_22
float var_58_1[0x4] = temp0_25
float var_48_1[0x4] = temp0_28
return sub_1413b8160(arg1 + 0x6478, &arg_30, &var_68)

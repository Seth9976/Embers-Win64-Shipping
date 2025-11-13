// 函数: sub_142233bf0
// 地址: 0x142233bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
sub_1407473e0(arg1 + 0x1a8, arg5)
int32_t var_e8 = 4
void* var_e0 = arg1
int128_t zmm0 = var_e8.o
*(arg1 + 0x1a0) = arg4.d
*(arg1 + 0x190) = zmm0

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 8) != 0
        && __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 8) != 0)
    var_e8.q = *(arg1 + 8)
    void* var_d8 = arg1
    void** var_c8_1 = &var_d8
    int64_t (* var_d0)(int64_t* arg1) = sub_14222c2f0
    sub_14226a670(&var_e8, &var_d0)

void var_88
sub_142231940(arg1, &var_88, 0)
int512_t zmm6_1
zmm6_1.o = zx.o(0)

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2) != 0)
    float zmm1_1[0x4] = *(arg1 + 0x1a0)
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm1_1, 0)
    float var_78[0x4]
    float var_78_1[0x4] =
        _mm_mul_ps(var_78, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q), temp0_1[0].q))

void var_b8
sub_142231940(arg1, &var_b8, 1)

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg3) != 0)
    float zmm1_2[0x4] = *(arg1 + 0x1a0)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm1_2, 0)
    float var_a8[0x4]
    float var_a8_1[0x4] =
        _mm_mul_ps(var_a8, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q), temp0_5[0].q))

void**** rax_7
int512_t zmm2
int512_t zmm3_2
uint128_t zmm6_2
uint128_t zmm7
rax_7, zmm2, zmm3_2, zmm6_2, zmm7 = sub_142264e40(&var_e8, arg2, arg3, &var_88, &var_b8)
*(arg1 + 8) = *rax_7

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 8) != 0)
    uint128_t var_48_1 = zmm7
    sub_1422784f0(arg1 + 8, arg1 + 0x190)
    zmm7 = zx.o(0)
    int32_t rbp_1 = 0
    
    if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2) != 0
            && sub_142271960(arg2) != 0)
        zmm7 = sub_14226de70(arg2)
        rbp_1 = 1
    
    if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg3) != 0
            && sub_142271960(arg3) != 0)
        zmm7.d = zmm7.d f+ sub_14226de70(arg3).d
        rbp_1 += 1
    
    if (rbp_1 != 0)
        zmm6_2.d = zmm7.d f/ _mm_cvtepi32_ps(zx.o(rbp_1)).d
    
    bool cond:0_1 = (*(arg1 + 0x84) & 1) == 0
    *(arg1 + 0x88) = zmm6_2.d
    
    if (cond:0_1)
        zmm3_2.o = 0x3f800000
    else
        zmm3_2.o = *(arg1 + 0x1a0)
    
    zmm2.o = zmm6_2
    sub_142235990(arg1 + 0x8c, arg1 + 8)
    
    if (sub_1422719d0(arg2) != 0 && sub_1422719d0(arg3) != 0)
        if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2) != 0
                && sub_142271780(arg2) == 0)
            sub_142275670(arg2)
        
        if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg3) != 0
                && sub_142271780(arg3) == 0)
            sub_142275670(arg3)

uint64_t result = sub_140745b20(arg5)
__security_check_cookie(rax_1 ^ &var_118)
return result

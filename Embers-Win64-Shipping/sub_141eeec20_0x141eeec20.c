// 函数: sub_141eeec20
// 地址: 0x141eeec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4] = arg2

if ((arg1[0x3e].b & 0xc) == 0 || (*(*arg1 + 0x5c0))().b == 0
        || (*(arg1[0x29] + 0x258) == 0 && (*(arg1 + 0x1f1) & 4) == 0))
    return 

void* rbx_1 = arg1[0x16]
arg2 = *(rbx_1 + 0x1c0)
uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), arg2, 4))
float var_98[0x4] = arg2
void var_a8
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (temp0_2 != 0)
    *(rbx_1 + 0x180) = arg2
    int32_t* rax_3
    rax_3, zmm6, zmm7, zmm8, zmm9 = sub_140adf5d0(&var_98, &var_a8)
    *(rbx_1 + 0x190) = *rax_3
    *(rbx_1 + 0x198) = rax_3[2]

int64_t var_c8 = *(rbx_1 + 0x190)
int32_t rax_5 = *(rbx_1 + 0x198)
int32_t var_b8
(*(*arg1 + 0x670))(arg1, &var_b8, zmm6)
char rdx_3 = arg1[0x3e].b
int64_t* rax_8

if ((rdx_3 & 8) == 0)
    int64_t* rcx_3 = *(arg1[0x29] + 0x258)
    
    if (rcx_3 != 0 && (rdx_3 & 4) != 0)
        rax_8 = (*(*rcx_3 + 0x6a0))(rcx_3, &var_a8)
        goto label_141eeed5c
    
    return 

rax_8 = (*(*arg1 + 0x678))(arg1, &var_a8, &var_c8, zmm6, &var_b8)
label_141eeed5c:
float var_28_1[0x4] = zmm7
float var_38_1[0x4] = zmm8
float var_48_1[0x4] = zmm9
int64_t var_d8 = *rax_8
int32_t rax_10 = rax_8[1].d
float zmm11[0x4]
float var_68_1[0x4] = zmm11
float zmm0[0x4]
uint32_t zmm4_1[0x4]
float zmm5_1[0x4]
uint32_t zmm14[0x4]

if ((*(*arg1 + 0x7c8))(arg1) == 0)
    zmm14 = data_143f3abe0
    zmm5_1 = var_d8.d
    zmm4_1 = data_143f3a9d0
    float temp0_3[0x4] = _mm_unpacklo_ps(var_d8:4.d, zx.o(0)[0].q)
    uint32_t temp0_4[0x4] = _mm_and_ps(zmm4_1, zmm14)
    arg2 = data_143f3abf0
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, rax_10[0].q), temp0_3[0].q)
    float temp0_7[0x4] = _mm_div_ps(temp0_6, zmm14)
    float temp0_9[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_7))
    arg2 = _mm_and_ps(_mm_cmpeq_ps(arg2, __andps_xmmxud_memxud(temp0_7, data_143f3a9d0), 2), 
        temp0_9 ^ temp0_7)
    float temp0_17[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_4), 
        _mm_min_ps(_mm_sub_ps(temp0_6, _mm_mul_ps(arg2 ^ temp0_9, zmm14)), temp0_4))
    zmm6 = _mm_cmpeq_ps(zx.o(0), temp0_17, 2)
    float temp0_19[0x4] = _mm_add_ps(temp0_17, zmm14)
    zmm6 = _mm_and_ps(zmm6, temp0_19 ^ temp0_17) ^ temp0_19
    zmm9 = _mm_and_ps(_mm_sub_ps(zmm6, zmm14) ^ zmm6, _mm_cmpeq_ps(data_143f3abd0, zmm6, 1)) ^ zmm6
    var_d8.d = zmm9[0]
    zmm7 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
    zmm8 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
else
    var_d8.d = 0
    zmm0, zmm6 = sub_140a454f0(var_d8:4.d, 0x43b40000)
    zmm7 = zmm0
    
    if (not(zmm7[0] >= 0f))
        zmm7[0] = zmm7[0] f+ zmm6[0]
    
    if (not(zmm7[0] <= 180f))
        zmm7[0] = zmm7[0] f- zmm6[0]
    
    zmm9 = var_d8.d
    zmm8 = zx.o(0)
    zmm14 = data_143f3abe0

float zmm13[0x4] = var_c8:4.d
float zmm10[0x4] = rax_5
zmm5_1 = var_c8.d
zmm11 = data_143f3abf0
zmm4_1 = data_143f3a9d0
float temp0_26[0x4] = _mm_unpacklo_ps(zmm13, zx.o(0)[0].q)
uint32_t temp0_27[0x4] = _mm_and_ps(zmm4_1, zmm14)
float temp0_29[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm10[0].q), temp0_26[0].q)
float temp0_30[0x4] = _mm_unpacklo_ps(zmm7, 0)
float temp0_33[0x4] =
    _mm_sub_ps(temp0_29, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm8[0].q), temp0_30[0].q))
float var_d0_2 = zmm8[0]
var_d8:4.d = zmm7[0]
float temp0_34[0x4] = _mm_div_ps(temp0_33, zmm14)
float temp0_36[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_34))
zmm11 = _mm_and_ps(_mm_cmpeq_ps(zmm11, __andps_xmmxud_memxud(temp0_34, data_143f3a9d0), 2), 
    temp0_36 ^ temp0_34)
float temp0_44[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_27), 
    _mm_min_ps(_mm_sub_ps(temp0_33, _mm_mul_ps(zmm11 ^ temp0_36, zmm14)), temp0_27))
zmm6 = _mm_cmpeq_ps(zx.o(0), temp0_44, 2)
float temp0_46[0x4] = _mm_add_ps(temp0_44, zmm14)
zmm6 = _mm_and_ps(zmm6, temp0_46 ^ temp0_44) ^ temp0_46
float temp0_48[0x4] = _mm_cmpeq_ps(data_143f3abd0, zmm6, 1)
arg2 = _mm_and_ps(_mm_sub_ps(zmm6, zmm14) ^ zmm6, temp0_48) ^ zmm6

if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x3a83126f, 0x3a83126f, 0), 
        __andps_xmmxud_memxud(arg2, data_143f3a9d0), 1))) == 0)
    return 

zmm0 = var_c8.d
zmm6 = 0x7fffffff
zmm0[0] = zmm0[0] - zmm9[0]

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] <= 0.00100000005f))
    zmm0, zmm6 = sub_140ad6d00(var_c8.d, zmm9, var_b8)
    zmm10 = rax_5
    zmm13 = var_c8:4.d
    zmm8 = var_d0_2
    zmm7 = var_d8:4.d
    var_d8.d = zmm0[0]

zmm13[0] = zmm13[0] - zmm7[0]

if (not(_mm_and_ps(zmm13, zmm6)[0] <= 0.00100000005f))
    int32_t var_b4
    zmm0, zmm6 = sub_140ad6d00(zmm13, zmm7, var_b4)
    zmm10 = rax_5
    zmm8 = var_d0_2
    var_d8:4.d = zmm0[0]

zmm10[0] = zmm10[0] - zmm8[0]
int32_t var_b0

if (not(_mm_and_ps(zmm10, zmm6)[0] <= 0.00100000005f))
    int32_t var_d0_3 = sub_140ad6d00(zmm10, zmm8, var_b0)
(*(*arg1 + 0x478))(arg1, &data_143dbb1f8, sub_140ade170(&var_d8, &var_98), 0, 0, 0)

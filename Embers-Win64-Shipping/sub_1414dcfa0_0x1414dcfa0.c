// 函数: sub_1414dcfa0
// 地址: 0x1414dcfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg5
int64_t* r14 = *(arg2 + 0x1a0)
int64_t rax = *rbx
int64_t* arg_8 = r14
int64_t arg_10 = 0
sub_1414b9970(arg1 + 0x130, arg2, r14, arg3, 
    sub_141439db0(arg1, arg2, r14, rbx, (*(rax + 0x40))(rbx, zx.q(arg3[0x2a9].d), &arg_10), arg3, 
        arg3.d + 0x10), 
    arg4, arg6, arg7, 1)
int512_t zmm6_1
zmm6_1.o = zx.o(0)
int32_t zmm0

if (*(*(arg4 + 0x20) + 0x13c) != 2)
    zmm0 = (zx.o(0)).d
else
    zmm0 = 0x3f800000

arg5.d = zmm0
void* var_128_1
var_128_1.d = 0
float _X
int32_t zmm6_2
_X, zmm6_2 = sub_1405eb490(arg2, &arg_8, arg1 + 0x18e, &arg5, var_128_1.d)
int64_t* rcx_5 = *(arg4 + 0x20)
arg5 = r14
char rbx_1 = *(rcx_5 + 0x13c)
float zmm1

if (rbx_1 != 2)
    zmm1 = 1f
    
    if (rbx_1 != 1)
        _X = (zx.o(0)).d
    else
        _X = 1f
else
    (*(*rcx_5 + 0x20))()
    zmm1 = tanf(_X)
    _X = (zx.o(0)).d

if (rbx_1 == 2)
    zmm6_2 = 0x3f800000

float var_f8 = zmm1
int32_t var_f0 = zmm6_2
float _X_1 = _X
int32_t var_f4 = 0x3f800000
sub_1405d0e10(arg2, &arg5, arg1 + 0x194, &var_f8, 0)
char var_108 = 1
uint64_t result
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
result, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 =
    sub_1414b97a0(arg1 + 0x19a, arg2, r14, arg1, arg3, arg4, arg6, arg8)

if (*(arg1 + 0x1b0) u> 0)
    void* rcx_8 = *(arg4 + 0x20)
    float zmm2_1[0x4] = zmm7
    float zmm5_1 = zmm7[0]
    float var_68_1[0x4] = zmm8
    float var_78_1[0x4] = zmm9
    float var_88_1[0x4] = zmm10
    uint128_t zmm1_1 = zx.o(*(rcx_8 + 0x110))
    int32_t rax_6 = *(rcx_8 + 0x118)
    uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    zmm2_1[0] = zmm2_1[0] f/ zmm0_1.d
    int64_t var_dc_1 = 0
    int64_t var_d0_1 = 0
    int64_t var_e4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_bc_1 = 0
    float zmm3_1[0x4] = *(rcx_8 + 0x40)
    float zmm6_3[0x4] = *(rcx_8 + 0x50)
    zmm10 = *(rcx_8 + 0x60)
    zmm7[0] = zmm7[0] f/ rax_6
    zmm9 = var_dc_1:4.o
    float var_e8[0x4]
    zmm8 = var_e8
    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
    zmm8[0] = zmm7[0]
    zmm7 = var_c8_1.o
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    zmm5_1 = zmm5_1 f/ zmm1_1.d
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm8)
    zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
    temp0_7[0] = zmm2_1[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0)
    temp0_8[0] = zmm5_1
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
    zmm1_1 = _mm_mul_ps(zmm1_1, temp0_11)
    float temp0_13[0x4] = _mm_mul_ps(temp0_3, temp0_9)
    float temp0_14[0x4] = _mm_mul_ps(temp0_10, zmm8)
    float var_98_1[0x4] = zmm11
    zmm11 = *(rcx_8 + 0x70)
    float temp0_15[0x4] = _mm_add_ps(temp0_13, zmm0_1)
    float var_a8_1[0x4] = zmm12
    zmm12 = data_142d3f660
    zmm0_1 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
    float temp0_17[0x4] = _mm_mul_ps(temp0_6, zmm12)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, zmm1_1)
    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_9)
    var_dc_1:4.o = temp0_9
    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa), temp0_11)
    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_17)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xff)
    float temp0_24[0x4] = _mm_add_ps(temp0_14, zmm0_1)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm12)
    var_e8 = zmm8
    float temp0_26[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    zmm0_1 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    float temp0_28[0x4] = _mm_add_ps(temp0_24, zmm1_1)
    float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm8)
    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_9)
    zmm1_1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
    float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_25)
    zmm1_1 = _mm_mul_ps(zmm1_1, temp0_11)
    float temp0_34[0x4] = _mm_add_ps(temp0_29, zmm0_1)
    var_c8_1.o = temp0_11
    var_e8 = temp0_22
    float temp0_35[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
    var_dc_1:4.o = temp0_32
    float temp0_36[0x4] = _mm_add_ps(temp0_34, zmm1_1)
    float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm12)
    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x55), temp0_9)
    int64_t* var_128_2
    var_128_2.d = 0
    zmm0_1 = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_37)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm8)
    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), temp0_11)
    float temp0_45[0x4] = _mm_add_ps(temp0_39, zmm0_1)
    float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm12)
    var_c8_1.o = temp0_41
    float var_b8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_45, zmm1_1), temp0_47)
    result = sub_1405eb5d0(arg2, &arg_8, arg1 + 0x1ac, &var_e8, var_128_2.d)

return result

// 函数: sub_140e59d80
// 地址: 0x140e59d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rdi)[0x4] = arg3
uint128_t zmm6 = 0x3f800000
uint128_t zmm7 = 0x3f800000
int64_t arg_18 = 0
uint128_t zmm0

if (arg5 != 0)
    zmm0, zmm6 = sub_140d7ade0((*arg3).d, (*(arg3 + 4)).d, zmm6)
    zmm7 = zmm0

int64_t* rcx = data_143e20d18
int32_t rdx = 0
uint128_t zmm1
zmm1.d = zmm7.d f* *arg4
int32_t var_98 = int.d(fconvert.t(*rdi))
int32_t rax_1 = int.d(fconvert.t((*rdi)[1]))
uint128_t zmm2
zmm2.d = zmm7.d f* arg4[1]
int32_t rax_2 = int.d(fconvert.t((*rdi)[2]))
int32_t arg_20 = zmm1.d
int32_t rax_3 = int.d(fconvert.t((*rdi)[3]))
int32_t arg_24 = zmm2.d
int32_t arg_38

if (arg_38 == 1)
    rdx = 1

if ((*(*rcx + 0xb8))(rcx, &var_98, &arg_20, arg6, rdx, &arg_18) == 0)
    zmm0 = var_98.o
    int64_t* rcx_1 = data_143e20d18
    uint128_t var_58 = zmm0
    uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 4)
    var_58.d = zmm0.d + 1
    var_58:4.d = temp0_1.d + 1
    int32_t var_88
    (*(*rcx_1 + 0xb0))(rcx_1, &var_88, &var_58)
    float zmm3[0x4] = zx.o(*arg6)
    bool cond:1_1 = zmm3[0] != 0f
    zmm0 = _mm_cvtepi32_ps(zx.o(var_88))
    int32_t var_84
    zmm1 = _mm_cvtepi32_ps(zx.o(var_84))
    int32_t var_78 = zmm0.d
    int32_t var_74_1 = zmm1.d
    int32_t var_80
    zmm0 = _mm_cvtepi32_ps(zx.o(var_80))
    int32_t var_7c
    zmm1 = _mm_cvtepi32_ps(zx.o(var_7c))
    int64_t var_a8 = zmm3.q
    zmm2 = var_a8:4.d
    int32_t var_70_1 = zmm0.d
    int32_t var_6c_1 = zmm1.d
    
    if (not(cond:1_1) && not(zmm2.d f!= 0f))
        int32_t rcx_2 = arg_38
        int32_t rax_11 = var_98
        
        if (rcx_2 == 0)
            rax_11 = rax_2
        
        int32_t rax_12 = rax_3
        
        if (rcx_2 == 0)
            rax_12 = rax_1
        
        zmm3 = _mm_cvtepi32_ps(zx.o(rax_11))
        zmm2 = _mm_cvtepi32_ps(zx.o(rax_12))
    
    float var_68 = zmm3[0]
    zmm1.d = zmm3.d f+ arg_20
    int32_t var_64_1 = zmm2.d
    zmm0.d = zmm2.d f+ arg_24
    int32_t var_b8
    var_b8.q = &var_78
    int32_t var_60_1 = zmm1.d
    int32_t var_5c_1 = zmm0.d
    int64_t* rax_13
    uint128_t zmm6_1
    int32_t zmm7_1
    rax_13, zmm6_1, zmm7_1 = sub_140d9bb20(&var_a8, rdi, &var_68, &arg_38, var_b8)
    zmm6_1.d = zmm6_1.d f/ zmm7_1
    zmm0 = zmm6_1
    zmm6_1.d = zmm6_1.d f* *(rax_13 + 4)
    zmm0.d = zmm0.d f* *rax_13
    arg2[1] = zmm6_1.d
else
    zmm6.d = zmm6.d f/ zmm7.d
    zmm1.d = arg_18:4.d.d f* zmm6.d
    zmm0.d = zmm6.d f* arg_18.d
    arg2[1] = zmm1.d

*arg2 = zmm0.d
return arg2

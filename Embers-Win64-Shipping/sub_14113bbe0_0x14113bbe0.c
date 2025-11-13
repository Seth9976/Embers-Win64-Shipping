// 函数: sub_14113bbe0
// 地址: 0x14113bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
int64_t arg_18 = arg3
int64_t* r15 = data_14395f4d0
void* arg_28
int64_t r13 = *(arg_28 + 8)

if (arg1[1] u> 0)
    uint32_t r12_1 = zx.d(*arg1)
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = arg3
    rcx_2[3].d = r12_1
    rcx_2[4] = r13

if (arg1[3] u> 0)
    uint32_t r12_2 = zx.d(arg1[2])
    
    if ((*(*r15 + 8))(r15) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = arg3
        rcx_9[3].d = r12_2
        rcx_9[4] = r15

int64_t* r15_1 = data_14395f4d0
int64_t r12_3 = *(arg6 + 8)

if (arg1[5] u> 0)
    uint32_t r13_1 = zx.d(arg1[4])
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_15[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    rcx_15[3].d = r13_1
    *rcx_15 = &data_142d5a070
    rcx_15[2] = arg3
    rcx_15[4] = r12_3

if (arg1[7] u> 0)
    uint32_t r12_4 = zx.d(arg1[6])
    
    if ((*(*r15_1 + 8))(r15_1) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_22[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = arg3
        rcx_22[3].d = r12_4
        rcx_22[4] = r15_1

float var_70
sub_141124850(&var_70, *(*(arg_20 + 0x15a8) + 0x4b4))
int32_t var_68
sub_1410f8060(&var_68)
float zmm0 = 1f f/ _mm_cvtepi32_ps(zx.o(var_68)).d
int32_t var_64
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(var_64))
float var_78 = zmm0
uint128_t zmm2
zmm2.d = 1f f/ zmm1.d
float var_74 = zmm2.d
sub_1405d0cd0(arg2, &arg_18, &arg1[8], &var_78, 0)
arg_20.d = var_70 * var_78
float var_6c
arg_20:4.d = var_6c * var_74
uint128_t zmm6 = sub_1405d0cd0(arg2, &arg_18, &arg1[0xb], &arg_20, 0)
int32_t var_60
sub_141124800(&var_60)
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(var_60))
int32_t var_5c
zmm2 = _mm_cvtepi32_ps(zx.o(var_5c))
int32_t var_58 = zmm1_2.d
float zmm0_2 = zmm6.d f/ zmm1_2.d
int32_t var_54 = zmm2.d
zmm1_2.d = zmm6.d f/ zmm2.d
float var_50 = zmm0_2
int32_t var_4c = zmm1_2.d
sub_1405d0e10(arg2, &arg_18, &arg1[0xe], &var_58, 0)
arg_28.d = _mm_cvtepi32_ps(zx.o(data_1439b5c50)).d
float zmm6_1 = sub_1405eb490(arg2, &arg_18, &arg1[0x11], &arg_28, 0)
float arg_8 = zmm6_1 / (__minss_xmmss_memss(data_1439b55ac, 0x477de800) * (zmm6_1 f- *"333?"))
sub_1405eb490(arg2, &arg_18, &arg1[0x14], &arg_8, 0)
uint64_t result
int512_t zmm6_2
result, zmm6_2 = sub_1405d0cd0(arg2, &arg_18, &arg1[0x17], &var_70, 0)
zmm6_2.o = arg5
return result

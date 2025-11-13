// 函数: sub_141420f20
// 地址: 0x141420f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0xfc0)
void* rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_1422db070(rax)

void* const arg_8 = rbx

if (&arg1[0x2b6] != &arg_8)
    void* rcx_1 = arg1[0x2b6]
    arg1[0x2b6] = rbx
    rbx = nullptr
    arg_8 = nullptr
    j_sub_140a74f90(rcx_1)

j_sub_140a74f90(rbx)
int32_t var_58
sub_14142a220(arg1, &data_143ec4c60, &arg1[0x50], &arg1[0x932], &var_58, 2, arg1[0x2b6])
int64_t* rcx_6 = data_143f0f180
int32_t* var_88
var_88.d = 1
void* arg_10
(*(*rcx_6 + 0xf8))(rcx_6, &arg_10, arg1[0x2b6], &data_143f55750, var_88, 1)
void* rax_3 = arg_10
void* arg_18 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_1405d1550(&arg_10)
sub_1405d1600(&arg1[2], &arg_18)
sub_1405d1550(&arg_18)
int32_t rax_4 = data_1439b70ac
int32_t rbx_1

if (rax_4 s>= 4)
    rbx_1 = 0x800
    
    if (rax_4 s< 0x800)
        rbx_1 = rax_4
else
    rbx_1 = 4

int64_t* rcx_10 = *(*arg1 + 0x20)

if (rcx_10 != 0)
    void* rax_7 = (*(*rcx_10 + 0x248))(rcx_10)
    
    if (rax_7 != 0)
        sub_1413edcd0(rax_7 + 0x20)

int32_t var_4c
uint128_t zmm1
zmm1.d = var_4c.d f- var_58
int32_t var_54
int32_t var_48
int64_t zmm2
zmm2.d = var_48.d f- var_54
float zmm3 = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_1)).d
*(arg1 + 0x4934) = var_58.q
int32_t var_50
*(arg1 + 0x493c) = var_50
uint128_t zmm0
zmm0.d = zmm1.d f* zmm3
zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
int32_t var_38
int32_t var_2c
zmm2.d = var_2c.d f- var_38
*(arg1 + 0x494c) = zmm0.d
int32_t var_44
zmm0.d = var_44.d f- var_50
*(arg1 + 0x4954) = zmm1.q
int32_t var_3c
int32_t var_30
zmm1.d = var_30.d f- var_3c
*(arg1 + 0x495c) = zmm0.d
arg1[0x928] = var_3c.q
int32_t var_34
arg1[0x929].d = var_34
zmm0.d = zmm1.d f* zmm3
zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
arg1[0x92a].d = zmm0.d
int32_t var_28
zmm0.d = var_28.d f- var_34
arg1[0x92c] = zmm1.q
int32_t result = zmm0.d
arg1[0x92d].d = result
return result

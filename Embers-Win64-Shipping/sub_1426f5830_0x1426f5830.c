// 函数: sub_1426f5830
// 地址: 0x1426f5830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1426fbec0(arg1)

if (result == 0)
    return result

uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(arg4)).d f* data_143b58064
zmm0_1.d = zmm0_1.d f+ arg3.d
int32_t var_e8 = zmm0_1.d
int32_t var_e4_1 = zmm0_1.d
void var_d8
uint128_t zmm6_1
int128_t zmm7_1
float zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_1426f2310(&var_d8, arg2, &var_e8)
int32_t var_c8
int32_t var_bc
uint128_t zmm1_1
zmm1_1.d = var_c8.d f+ var_bc
uint128_t zmm2
zmm2.d = zmm6_1.d f+ arg5
int32_t r10_1 = 0
zmm1_1.d = zmm1_1.d f* 0.5f
uint128_t zmm0_2 = zmm1_1
zmm1_1.d = zmm1_1.d f+ zmm2.d
zmm0_2.d = zmm0_2.d f- zmm2.d
int32_t var_bc_1 = zmm1_1.d
int32_t var_c8_1 = zmm0_2.d
int32_t var_9c
int64_t var_90

if (var_9c s> 0)
    int32_t r9_1 = 0
    int128_t var_28_1 = zmm7_1
    int32_t var_d4
    zmm7_1 = var_d4
    
    do
        int32_t rdx_1 = 0
        int32_t var_98
        
        if (var_98 s> 0)
            zmm2.d = _mm_cvtepi32_ps(zx.o(r10_1)).d f+ 0.5f
            zmm2.d = zmm2.d f* zmm7_1.d
            int32_t var_b4
            zmm2.d = zmm2.d f+ var_b4.d
            
            do
                zmm1_1.d = zmm2.d f- *arg2
                zmm0_2.d = float.s(rdx_1)
                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                zmm0_2.d = zmm0_2.d f+ 0.5f
                zmm0_2.d = zmm0_2.d f* zmm7_1.d
                int32_t var_b0
                zmm0_2.d = zmm0_2.d f+ var_b0.d
                zmm0_2.d = zmm0_2.d f- arg2[1]
                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                zmm0_2.d = zmm0_2.d f+ zmm1_1.d
                
                if (not(zmm0_2.d f>= zmm8_1 * zmm8_1))
                    int32_t var_ac
                    zmm0_2.d = var_ac.d f- arg2[2]
                    
                    if (not(_mm_and_ps(zmm0_2, 0x7fffffff).d f>= zmm6_1.d))
                        *(sx.q(r9_1 + rdx_1) + var_90) = 1
                
                rdx_1 += 1
            while (rdx_1 s< var_98)
        
        r10_1 += 1
        r9_1 += var_98
    while (r10_1 s< var_9c)

int32_t rax_1 = sub_1426f5640(result, &var_d8, arg6)
int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

if (var_90 != 0)
    sub_140a74f90(var_90)

return zx.q(rax_1)

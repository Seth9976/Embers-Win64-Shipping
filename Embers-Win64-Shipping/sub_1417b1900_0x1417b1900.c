// 函数: sub_1417b1900
// 地址: 0x1417b1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int32_t var_58 = 0
int32_t arg_20 = 0
int32_t var_30 = 0
uint64_t result
int128_t zmm6
uint128_t zmm7_1
result, zmm6, zmm7_1 = sub_14173f010(arg2, arg3, &var_58, &var_38, &arg_20)

if (result.b != 0)
    int128_t var_18_1 = zmm6
    zmm6 = arg_20 ^ data_142d3f780
    int64_t* rcx_2 = *(*(*arg2 + 0x80) + (sx.q(arg2[1].d) << 3))
    void var_50
    result = (*(*rcx_2 + 0x28))(rcx_2, &var_50)
    uint128_t zmm0_1
    zmm0_1.d = (*(result + 0xc)).d f- *result
    uint128_t zmm2_1
    zmm2_1.d = (*(result + 0x10)).d f- *(result + 4)
    uint128_t zmm1_1
    zmm1_1.d = (*(result + 0x14)).d f- *(result + 8)
    
    if (zmm0_1.d f>= zmm2_1.d || not(zmm0_1.d f< zmm1_1.d))
        zmm0_1 = _mm_min_ss(zmm1_1.d, zmm2_1.d)
    
    zmm1_1.d = data_1439b8eb4.d f* zmm0_1.d
    
    if (not(zmm6.d f<= zmm1_1.d))
        zmm2_1 = var_58
        
        if (not(zmm2_1.d f<= 9.99999975e-05f) && not(zmm2_1.d f>= 1f))
            int64_t r8_1 = sx.q(arg2[1].d) * 3
            void* rax_4 = *arg2
            int64_t rcx_3 = *(rax_4 + 0x28)
            int64_t rdx_3 = *(rax_4 + 0x3c8)
            zmm0_1.d = (*(rdx_3 + (r8_1 << 2) + 8)).d f- *(rcx_3 + (r8_1 << 2) + 8)
            float zmm5_1 = (1f f- zmm2_1.d) f* zmm1_1.d f/ zmm6.d f+ zmm2_1.d
            zmm2_1.d = (*(rdx_3 + (r8_1 << 2))).d f- *(rcx_3 + (r8_1 << 2))
            zmm1_1.d = (*(rdx_3 + (r8_1 << 2) + 4)).d f- *(rcx_3 + (r8_1 << 2) + 4)
            zmm0_1.d = zmm0_1.d f* zmm5_1
            zmm2_1.d = zmm2_1.d f* zmm5_1
            zmm0_1.d = zmm0_1.d f+ *(rcx_3 + (r8_1 << 2) + 8)
            zmm1_1.d = zmm1_1.d f* zmm5_1
            zmm2_1.d = zmm2_1.d f+ *(rcx_3 + (r8_1 << 2))
            zmm1_1.d = zmm1_1.d f+ *(rcx_3 + (r8_1 << 2) + 4)
            int32_t var_48_1 = zmm0_1.d
            *(rdx_3 + (r8_1 << 2)) = (_mm_unpacklo_ps(zmm2_1, zmm1_1.q)).q
            *(rdx_3 + (r8_1 << 2) + 8) = var_48_1
            result = sub_141730210(&var_50, arg2, zmm7_1)

return result

// 函数: sub_141c27550
// 地址: 0x141c27550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t zmm6 = sub_141ddacb0(arg1, arg2)
int64_t result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    void* rcx_1 = arg1[0x46]
    
    if (rcx_1 != 0 && arg1[0x47] != 0)
        int128_t zmm2_1
        zmm2_1.d = sub_141f68050(rcx_1).d f* arg1[0x44].d
        uint64_t var_78
        float zmm6_1[0x4]
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        zmm6_1, zmm7_1, zmm8_1 = sub_141f63570(arg1[0x46], &var_78, zmm2_1, 1)
        int512_t zmm6_2
        int32_t var_70
        uint64_t var_68
        
        if (*(arg1 + 0x224) == 0)
            int64_t* rcx_5 = arg1[0x47]
            var_68 = var_78
            int32_t var_60_1 = var_70
            result, zmm6_2 = sub_141f49c70(rcx_5, &var_68, 0, 0, zmm6_1, zmm7_1, zmm8_1, 0)
        else
            zmm6_1[0] = zmm6_1[0] f* arg1[0x44].d
            sub_141f64d80(arg1[0x46], &var_68, zmm6_1, 1)
            float zmm0_3[0x4] = var_68.o
            float zmm3_1[0x4] = var_78.d
            int64_t* rcx_4 = arg1[0x47]
            float temp0_1[0x4] = _mm_unpacklo_ps(var_78:4.d, 0)
            float var_58[0x4] = zmm0_3
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm3_1, var_70[0].q)
            zmm0_3 = data_14399f670
            float var_48_1[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
            float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_3[0].q), 
                _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
            result, zmm6_2 = sub_141f4a580(rcx_4, &var_58, 0, 0, 0)
        zmm6_2.o = zmm6

__security_check_cookie(rax_1 ^ &var_a8)
return result

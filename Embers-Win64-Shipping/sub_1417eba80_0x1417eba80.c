// 函数: sub_1417eba80
// 地址: 0x1417eba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t* result = __security_cookie ^ &var_f8
int64_t* result_1 = result
void* rcx = data_143f5b298

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0xb08)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x118))(rcx_1)
        
        if (result != 0 && arg1 != 0)
            void* rdx = *(arg1 + 0x78)
            
            if (rdx != 0)
                if (arg6 != 0)
                    (*(*result + 8))(result, rdx)
                    rdx = *(arg1 + 0x78)
                
                int128_t zmm1 = data_143dbb0d0
                float var_c8[0x4] = data_143dbb0c0
                float var_a8_1[0x4] = data_143dbb0e0
                int128_t var_b8_1 = zmm1
                float var_78_1[0x4] = data_14399f720
                int128_t var_98
                __builtin_memcpy(&var_98, 
                    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                "00\x00\x80\x3f\x01", 
                    0x19)
                int16_t var_68_1 = 0
                char var_66_1 = 0
                int64_t var_60 = 0
                int64_t var_58 = 0
                var_98.q = sub_1408c8cf0(&var_60, *(rdx + 0x10))
                float var_d8[0x4]
                sub_140ade170(arg3, &var_d8)
                int64_t zmm0_1 = *(arg2 + 8)
                float zmm4_1[0x4] = *arg2
                float zmm3_1[0x4] = data_14399f668
                float zmm5_1[0x4] = var_d8
                float temp0_1[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
                float temp0_2[0x4] = _mm_unpacklo_ps(zmm4_1, zmm0_1)
                zmm0_1 = data_14399f670
                float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
                float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                float var_a8_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1), temp0_4[0].q)
                var_c8 = zmm5_1
                float var_b8_2[0x4] = temp0_3
                float var_78_2[0x4] = *sub_140ade170(arg5, &var_d8)
                (*(*result + 0x10))(result, &var_c8)
                sub_1405d1550(&var_58)
                result = sub_1405d1550(&var_60)

__security_check_cookie(result_1 ^ &var_f8)
return result

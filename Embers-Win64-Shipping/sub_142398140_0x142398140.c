// 函数: sub_142398140
// 地址: 0x142398140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t* result = __security_cookie ^ &var_c8
int64_t* result_1 = result
void* rcx = data_143f5b298

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0xb08)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x118))(rcx_1)
        
        if (result != 0 && arg1 != 0 && *(arg1 + 0x78) != 0)
            int64_t rdx = *result
            (*(rdx + 8))(result, rdx)
            int128_t zmm1 = data_143dbb0d0
            void* rdx_1 = *(arg1 + 0x78)
            float var_a8[0x4] = data_143dbb0c0
            float var_88_1[0x4] = data_143dbb0e0
            int128_t var_98_1 = zmm1
            float var_58_1[0x4] = data_14399f720
            int128_t var_78
            __builtin_memcpy(&var_78, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x01", 
                0x19)
            int16_t var_48_1 = 0
            char var_46_1 = 0
            int64_t var_40 = 0
            int64_t var_38 = 0
            int64_t zmm6_1 = sub_1408c8cf0(&var_40, *(rdx_1 + 0x10))
            uint32_t zmm5_1[0x4] = data_143f59850
            float zmm2[0x4] = *(arg3 + 4)
            float zmm0_1[0x4] = zmm5_1
            float zmm3[0x4] = *arg3
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm5_1, data_143f59800)
            int64_t rax_2 = *result
            zmm0_1[0].q = zx.o(0) u>> 0x40
            float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
            float var_98_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(arg3 + 8))[0].q), 
                _mm_unpacklo_ps(zmm2, 0)[0].q)
            var_78.q = zmm6_1
            var_a8 = temp0_2
            uint32_t var_88_2[0x4] = temp0_1
            (*(rax_2 + 0x10))(result, &var_a8)
            
            if (arg4 != 0)
                (*(*result + 0x18))(result)
            
            sub_1405d1550(&var_38)
            result = sub_1405d1550(&var_40)

__security_check_cookie(result_1 ^ &var_c8)
return result

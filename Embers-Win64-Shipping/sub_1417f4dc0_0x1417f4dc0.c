// 函数: sub_1417f4dc0
// 地址: 0x1417f4dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t* result = __security_cookie ^ &var_c8
int64_t* result_1 = result
void* rcx = data_143f5b298

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0xb08)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x118))(rcx_1)
        
        if (result != 0 && arg1 != 0 && arg1[0xf] != 0)
            int64_t rdx = *result
            (*(rdx + 8))(result, rdx)
            int64_t rdx_1 = *arg1
            int32_t rax_2 = (*(rdx_1 + 0x308))(arg1, rdx_1)
            uint32_t zmm5_1[0x4] = data_143ef9460
            float zmm3[0x4] = *arg3
            rax_2.b = rax_2 == 0x800
            float var_58_1[0x4] = data_14399f720
            float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
            float zmm0[0x4] = zmm5_1
            uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm5_1, data_143ef9470)
            zmm0[0].q = zx.o(0) u>> 0x40
            float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
            float var_98_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(arg3 + 8))[0].q), temp0_1[0].q)
            int64_t var_70_1 = 0
            int32_t var_68_1 = 0x3f800000
            int32_t var_64_1 = 0x3f800000
            char var_60_1 = 1
            char var_48_1 = 0
            int64_t var_40 = 0
            int64_t var_38 = 0
            float var_a8[0x4] = temp0_3
            uint32_t var_88_1[0x4] = temp0_2
            uint64_t var_78_1 = arg2
            
            if (arg4 == 0)
                char var_47_1 = 0
            
            if (arg4 != 0 || rax_2.b != 0)
                char var_47_2 = 1
            
            char var_46_1 = rax_2.b
            sub_1408c8cf0(&var_40, *(arg1[0xf] + 0x10))
            (*(*result + 0x10))(result, &var_a8)
            
            if (arg5 != 0)
                (*(*result + 0x18))(result)
            
            sub_1405d1550(&var_38)
            result = sub_1405d1550(&var_40)

__security_check_cookie(result_1 ^ &var_c8)
return result

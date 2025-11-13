// 函数: sub_142038de0
// 地址: 0x142038de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (arg1 == 0)
    *arg3 = data_143dbb1f0
    result.b = 0
else
    result = sub_14226dd50(arg1)
    
    if (result == 0)
        *arg3 = data_143dbb1f0
        result.b = 0
    else
        void* rdx = result[0xe]
        
        if (rdx == 0)
            *arg3 = data_143dbb1f0
            result.b = 0
        else
            int64_t r10_1 = *result
            int128_t var_68
            __builtin_memset(&var_68, 0, 0x20)
            void var_f8
            
            if ((*(r10_1 + 0x2b8))(result, *(rdx + 0xb8), 0, &var_f8).b == 0)
                *arg3 = data_143dbb1f0
                result.b = 0
            else
                float var_48[0x4][0x4]
                sub_141b99680(&var_f8, &var_48)
                int128_t var_58
                result = sub_1422f0230(arg2, &var_58, &var_48, arg3)
                
                if (arg4 != 0)
                    int64_t rcx_3 = var_58.q
                    float zmm1_1 = *arg3 f- _mm_cvtepi32_ps(zx.o(rcx_3.d)).d
                    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o((rcx_3 u>> 0x20).d))
                    *arg3 = zmm1_1
                    *(arg3 + 4) = *(arg3 + 4) f- zmm0_1.d
                
                if (result.b == 0)
                    result.b = 0
                else
                    int32_t rax = *(arg2 + 8)
                    int64_t rax_1 = *arg1
                    uint64_t var_108 = *arg2
                    
                    if ((*(rax_1 + 0xab8))(arg1, &var_108, arg3, zx.q(arg4), var_108, rax).b == 0)
                        result.b = 0
                    else
                        result.b = 1

return result

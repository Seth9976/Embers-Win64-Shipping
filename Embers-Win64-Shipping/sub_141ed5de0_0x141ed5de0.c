// 函数: sub_141ed5de0
// 地址: 0x141ed5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0x5e].d
uint64_t result = zx.q(rcx) & 3

if (result.b == 3)
    int128_t zmm6 = *(arg1 + 0x2f4)
    
    if ((rcx.b & 4) == 0)
        goto label_141ed5e3a
    
    if (zmm6.d f>= 1.89999998f || not(1.89999998f f<= arg1[0x5f].d))
        zmm6 = arg1[0x5f].d
    label_141ed5e3a:
        
        if (zmm6.d f< 1.89999998f || not(zmm6.d f<= 2.4000001f))
            char result_1
            memset(&result_1, 0, 0x88)
            void* rax_1 = arg1[0x16]
            int32_t var_c0_1 = 0x3f800000
            int128_t zmm7
            zmm7.d = 2.1500001f f- zmm6.d
            int96_t var_d8_1 = (*(rax_1 + 0x1d0)).12
            int128_t zmm0_1 = *(rax_1 + 0x1c0)
            int32_t var_f0_1 = zmm7.d
            int128_t var_e8 = zmm0_1
            int64_t var_f8 = 0
            sub_141f231f0(arg1, &var_f8, &var_e8, 1, zmm0_1.q, arg2, arg3, &result_1, 0)
            result = zx.q(result_1)
            
            if ((result.b & 1) == 0 || (result.b & 2) != 0)
                zmm7.d = zmm7.d f+ *(arg1 + 0x2f4)
                *(arg1 + 0x2f4) = zmm7.d
            else
                float zmm0_2[0x4] = *(arg1[0x16] + 0x1d0)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xaa)
                
                if (zmm7.d f<= 0f)
                    int32_t var_b0
                    temp0_1[0] = temp0_1[0] f- var_b0
                    int64_t rax_2 = *arg1
                    *(arg1 + 0x2f4) = temp0_1[0]
                    
                    if ((*(rax_2 + 0x820))(arg1, &result_1).b != 0)
                        arg3.o = *(arg1 + 0x2f4)
                        sub_141ef5aa0(&arg1[0x5e], &result_1, arg3.d, 1)
                else
                    temp0_1[0] = temp0_1[0] f- var_d8_1:8.d
                    temp0_1[0] = temp0_1[0] f+ *(arg1 + 0x2f4)
                    *(arg1 + 0x2f4) = temp0_1[0]
            
            char rcx_5 = *(arg1 + 0x387)
            
            if ((rcx_5 & 1) == 0 || zmm6.d f< 0f)
                result.b = 0x20
            else
                result.b = 0
            
            result.b &= 0x20
            result.b |= rcx_5
            *(arg1 + 0x1f1) |= 8
            *(arg1 + 0x387) = result.b

return result

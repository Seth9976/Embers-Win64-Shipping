// 函数: sub_141402900
// 地址: 0x141402900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* result = *(arg2 + 0x220)

if (result != 0)
    float zmm0[0x4] = *(arg2 + 0x1e0)
    float zmm4[0x4] = *(arg2 + 0x1c0)
    zmm0[0] = zmm0[0] f* *(arg2 + 0x214)
    int64_t* result_1 = result
    float zmm5[0x4] = *(arg2 + 0x1d0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    temp0_1[0] = temp0_1[0] f* *(arg2 + 0x218)
    float var_c8_1[0x4] = zmm0
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    temp0_2[0] = temp0_2[0] f* *(arg2 + 0x21c)
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, 0)
    float var_88[0x4] = zmm4
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, temp0_2[0].q), temp0_3[0].q)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_3
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
            void var_b8
            void** rax_4 = sub_1413de3c0(&var_b8, nullptr, 0xff)
            void* rcx_3 = *rax_4
            *(rcx_3 + 0x10) = result_1.o
            *(rcx_3 + 0x20) = var_88
            *(rcx_3 + 0x30) = zmm5
            *(rcx_3 + 0x40) = temp0_5
            void* rcx_4 = *rax_4
            int32_t r8_1 = rax_4[2].d
            int64_t* rdx_2 = rax_4[1]
            int64_t* rbx_1 = *(rcx_4 + 0x58)
            int64_t* var_d8_1 = rbx_1
            int32_t* rdi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_1 += 1
                rbx_1 = var_d8_1
            
            result = sub_1405dafa0(rcx_4, rdx_2, r8_1, 1)
            
            if (rbx_1 != 0)
                result = zx.q(*rdi_1)
                *rdi_1 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(var_d8_1)
        else
            void* var_58_1 = result_1.o[0].q
            float var_48[0x4] = var_88
            float var_38_1[0x4] = zmm5
            float var_28_1[0x4] = temp0_5
            result = sub_1419a2d00()
            sub_141f26d30(var_58_1, &var_48)
    else
        result = sub_1419a2d00()
        sub_141f26d30(result_1, &var_88)

__security_check_cookie(rax_1 ^ &var_f8)
return result

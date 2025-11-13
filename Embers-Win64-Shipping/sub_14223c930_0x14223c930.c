// 函数: sub_14223c930
// 地址: 0x14223c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_c8
float zmm6[0x4] = sub_141f3baa0(*(*arg1 + 0xb8), &var_c8)
void* rdx_1 = *arg1
int64_t result = 0
int32_t i = 0

if (*(rdx_1 + 0xd8) s> 0)
    int32_t* rsi_1 = nullptr
    int64_t r12_1 = 0
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    
    do
        result = *(rdx_1 + 0xc0)
        int64_t* rcx_2 = *(result + r12_1 + 8)
        
        if (rcx_2 != 0)
            int64_t r15_1 = *(rdx_1 + 0xd0)
            void* rdi_1 = arg1[1]
            int32_t rcx_3
            rcx_3.b = sub_140b5b8a0(*(rsi_1 + r15_1), 0).b == 0
            result.b = *(rsi_1 + r15_1 + 4) != 0
            result.b |= rcx_3.b
            
            if (result.b != 0)
                int64_t rbx_1 = *(rsi_1 + r15_1)
                void* const rcx_7
                
                if (*(rdi_1 + 0x98) == *(rdi_1 + 0xc4))
                label_14223ca82:
                    rcx_7 = nullptr
                else
                    int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                    void* r8_1 = rdi_1 + 0xc8
                    void* rcx_5 = *(r8_1 + 8)
                    
                    if (rcx_5 != 0)
                        r8_1 = rcx_5
                    
                    int32_t rax_6 = *(r8_1 + (((sx.q(*(rdi_1 + 0xd8)) - 1) & sx.q(rax_4)) << 2))
                    
                    if (rax_6 == 0xffffffff)
                    label_14223ca82_1:
                        rcx_7 = nullptr
                    else
                        int64_t r8_2 = *(rdi_1 + 0x90)
                        
                        while (true)
                            int64_t rdx_5 = sx.q(rax_6) * 5
                            rcx_7 = r8_2 + (rdx_5 << 2)
                            
                            if (*(r8_2 + (rdx_5 << 2)) == rbx_1)
                                break
                            
                            rax_6 = *(rcx_7 + 0xc)
                            
                            if (rax_6 == 0xffffffff)
                                goto label_14223ca82_2
                        
                        if (rax_6 == 0xffffffff)
                        label_14223ca82_2:
                            rcx_7 = nullptr
                
                result = rcx_7 + 8
                
                if (rcx_7 == 0)
                    result = 0
                
                if (result != 0)
                    int32_t r9_1 = *result
                    
                    if (r9_1 != 0xffffffff)
                        void* rdx_6 = *(*arg1 + 0xb8)
                        float var_b8
                        float (* rax_9)[0x4]
                        float var_88[0x2][0x4]
                        
                        if ((*(rsi_1 + r15_1 + 8) & 1) == 0)
                            rax_9 = sub_142242460(&var_88, rdx_6, arg1[3], r9_1)
                        else
                            rax_9 = sub_142241970(&var_b8, rdx_6, *arg1[2], &var_c8, r9_1)
                        zmm6 = *rax_9
                        zmm7 = rax_9[1]
                        float var_68_1[0x4] = rax_9[2]
                        float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                        float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        int64_t rax_10 = *rcx_2
                        float var_b4_1 = temp0_2[0]
                        float var_ac_1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
                        float var_b0_1 = temp0_1[0]
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                        float var_a4_1 = temp0_4[0]
                        var_b8 = zmm6[0]
                        float var_a8_1 = zmm7[0]
                        float var_a0_1 = temp0_5[0]
                        (*(rax_10 + 0x1b0))(rcx_2, &var_b8)
                        result = arg1[4]
                        
                        if (*result == 1)
                            int64_t rax_11 = *rcx_2
                            var_b8 = zmm6[0]
                            float var_b4_2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                            int64_t r8_5
                            r8_5.b = 1
                            float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                            float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                            float var_a8_2 = zmm7[0]
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                            float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                            float var_a0_2 = temp0_9[0]
                            float var_b0_2 = temp0_7[0]
                            float var_ac_2 = temp0_10[0]
                            float var_a4_2 = temp0_8[0]
                            result = (*(rax_11 + 0xa8))(rcx_2, &var_b8, r8_5)
        
        rdx_1 = *arg1
        i += 1
        r12_1 += 0x10
        rsi_1 = &rsi_1[9]
    while (i s< *(rdx_1 + 0xd8))

int64_t rcx_12 = var_c8

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_108)
return result

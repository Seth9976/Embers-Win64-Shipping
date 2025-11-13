// 函数: sub_141db2340
// 地址: 0x141db2340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdi = *(arg1 + 0x68)
void** result_8 = arg2
void* r13 = arg1

if (rdi != 0)
    int32_t result_16 = 1
    int32_t result_4 = 0
    int32_t result_11 = 0
    int64_t zmm0
    float zmm1
    
    if (rdi s> 1)
        void* rax = *(arg1 + 0x60)
        int64_t rbx_1 = 0
        int64_t r11_1 = 0
        int64_t r8_1 = 1
        
        if (rax != 0)
            arg1 = rax
        
        do
            int64_t r10_1 = r8_1 * 3
            zmm1 = *(arg1 + (r10_1 << 2))
            int64_t rax_1 = r11_1 * 3
            float temp0_1 = *(arg1 + (rax_1 << 2))
            zmm1 - temp0_1
            
            if (not(zmm1 >= temp0_1))
                arg2.b = 1
            else if (zmm1 > temp0_1
                    || (*(arg1 + (r10_1 << 2) + 4)).d f>= *(arg1 + (rax_1 << 2) + 4))
                arg2.b = 0
            else
                arg2.b = 1
            
            char temp1_1 = arg2.b
            int64_t rax_2 = r8_1
            
            if (temp1_1 == 0)
                rax_2 = r11_1
            
            r11_1 = rax_2
            int32_t result_6 = result_16
            
            if (temp1_1 == 0)
                result_6 = result_4
            
            result_4 = result_6
            int64_t rax_3 = rbx_1 * 3
            zmm0 = *(arg1 + (rax_3 << 2))
            zmm0.d f- zmm1
            
            if (not(zmm0.d f>= zmm1))
                arg2.b = 1
            else if (zmm0.d f> zmm1
                    || (*(arg1 + (rax_3 << 2) + 4)).d f>= *(arg1 + (r10_1 << 2) + 4))
                arg2.b = 0
            else
                arg2.b = 1
            
            char temp2_1 = arg2.b
            int64_t rax_4 = r8_1
            
            if (temp2_1 == 0)
                rax_4 = rbx_1
            
            rbx_1 = rax_4
            int32_t result_12 = result_16
            
            if (temp2_1 == 0)
                result_12 = result_11
            
            result_16 += 1
            r8_1 += 1
            result_11 = result_12
        while (result_16 s< rdi)
    
    int64_t rbx_2 = sx.q(result_8[5].d)
    int32_t rax_5 = (rbx_2 + 1).d
    result_8[5].d = rax_5
    
    if (rax_5 s> *(result_8 + 0x2c))
        sub_141ce8380(result_8, rbx_2.d)
    
    result = result_8[4]
    void* const* result_1 = result_8
    
    if (result != 0)
        result_1 = result
    
    *(result_1 + (rbx_2 << 2)) = result_4
    
    if (result_4 != result_11)
        int32_t i = *(r13 + 0x68)
        int32_t result_2 = result_11
        result = zx.q(result_4)
        uint64_t rbp
        rbp.b = 1
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        int32_t result_5 = result_2
        
        if (result_8[5].d s<= i)
            int64_t result_14 = sx.q(result_11)
            int64_t result_17 = result_14
            int64_t result_9 = sx.q(result_4)
            
            do
                int32_t result_10 = 0
                int64_t result_21 = 0
                int32_t result_3 = result_2
                int64_t result_19 = result_14
                
                if (i s> 0)
                    int64_t r14_1 = sx.q(result.d)
                    
                    do
                        if (result_21 != result_19 && result_21 != r14_1)
                            void* rax_6 = *(r13 + 0x60)
                            int64_t rdx_1 = r14_1 * 3
                            int64_t rcx_1 = result_19 * 3
                            void* r8_2 = r13
                            
                            if (rax_6 != 0)
                                r8_2 = rax_6
                            
                            int64_t rax_7 = result_21 * 3
                            zmm7 = *(r8_2 + (rax_7 << 2) + 4)
                            float zmm5[0x2] = *(r8_2 + (rcx_1 << 2))
                            zmm0.d = zmm7.q.d f- *(r8_2 + (rdx_1 << 2) + 4)
                            zmm8 = *(r8_2 + (rcx_1 << 2) + 4)
                            zmm5[0] = zmm5[0] f- *(r8_2 + (rdx_1 << 2))
                            zmm6 = *(r8_2 + (rax_7 << 2))
                            zmm1 = zmm6.d f- *(r8_2 + (rdx_1 << 2))
                            zmm5[0] = zmm5[0] f* zmm0.d
                            zmm0.d = zmm8.q.d f- *(r8_2 + (rdx_1 << 2) + 4)
                            zmm5[0] = zmm5[0] - zmm1 f* zmm0.d
                            zmm0 = _mm_cvtps_pd(zmm5).q
                            
                            if (zmm0 f< -0x40af9db22d0e5604)
                                result_19 = result_21
                                result_3 = result_10
                            else if (not(zmm0 f>= 0x3f50624dd2f1a9fc))
                                if (rbp.b == 0)
                                    zmm6.d f- zmm5[0]
                                    
                                    if (zmm6.d f< zmm5[0])
                                        result_19 = result_21
                                        result_3 = result_10
                                    else if (not(zmm6.d f> zmm5[0]) && not(zmm7.d f>= zmm8.d))
                                        result_19 = result_21
                                        result_3 = result_10
                                else
                                    zmm5[0] f- zmm6.d
                                    
                                    if (not(zmm5[0] f>= zmm6.d))
                                        rcx_1.b = 1
                                    else if (zmm5[0] f> zmm6.d || zmm8.d f>= zmm7.d)
                                        rcx_1.b = 0
                                    else
                                        rcx_1.b = 1
                                    
                                    char temp3_1 = rcx_1.b
                                    int32_t result_7 = result_10
                                    
                                    if (temp3_1 == 0)
                                        result_7 = result_3
                                    
                                    result_3 = result_7
                                    int64_t result_20 = result_21
                                    
                                    if (temp3_1 == 0)
                                        result_20 = result_19
                                    
                                    result_19 = result_20
                        
                        result_10 += 1
                        result_21 += 1
                    while (result_10 s< i)
                    
                    result_2 = result_5
                    result_14 = result_17
                    result_9 = sx.q(result_4)
                
                int64_t result_13 = result_9
                
                if (result_3 != result_11)
                    result_13 = result_14
                
                char rcx_2 = 0
                result_17 = result_13
                
                if (result_3 != result_11)
                    rcx_2 = rbp.b
                
                result = zx.q(result_4)
                
                if (result_3 != result_11)
                    result = zx.q(result_2)
                
                rbp = zx.q(rcx_2)
                result_5 = result.d
                result_2 = result.d
                
                if (result_3 == result_4)
                    return result
                
                int64_t rdi_1 = sx.q(result_8[5].d)
                int32_t rax_9 = (rdi_1 + 1).d
                result_8[5].d = rax_9
                
                if (rax_9 s> *(result_8 + 0x2c))
                    sub_141ce8380(result_8, rdi_1.d)
                    result_2 = result_5
                    result_9 = sx.q(result_4)
                
                void** result_18 = result_8[4]
                void** result_15 = result_8
                
                if (result_18 != 0)
                    result_15 = result_18
                
                result = zx.q(result_3)
                *(result_15 + (rdi_1 << 2)) = result_3
                i = *(r13 + 0x68)
                result_14 = result_17
            while (result_8[5].d s<= i)
        
        result_8[5].d = 0
        
        if (*(result_8 + 0x2c) s<= 0xffffffff)
            result = sub_141a64350(result_8, 0)

return result

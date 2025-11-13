// 函数: sub_1420af030
// 地址: 0x1420af030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* arg_8 = arg1
int32_t rdi = arg1[1].d
int64_t* rsi = arg2
int64_t* r14 = arg1

if (rdi != 0)
    int32_t result_12 = 1
    int32_t result_2 = 0
    int32_t result_8 = 0
    int64_t zmm0
    float zmm1
    
    if (rdi s> 1)
        int64_t rdx = *arg1
        int64_t rbx_1 = 0
        int64_t r11_1 = 0
        int64_t r8_1 = 1
        
        do
            int64_t r10_1 = r8_1 * 3
            zmm1 = *(rdx + (r10_1 << 2))
            int64_t rax = r11_1 * 3
            float temp0_1 = *(rdx + (rax << 2))
            zmm1 - temp0_1
            
            if (not(zmm1 >= temp0_1))
                arg1.b = 1
            else if (zmm1 > temp0_1 || (*(rdx + (r10_1 << 2) + 4)).d f>= *(rdx + (rax << 2) + 4))
                arg1.b = 0
            else
                arg1.b = 1
            
            char temp1_1 = arg1.b
            int64_t rax_1 = r8_1
            
            if (temp1_1 == 0)
                rax_1 = r11_1
            
            r11_1 = rax_1
            int32_t result_4 = result_12
            
            if (temp1_1 == 0)
                result_4 = result_2
            
            result_2 = result_4
            int64_t rax_2 = rbx_1 * 3
            zmm0 = *(rdx + (rax_2 << 2))
            zmm0.d f- zmm1
            
            if (not(zmm0.d f>= zmm1))
                arg1.b = 1
            else if (zmm0.d f> zmm1 || (*(rdx + (rax_2 << 2) + 4)).d f>= *(rdx + (r10_1 << 2) + 4))
                arg1.b = 0
            else
                arg1.b = 1
            
            char temp2_1 = arg1.b
            int64_t rax_3 = r8_1
            
            if (temp2_1 == 0)
                rax_3 = rbx_1
            
            rbx_1 = rax_3
            int32_t result_9 = result_12
            
            if (temp2_1 == 0)
                result_9 = result_8
            
            result_12 += 1
            r8_1 += 1
            result_8 = result_9
        while (result_12 s< rdi)
    
    int64_t rbx_2 = sx.q(rsi[1].d)
    int32_t rax_4 = (rbx_2 + 1).d
    rsi[1].d = rax_4
    
    if (rax_4 s> *(rsi + 0xc))
        sub_1405a4cf0(rsi)
    
    result = *rsi
    *(result + (rbx_2 << 2)) = result_2
    
    if (result_2 != result_8)
        int32_t i = r14[1].d
        result = zx.q(result_2)
        uint64_t rbp
        rbp.b = 1
        int32_t result_3 = result_8
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
        
        if (rsi[1].d s<= i)
            int64_t result_11 = sx.q(result_8)
            int64_t result_13 = result_11
            int64_t result_6 = sx.q(result_2)
            
            do
                int32_t result_7 = 0
                int64_t result_16 = 0
                int32_t result_1 = result_3
                int64_t result_14 = result_11
                
                if (i s> 0)
                    int64_t r14_1 = sx.q(result.d)
                    
                    do
                        if (result_16 != result_14 && result_16 != r14_1)
                            int64_t r8_2 = *arg_8
                            int64_t rdx_2 = r14_1 * 3
                            int64_t rcx_1 = result_14 * 3
                            int64_t rax_5 = result_16 * 3
                            zmm7 = *(r8_2 + (rax_5 << 2) + 4)
                            float zmm5[0x2] = *(r8_2 + (rcx_1 << 2))
                            zmm0.d = zmm7.q.d f- *(r8_2 + (rdx_2 << 2) + 4)
                            zmm8 = *(r8_2 + (rcx_1 << 2) + 4)
                            zmm5[0] = zmm5[0] f- *(r8_2 + (rdx_2 << 2))
                            zmm6 = *(r8_2 + (rax_5 << 2))
                            zmm1 = zmm6.d f- *(r8_2 + (rdx_2 << 2))
                            zmm5[0] = zmm5[0] f* zmm0.d
                            zmm0.d = zmm8.q.d f- *(r8_2 + (rdx_2 << 2) + 4)
                            zmm5[0] = zmm5[0] - zmm1 f* zmm0.d
                            zmm0 = _mm_cvtps_pd(zmm5).q
                            
                            if (zmm0 f< -0x40af9db22d0e5604)
                                result_14 = result_16
                                result_1 = result_7
                            else if (not(zmm0 f>= 0x3f50624dd2f1a9fc))
                                if (rbp.b == 0)
                                    zmm6.d f- zmm5[0]
                                    
                                    if (zmm6.d f< zmm5[0])
                                        result_14 = result_16
                                        result_1 = result_7
                                    else if (not(zmm6.d f> zmm5[0]) && not(zmm7.d f>= zmm8.d))
                                        result_14 = result_16
                                        result_1 = result_7
                                else
                                    zmm5[0] f- zmm6.d
                                    
                                    if (not(zmm5[0] f>= zmm6.d))
                                        rcx_1.b = 1
                                    else if (zmm5[0] f> zmm6.d || zmm8.d f>= zmm7.d)
                                        rcx_1.b = 0
                                    else
                                        rcx_1.b = 1
                                    
                                    char temp3_1 = rcx_1.b
                                    int32_t result_5 = result_7
                                    
                                    if (temp3_1 == 0)
                                        result_5 = result_1
                                    
                                    result_1 = result_5
                                    int64_t result_15 = result_16
                                    
                                    if (temp3_1 == 0)
                                        result_15 = result_14
                                    
                                    result_14 = result_15
                        
                        result_7 += 1
                        result_16 += 1
                    while (result_7 s< i)
                    
                    rsi = arg2
                    result_11 = result_13
                    r14 = arg_8
                    result_6 = sx.q(result_2)
                
                int64_t result_10 = result_6
                
                if (result_1 != result_8)
                    result_10 = result_11
                
                char rcx_2 = 0
                result_13 = result_10
                
                if (result_1 != result_8)
                    rcx_2 = rbp.b
                
                result = zx.q(result_2)
                
                if (result_1 != result_8)
                    result = zx.q(result_3)
                
                rbp = zx.q(rcx_2)
                result_3 = result.d
                
                if (result_1 == result_2)
                    return result
                
                int64_t rdi_1 = sx.q(rsi[1].d)
                int32_t rax_7 = (rdi_1 + 1).d
                rsi[1].d = rax_7
                
                if (rax_7 s> *(rsi + 0xc))
                    sub_1405a4cf0(rsi)
                    result_6 = sx.q(result_2)
                
                result_11 = result_13
                *(*rsi + (rdi_1 << 2)) = result_1
                result = zx.q(result_1)
                i = r14[1].d
            while (rsi[1].d s<= i)
        
        rsi[1].d = 0
        
        if (*(rsi + 0xc) s<= 0xffffffff)
            result = sub_1405dadb0(rsi, 0)

return result

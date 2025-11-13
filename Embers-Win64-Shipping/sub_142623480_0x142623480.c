// 函数: sub_142623480
// 地址: 0x142623480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg4
int32_t r10 = arg2
uint64_t result = zx.q(arg7 << 2)
int64_t r15 = sx.q(result.d)
uint64_t rsi_1
uint64_t r14_1

if (arg3[r15 + 2] == 0xffffffff)
    rsi_1 = zx.q(arg3[r15])
    r14_1 = zx.q(arg3[r15 + 1])
label_1426234ec:
    int32_t r9 = 0
    int32_t rdi_1 = arg2
    int32_t rbp_1 = 0
    int128_t zmm6 = 0xbf800000
    int128_t zmm8 = zx.o(0)
    arg7 = 0xbf800000
    int64_t var_b0 = 0
    float var_a8_1 = 0f
    
    if (arg2 s> 0)
        int32_t rax_1 = arg2
        int128_t* r10_1 = arg1
        int128_t* r13_1 = arg1
        int128_t zmm9 = 0x3f7eb852
        int128_t zmm10 = 0x3f80a3d7
        int128_t zmm11 = 0x3727c5ac
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int64_t rdx = sx.q(rsi_1.d)
        int128_t* arg_18 = arg1
        
        do
            if (rbp_1 != rsi_1.d && rbp_1 != r14_1.d)
                float zmm5 = *(r10_1 + 8)
                int64_t rax_2 = rdx * 3
                zmm7 = *r10_1
                int64_t rcx = sx.q(r14_1.d) * 3
                float zmm4 = (zmm5 f- *(arg1 + (rax_2 << 2) + 8))
                    * (*(arg1 + (rcx << 2)) f- *(arg1 + (rax_2 << 2)))
                    - (*(arg1 + (rcx << 2) + 8) f- *(arg1 + (rax_2 << 2) + 8))
                    * (zmm7.d f- *(arg1 + (rax_2 << 2)))
                
                if (not(zmm4 f<= zmm11.d))
                    if (zmm6.d f>= zmm8.d)
                        zmm5 = zmm5 - var_a8_1
                        zmm7.d = zmm7.d f- var_b0.d
                        zmm7.d = zmm7.d f* zmm7.d
                        float temp0_1 = _mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm7.d)
                        
                        if (not(temp0_1 > zmm6.d f* zmm10.d))
                            if (temp0_1 < zmm6.d f* zmm9.d)
                                goto label_14262360f
                            
                            uint32_t* var_c8
                            var_c8.d = rbp_1
                            char rax_6
                            rax_6, zmm6, zmm8, zmm9, zmm10, zmm11 =
                                sub_14262db30(arg1, arg3, *arg4, rsi_1.d, var_c8.d)
                            
                            if (rax_6 == 0)
                                var_c8.d = rbp_1
                                char rax_8
                                rax_8, zmm6, zmm8, zmm9, zmm10, zmm11 =
                                    sub_14262db30(arg1, arg3, *arg4, r14_1.d, var_c8.d)
                                
                                if (rax_8 == 0)
                                    rdi_1 = rbp_1
                                    zmm8, zmm9, zmm10, zmm11 = sub_142623280(
                                        arg1 + (sx.q((rsi_1 * 3).d) << 2), 
                                        arg1 + (sx.q((r14_1 * 3).d) << 2), r13_1, &var_b0, &arg7)
                                    zmm6 = arg7
                            
                            r10_1 = arg_18
                            rdx = sx.q(rsi_1.d)
                    else
                    label_14262360f:
                        rdi_1 = rbp_1
                        zmm8, zmm9, zmm10, zmm11 = sub_142623280(arg1 + (sx.q((rsi_1 * 3).d) << 2), 
                            arg1 + (sx.q((r14_1 * 3).d) << 2), r13_1, &var_b0, &arg7)
                        zmm6 = arg7
                        rdx = sx.q(rsi_1.d)
                
                rax_1 = arg2
            
            r10_1 += 0xc
            rbp_1 += 1
            r13_1 += 0xc
            arg_18 = r10_1
        while (rbp_1 s< rax_1)
        
        r9 = 0
        r10 = arg2
        r13 = arg4
    
    if (rdi_1 s>= r10)
        result = zx.q(arg3[r15])
        
        if (result.d == rsi_1.d && arg3[r15 + 1] == r14_1.d && arg3[r15 + 2] == 0xffffffff)
            arg3[r15 + 2] = 0xfffffffe
        else if (arg3[r15 + 1] == rsi_1.d && result.d == r14_1.d && arg3[r15 + 3] == 0xffffffff)
            arg3[r15 + 3] = 0xfffffffe
    else
        int32_t rcx_9 = arg3[r15]
        result = zx.q(*arg6)
        
        if (rcx_9 == rsi_1.d && arg3[r15 + 1] == r14_1.d && arg3[r15 + 2] == 0xffffffff)
            arg3[r15 + 2] = result.d
        else if (arg3[r15 + 1] == rsi_1.d && rcx_9 == r14_1.d && arg3[r15 + 3] == 0xffffffff)
            arg3[r15 + 3] = result.d
        
        uint64_t r8_4 = zx.q(*r13)
        uint64_t rcx_10 = 0
        
        if (r8_4.d s<= 0)
        label_1426237de:
            rcx_10 = 0xffffffff
        else
            result = &arg3[1]
            
            while (true)
                int32_t rdx_5 = *(result - 4)
                
                if (rdx_5 == rdi_1 && *result == rsi_1.d)
                    break
                
                if (rdx_5 == rsi_1.d && *result == rdi_1)
                    break
                
                rcx_10 = zx.q(rcx_10.d + 1)
                result += 0x10
                
                if (rcx_10.d s>= r8_4.d)
                    goto label_1426237de
        
        int32_t r10_2 = *arg6
        
        if (rcx_10.d != 0xffffffff)
            int64_t rcx_13 = sx.q((rcx_10 << 2).d)
            result = zx.q(arg3[rcx_13])
            
            if (result.d == rdi_1 && arg3[rcx_13 + 1] == rsi_1.d && arg3[rcx_13 + 2] == 0xffffffff)
                arg3[rcx_13 + 2] = r10_2
            else if (arg3[rcx_13 + 1] == rdi_1 && result.d == rsi_1.d
                    && arg3[rcx_13 + 3] == 0xffffffff)
                arg3[rcx_13 + 3] = r10_2
        else if (r8_4.d s< arg5)
            int32_t rcx_11 = 0
            
            if (r8_4.d s> 0)
                result = &arg3[1]
                
                while (true)
                    int32_t rdx_6 = *(result - 4)
                    
                    if (rdx_6 == rdi_1 && *result == rsi_1.d)
                        break
                    
                    if (rdx_6 == rsi_1.d && *result == rdi_1)
                        break
                    
                    rcx_11 += 1
                    result += 0x10
                    
                    if (rcx_11 s>= r8_4.d)
                        goto label_14262382c
            
            if (r8_4.d s<= 0 || rcx_11 == 0xffffffff)
            label_14262382c:
                result = zx.q((r8_4 << 2).d)
                int64_t rcx_12 = sx.q(result.d)
                arg3[rcx_12] = rdi_1
                arg3[rcx_12 + 1] = rsi_1.d
                arg3[rcx_12 + 2] = r10_2
                arg3[rcx_12 + 3] = 0xffffffff
                *r13 += 1
        
        uint64_t r8_5 = zx.q(*r13)
        uint64_t rcx_14 = 0
        
        if (r8_5.d s<= 0)
        label_1426238c0:
            rcx_14 = 0xffffffff
        else
            result = &arg3[1]
            
            while (true)
                int32_t rdx_7 = *(result - 4)
                
                if (rdx_7 == r14_1.d && *result == rdi_1)
                    break
                
                if (rdx_7 == rdi_1 && *result == r14_1.d)
                    break
                
                rcx_14 = zx.q(rcx_14.d + 1)
                result += 0x10
                
                if (rcx_14.d s>= r8_5.d)
                    goto label_1426238c0
        
        int32_t rdx_8 = *arg6
        
        if (rcx_14.d != 0xffffffff)
            int64_t rcx_17 = sx.q((rcx_14 << 2).d)
            result = zx.q(arg3[rcx_17])
            
            if (result.d == r14_1.d && arg3[rcx_17 + 1] == rdi_1 && arg3[rcx_17 + 2] == 0xffffffff)
                arg3[rcx_17 + 2] = rdx_8
                *arg6 += 1
            else if (arg3[rcx_17 + 1] != r14_1.d)
                *arg6 += 1
            else
                if (result.d == rdi_1 && arg3[rcx_17 + 3] == 0xffffffff)
                    arg3[rcx_17 + 3] = rdx_8
                
                *arg6 += 1
        else if (r8_5.d s>= arg5)
            *arg6 += 1
        else
            if (r8_5.d s> 0)
                result = &arg3[1]
                
                while (true)
                    int32_t rcx_15 = *(result - 4)
                    
                    if (rcx_15 == r14_1.d && *result == rdi_1)
                        break
                    
                    if (rcx_15 == rdi_1 && *result == r14_1.d)
                        break
                    
                    r9 += 1
                    result += 0x10
                    
                    if (r9 s>= r8_5.d)
                        goto label_142623909
            
            if (r8_5.d s> 0 && r9 != 0xffffffff)
                *arg6 += 1
            else
            label_142623909:
                result = zx.q((r8_5 << 2).d)
                int64_t rcx_16 = sx.q(result.d)
                arg3[rcx_16] = r14_1.d
                arg3[rcx_16 + 1] = rdi_1
                arg3[rcx_16 + 2] = rdx_8
                arg3[rcx_16 + 3] = 0xffffffff
                *r13 += 1
                *arg6 += 1
else if (arg3[r15 + 3] == 0xffffffff)
    rsi_1 = zx.q(arg3[r15 + 1])
    r14_1 = zx.q(arg3[r15])
    goto label_1426234ec
return result

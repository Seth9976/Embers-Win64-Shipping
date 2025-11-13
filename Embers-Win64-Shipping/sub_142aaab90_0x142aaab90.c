// 函数: sub_142aaab90
// 地址: 0x142aaab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void* result = arg6
void* result_1 = result

if (*arg7 s<= 0)
    result = sub_142aa9420(arg1, arg7)
    
    if (*arg7 s<= 0)
        int64_t rdx_1 = *(result + 0xb0)
        int32_t r13_1 = *(result + 0xa8)
        int64_t rax_2 = *(result + 0xa0)
        int16_t rdx_2 = *(arg2 + 8)
        int32_t var_238 = *(result + 0xb8)
        int32_t rax_4 = *(arg3 + 8)
        int32_t rcx_2
        
        if (rdx_2 s< 0)
            rcx_2 = *(arg2 + 0xc)
        else
            rcx_2 = sx.d(rdx_2) s>> 5
        
        int32_t rdi_1
        
        if (rcx_2 - rax_4 s<= 0x64)
            int32_t rdi_3
            
            if (rdx_2 s< 0)
                rdi_3 = *(arg2 + 0xc)
            else
                rdi_3 = sx.d(rdx_2) s>> 5
            
            rdi_1 = rdi_3 - rax_4
        else
            rdi_1 = 0x64
        
        int64_t r15_1 = 0
        int64_t var_208_1 = 0
        int16_t buffer2[0x38]
        sub_142a49120(arg2, rax_4, rdi_1, &buffer2, 0)
        int32_t var_218 = 0
        int32_t var_258_1
        var_258_1.q = arg1
        int16_t buffer2_1[0x68]
        int32_t rax_5 = sub_142a8f010(&buffer2_1, 0x64, &buffer2, rdi_1, var_258_1, &var_218)
        int64_t rdi_4 = sx.q(rax_5)
        int32_t var_23c = r13_1 - 1
        int64_t rsi_1 = 0
        int32_t r13_2 = 1
        *arg5 = 0
        int32_t var_230_1 = 0xffffffff
        int32_t var_240_1 = 0
        int32_t var_248 = 0
        
        if (rax_5 s> 0)
            int32_t rdi_5 = 1
            
            do
                var_258_1.q = &var_23c
                int32_t rax_6 =
                    sub_142aa86f0(rax_2, rdi_5 - 1, buffer2_1[rsi_1], &var_248, var_258_1)
                int64_t r14_1 = sx.q(var_248)
                
                if (r14_1.d == 0xffffffff)
                    break
                
                int32_t r15_2 = *arg5
                
                if (r15_2 s< rdi_5)
                    r15_2 = rdi_5
                
                *arg5 = r15_2
                int32_t r8_3
                
                if (rax_6 == 0xffffffff)
                    r8_3 = var_240_1
                else
                    r8_3 = rdi_5
                    var_240_1 = rdi_5
                    var_230_1 = rax_6
                
                int64_t rcx_8 = sx.q(var_23c)
                
                if (rcx_8.d - r14_1.d s< 0xa)
                    if (r14_1 s<= rcx_8)
                        int64_t rcx_9 = sx.q(r15_2)
                        int64_t i_2 = rcx_8 - r14_1 + 1
                        int64_t* rsi_4 = rax_2 + ((r14_1 * 3 + 1) << 3)
                        int64_t i
                        
                        do
                            int64_t rdi_6 = sx.q(rsi_4[1].d)
                            
                            if (rdi_6.d s<= r8_3 || rdi_6.d s> rax_5)
                                goto label_142aaadf9
                            
                            rcx_9 = sx.q(r15_2)
                            
                            if (memcmp(*rsi_4, &buffer2_1, rdi_6 * 2) != 0)
                                r8_3 = var_240_1
                            label_142aaadf9:
                                int32_t rax_11 = rax_5
                                int64_t rdx_7 = rcx_9
                                
                                if (rdi_6.d s< rax_5)
                                    rax_11 = rdi_6.d
                                
                                int64_t r9_4 = sx.q(rax_11)
                                
                                if (rcx_9 s< r9_4)
                                    int32_t r8_6 = r15_2 + 1
                                    
                                    while (*(*rsi_4 + (rdx_7 << 1)) == buffer2_1[rdx_7])
                                        int32_t rax_13 = *arg5
                                        
                                        if (rax_13 s< r8_6)
                                            rax_13 = r8_6
                                        
                                        r8_6 += 1
                                        rdx_7 += 1
                                        *arg5 = rax_13
                                        
                                        if (rdx_7 s>= r9_4)
                                            break
                                    
                                    r8_3 = var_240_1
                                    rcx_9 = sx.q(r15_2)
                            else
                                int32_t rax_10 = *arg5
                                r8_3 = rdi_6.d
                                var_230_1 = r14_1.d
                                var_240_1 = rdi_6.d
                                
                                if (rax_10 s< rdi_6.d)
                                    rax_10 = rdi_6.d
                                
                                *arg5 = rax_10
                            
                            r14_1 = zx.q(r14_1.d + 1)
                            rsi_4 = &rsi_4[3]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        r13_2 = (i_2 + 1).d
                    
                    break
                
                rdi_5 += 1
                rsi_1 += 1
            while (rsi_1 s< rdi_4)
            
            r15_1 = 0
        
        int64_t rsi_5 = rdx_1
        int32_t rcx_12 = -1
        int32_t r12_4 = 0
        
        if (arg4 != 1)
            var_238 -= 1
            var_248 = 0xffffffff
            var_23c = 0
            
            if (rdi_4 s> 0)
                while (true)
                    var_258_1.q = &var_238
                    int32_t rax_14 =
                        sub_142aa86f0(rsi_5, r13_2 - 1, buffer2[r15_1], &var_23c, var_258_1)
                    int64_t r14_2 = sx.q(var_23c)
                    
                    if (r14_2.d != 0xffffffff)
                        int32_t r15_3 = *arg5
                        
                        if (r15_3 s< r13_2)
                            r15_3 = r13_2
                        
                        *arg5 = r15_3
                        
                        if (rax_14 != 0xffffffff)
                            r12_4 = r13_2
                            var_248 = rax_14
                        
                        int64_t rcx_14 = sx.q(var_238)
                        
                        if (rcx_14.d - r14_2.d s>= 0xa)
                            r13_2 += 1
                            r15_1 = var_208_1 + 1
                            var_208_1 = r15_1
                            
                            if (r15_1 s< rdi_4)
                                continue
                        else if (r14_2 s<= rcx_14)
                            int64_t r8_8 = sx.q(r15_3)
                            int64_t* rsi_7 = rsi_5 + r14_2 * 0x18 + 8
                            int64_t i_3 = rcx_14 - r14_2 + 1
                            int64_t i_1
                            
                            do
                                int64_t rdi_7 = sx.q(rsi_7[1].d)
                                int32_t rax_22
                                
                                if (rdi_7.d s> r12_4 && rdi_7.d s<= rax_5)
                                    rax_22 = memcmp(*rsi_7, &buffer2, rdi_7 * 2)
                                    r8_8 = sx.q(r15_3)
                                
                                if (rdi_7.d s<= r12_4 || rdi_7.d s> rax_5 || rax_22 != 0)
                                    int32_t rcx_18 = rax_5
                                    int64_t rax_24 = r8_8
                                    
                                    if (rdi_7.d s< rcx_18)
                                        rcx_18 = rdi_7.d
                                    
                                    int64_t r9_6 = sx.q(rcx_18)
                                    
                                    if (r8_8 s< r9_6)
                                        int32_t r8_11 = r15_3 + 1
                                        
                                        while (*(*rsi_7 + (rax_24 << 1)) == buffer2[rax_24])
                                            int32_t rcx_20 = *arg5
                                            
                                            if (rcx_20 s< r8_11)
                                                rcx_20 = r8_11
                                            
                                            r8_11 += 1
                                            rax_24 += 1
                                            *arg5 = rcx_20
                                            
                                            if (rax_24 s>= r9_6)
                                                break
                                        
                                        r8_8 = sx.q(r15_3)
                                    
                                    rcx_12 = var_248
                                else
                                    int32_t rax_23 = *arg5
                                    rcx_12 = r14_2.d
                                    var_248 = rcx_12
                                    r12_4 = rdi_7.d
                                    
                                    if (rax_23 s< rdi_7.d)
                                        rax_23 = rdi_7.d
                                    
                                    *arg5 = rax_23
                                
                                r14_2 = zx.q(r14_2.d + 1)
                                rsi_7 = &rsi_7[3]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            rsi_5 = rdx_1
                            break
                    
                    rcx_12 = var_248
                    break
        
        if (r12_4 s> var_240_1)
        label_142aab00b:
            
            if (rcx_12 != 0xffffffff)
                sub_142a8d750(*(rsi_5 + sx.q(rcx_12) * 0x18), result_1, 4)
                *(arg3 + 8) = rax_4 + r12_4
        else
            int64_t rax_17 = sx.q(var_230_1)
            
            if (rax_17.d != 0xffffffff)
                sub_142a8d750(*(rax_2 + rax_17 * 0x18), result_1, 4)
                *(arg3 + 8) = rax_4 + var_240_1
            else if (r12_4 s>= var_240_1)
                goto label_142aab00b
        
        sub_142aa92f0()
        sub_142a860a0(&data_144016010)
        int32_t temp0_1 = *(result + 0xbc)
        *(result + 0xbc) -= 1
        
        if (temp0_1 == 1)
            sub_142aa91b0(result)
        
        sub_142aa92f0()
        result = sub_142a860d0(&data_144016010)

__security_check_cookie(rax_1 ^ &var_278)
return result

// 函数: sub_142bb6690
// 地址: 0x142bb6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t r12 = arg2[2]
void* r13 = &arg2[0x31]
int64_t rbx = *arg2
void* r15 = &arg2[0x25]
int64_t rcx = arg2[4]
int64_t rsi = 0
int64_t* rax_3 = *(arg1 + 0x2a0)
char var_94 = 0
int32_t var_90 = 0
char* result = arg2[9](arg2)
int64_t rdx = sx.q(result.d)

if (result.d s< 0)
label_142bb6a8c:
    result = 3
    arg2[3].d = result.d
else
    int64_t rcx_4 = (r12 - rbx) s>> 3
    
    if (rdx s> rcx_4)
        rdx = zx.q(rcx_4.d)
    
    int32_t var_50 = rdx.d
    
    if (rdx.d != 0 && arg2[3].d == 0)
        int32_t result_1
        
        if (arg2[0x24].d != 0)
        label_142bb6798:
            int32_t r12_2 = 0
            arg2[7](arg2)
            char* rbx_2 = *arg2
            int64_t r14_1 = r12
            
            if (rbx_2 u>= r14_1)
                goto label_142bb6a8c
            
            int64_t* var_70_1 = nullptr
            
            while (true)
                if (&rbx_2[3] u>= r14_1)
                label_142bb6824:
                    result = arg2[8](arg2, 0x1000832100003601, -0x5fffffff5fffffff)
                    
                    if (*arg2 u>= r14_1)
                        goto label_142bb6a8c
                    
                    if (arg2[3].d != 0)
                        goto label_142bb6a9b
                    
                    if (*rbx_2 == 0x2f)
                        if (&rbx_2[2] u>= r14_1)
                            goto label_142bb6a8c
                        
                        int64_t r15_1 = arg2[2]
                        uint64_t r13_2 = zx.q(*arg2 - (&rbx_2[1]).d)
                        int64_t rax_17 = *(*(arg1 + 0xd0) + 0x50)
                        arg2[7](arg2)
                        result = *arg2
                        
                        if (result u>= r15_1)
                        label_142bb6a86:
                            
                            if (rax_17 != 0)
                                goto label_142bb6a9b
                            
                            goto label_142bb6a8c
                        
                        result = zx.q(zx.d(*result) - 0x30)
                        
                        if (result.d u>= 0xa)
                            goto label_142bb6a86
                        
                        uint64_t r14_2 = zx.q(arg2[9](arg2))
                        arg2[8](arg2)
                        void* rdx_3 = *arg2
                        result = rdx_3 + 1
                        char* result_2 = result
                        
                        if (r14_2.d s< 0)
                            goto label_142bb6a86
                        
                        void* r15_2 = r15_1 - result
                        result = sx.q(r14_2.d)
                        
                        if (result s>= r15_2)
                            goto label_142bb6a86
                        
                        bool cond:0_1 = arg2[3].d == 0
                        *arg2 = sx.q((r14_2 + 1).d) + rdx_3
                        result.b = cond:0_1
                        
                        if (result.d == 0)
                            goto label_142bb6a9b
                        
                        r15 = &arg2[0x25]
                        
                        if (arg2[0x24].d != 0)
                            r13 = &arg2[0x31]
                        else
                            result =
                                (*(r15 + 0x50))(r15, zx.q(r12_2), &rbx_2[1], zx.q((r13_2 + 1).d))
                            result_1 = result.d
                            
                            if (result.d != 0)
                                break
                            
                            *(r13_2 + *(var_70_1 + *(r15 + 0x28))) = 0
                            
                            if (rbx_2[1] == 0x2e)
                                int64_t rax_23 = 0
                                
                                while (true)
                                    char rcx_18 = (*".notdef")[rax_23]
                                    rax_23 += 1
                                    
                                    if (rcx_18 != *(*(var_70_1 + *(r15 + 0x28)) + rax_23 - 1))
                                        break
                                    
                                    if (rax_23 == 8)
                                        var_90 = r12_2
                                        var_94 = 1
                                        break
                            
                            int32_t rcx_19 = *(arg1 + 0x118)
                            
                            if (rcx_19 s< 0 || r12_2 s>= var_50 + 5)
                                r13 = &arg2[0x31]
                                result = (*(r13 + 0x50))(r13, zx.q(r12_2), result_2, zx.q(r14_2.d))
                                result_1 = result.d
                            else
                                if (r14_2.d u<= rcx_19)
                                    goto label_142bb6a8c
                                
                                int64_t rax_27 = sub_142b99860(rcx, r14_2.d, &result_1)
                                result = zx.q(result_1)
                                
                                if (result.d != 0)
                                    break
                                
                                memcpy(rax_27, result_2, r14_2.d)
                                rax_3[4](rax_27, r14_2, 0x10ea)
                                int64_t rcx_23 = sx.q(*(arg1 + 0x118))
                                result_1 = arg2[0x3b](&arg2[0x31], zx.q(r12_2), rcx_23 + rax_27, 
                                    zx.q(r14_2.d - rcx_23.d))
                                sub_142b99980(rcx, rax_27)
                                result = zx.q(result_1)
                                r13 = &arg2[0x31]
                            
                            if (result.d != 0)
                                break
                            
                            r12_2 += 1
                            var_70_1 = &var_70_1[1]
                        
                        r14_1 = r12
                    
                    arg2[7](arg2)
                    rbx_2 = *arg2
                    
                    if (rbx_2 u< r14_1)
                        continue
                    
                    goto label_142bb6a42
                
                char rcx_9 = rbx_2[3]
                
                if (rcx_9 u> 0x3c || not(test_bit(0x1000832100003601, zx.q(rcx_9))))
                    if (rcx_9 - 0x3e u> 0x3f)
                        goto label_142bb6824
                    
                    if (not(test_bit(-0x5fffffff5fffffff, zx.q(rcx_9 - 0x3e))))
                        goto label_142bb6824
                    
                    goto label_142bb67f1
                
            label_142bb67f1:
                char rax_13 = *rbx_2
                
                if (rax_13 != 0x64 || rbx_2[1] != 0x65 || rbx_2[2] != 0x66 || r12_2 == 0)
                    if (rax_13 != 0x65 || rbx_2[1] != 0x6e || rbx_2[2] != 0x64)
                        goto label_142bb6824
                    
                label_142bb6a42:
                    
                    if (r12_2 == 0)
                        goto label_142bb6a8c
                
                arg2[0x24].d = r12_2
                
                if (var_94 == 0)
                    int32_t* rax_41 = *(r15 + 0x30)
                    int64_t* r8_24 = *(r15 + 0x28)
                    var_50 = 0xde1f78b
                    char var_4c_1 = 0xe
                    result = arg2[0x47](&arg2[0x3d], 0, *r8_24, zx.q(*rax_41))
                    result_1 = result.d
                    
                    if (result.d != 0)
                        break
                    
                    result = arg2[0x47](&arg2[0x3d], 1, **(r13 + 0x28), zx.q(**(r13 + 0x30)))
                    result_1 = result.d
                    
                    if (result.d != 0)
                        break
                    
                    result = (*(r15 + 0x50))(r15, 0, ".notdef", zx.q((&result[8]).d))
                    result_1 = result.d
                    
                    if (result.d != 0)
                        break
                    
                    result = (*(r13 + 0x50))(r13, 0, &var_50, zx.q((&result[5]).d))
                    result_1 = result.d
                    
                    if (result.d != 0)
                        break
                    
                    result = (*(r15 + 0x50))(r15, zx.q(r12_2), *arg2[0x42], zx.q(*arg2[0x43]))
                    result_1 = result.d
                    
                    if (result.d != 0)
                        break
                    
                    result = (*(r13 + 0x50))(r13, zx.q(r12_2), *(arg2[0x42] + 8), 
                        zx.q(*(arg2[0x43] + 4)))
                    
                    if (result.d != 0)
                        break
                    
                    arg2[0x24].d += 1
                    goto label_142bb6a9b
                
                int64_t r8_9 = **(r15 + 0x28)
                
                while (true)
                    result = zx.q((*".notdef")[rsi])
                    rsi += 1
                    
                    if (result.b != *(r8_9 + rsi - 1))
                        break
                    
                    if (rsi == 8)
                        goto label_142bb6a9b
                
                result = arg2[0x47](&arg2[0x3d], 0, r8_9, zx.q(**(r15 + 0x30)))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result = arg2[0x47](&arg2[0x3d], 1, **(r13 + 0x28), zx.q(**(r13 + 0x30)))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                int64_t r12_3 = sx.q(var_90)
                int64_t rbx_4 = r12_3 << 2
                int64_t rsi_1 = r12_3 << 3
                result = arg2[0x47](&arg2[0x3d], 2, *(rsi_1 + *(r15 + 0x28)), 
                    zx.q(*(rbx_4 + *(r15 + 0x30))))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result = arg2[0x47](&arg2[0x3d], 3, *(rsi_1 + *(r13 + 0x28)), 
                    zx.q(*(*(r13 + 0x30) + rbx_4)))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result = (*(r15 + 0x50))(r15, zx.q(r12_3.d), *arg2[0x42], zx.q(*arg2[0x43]))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result =
                    (*(r13 + 0x50))(r13, zx.q(r12_3.d), *(arg2[0x42] + 8), zx.q(*(arg2[0x43] + 4)))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result = (*(r15 + 0x50))(r15, 0, *(arg2[0x42] + 0x10), zx.q(*(arg2[0x43] + 8)))
                result_1 = result.d
                
                if (result.d != 0)
                    break
                
                result = (*(r13 + 0x50))(r13, 0, *(arg2[0x42] + 0x18), zx.q(*(arg2[0x43] + 0xc)))
                
                if (result.d != 0)
                    break
                
                goto label_142bb6a9b
            
            arg2[3].d = result.d
        else
            int32_t rbx_1 = (rdx + 6).d
            result = (**rax_3)(r13, zx.q(rbx_1), rcx)
            result_1 = result.d
            
            if (result.d != 0)
                arg2[3].d = result.d
            else
                result = (**rax_3)(r15, zx.q(rbx_1), rcx)
                result_1 = result.d
                
                if (result.d != 0)
                    arg2[3].d = result.d
                else
                    result = (**rax_3)(&arg2[0x3d], 4, rcx)
                    result_1 = result.d
                    
                    if (result.d == 0)
                        goto label_142bb6798
                    
                    arg2[3].d = result.d

label_142bb6a9b:
__security_check_cookie(rax_1 ^ &var_b8)
return result

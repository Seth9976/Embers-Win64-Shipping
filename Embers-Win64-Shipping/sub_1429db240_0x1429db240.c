// 函数: sub_1429db240
// 地址: 0x1429db240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t r14 = zx.q(arg3)
void* var_70 = arg2
void* var_78 = arg2
void* rbx = arg2
void* rbp = r14 + arg2
int32_t result

if (arg2 != 0 || arg3 != 0)
    int32_t rsi_1 = 0
    *(arg1 + 0x1a4) = 0
    
    if (arg1[0x38] == 0)
        result, arg5 = sub_1429dc430(arg1)
    
    if (arg1[0x38] != 0 || result == 0)
        int32_t var_84
        void var_60
        result = sub_1429e7d00(arg2, r14, &var_60, &var_84, arg1[0x21], arg1[0x22])
        int32_t result_1 = result
        
        if (result == 0)
            int32_t rcx_1 = var_84
            
            if (arg1[0xae].d != 0)
                int32_t rdx_1 = *(arg1 + 0x574)
                
                if (rdx_1 s< rcx_1 - 1)
                    rcx_1 = rdx_1 + 1
                    var_84 = rcx_1
            
            if (arg1[0x37].d == 0)
                if (rcx_1 s> 0)
                    void* r15_2 = &var_60
                    
                    do
                        uint64_t r14_2 = zx.q(*r15_2)
                        var_70 = rbx
                        
                        if (rbx u< arg2)
                            goto label_1429db483
                        
                        if (r14_2.d u> rbp.d - rbx.d)
                            goto label_1429db483
                        
                        int64_t var_98_4 = sx.q(arg7)
                        result, arg6 = sub_1429dbca0(arg1, &var_70, r14_2.d, arg4, arg6)
                        
                        if (result != 0)
                            goto label_1429db536
                        
                        rbx += r14_2
                        rsi_1 += 1
                        r15_2 += 4
                    while (rsi_1 s< var_84)
                    
                label_1429db51e:
                label_1429db523:
                    result = result_1
                else if (arg2 u>= rbp)
                label_1429db523_1:
                    result = result
                else
                label_1429db4c6:
                    result, arg6 = sub_1429dbca0(arg1, &var_78, rbp.d - rbx.d, arg4, arg6)
                    
                    if (result == 0)
                        rbx = var_78
                        
                        while (rbx u< rbp)
                            int64_t rax_10 = arg1[0x21]
                            char rax_11
                            
                            if (rax_10 == 0)
                                rax_11 = *rbx
                            else
                                char var_88
                                rax_10(arg1[0x22], rbx, &var_88, 1, sx.q(arg7))
                                rax_11 = var_88
                            
                            if (rax_11 != 0)
                                goto label_1429db4c6
                            
                            rbx += 1
                            var_78 = rbx
                        
                        goto label_1429db51e
            else
                int32_t result_2
                
                if (rcx_1 s<= 0)
                    if (arg1[0x3b].d != 0)
                        goto label_1429db3e0
                    
                    if (arg1[0xa9].d s>= 6)
                        *arg1 = "Frame output cache is full."
                        result = 1
                    else
                        arg6 = sub_1429dc7b0(arg1, arg5)
                    label_1429db3e0:
                        int64_t var_98_3 = sx.q(arg7)
                        result = sub_1429dbca0(arg1, &var_70, r14.d, arg4, arg6)
                        result_2 = result
                        
                        if (result == 0)
                        label_1429db523_2:
                            result = result_2
                else
                    void* r15_1 = &var_60
                    
                    while (true)
                        uint64_t r14_1 = zx.q(*r15_1)
                        var_78 = rbx
                        
                        if (rbx u< arg2 || r14_1.d u> rbp.d - rbx.d)
                        label_1429db483:
                            *arg1 = "Invalid frame size in index"
                            result = 7
                            goto label_1429db536
                        
                        if (arg1[0x3b].d == 0)
                            if (arg1[0xa9].d s>= 6)
                                break
                            
                            arg6 = sub_1429dc7b0(arg1, arg5)
                        
                        int64_t var_98_2 = sx.q(arg7)
                        result, arg5, arg6 = sub_1429dbca0(arg1, &var_78, r14_1.d, arg4, arg6)
                        result_2 = result
                        
                        if (result != 0)
                            goto label_1429db536
                        
                        rbx += r14_1
                        rsi_1 += 1
                        r15_1 += 4
                        
                        if (rsi_1 s>= var_84)
                            goto label_1429db523_2
                        
                        continue
                    
                    *arg1 = "Frame output cache is full."
                    result = 1
else
    *(arg1 + 0x1a4) = 1
    result = 0

label_1429db536:
__security_check_cookie(rax_1 ^ &var_b8)
return result

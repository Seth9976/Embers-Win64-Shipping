// 函数: sub_142b8eed0
// 地址: 0x142b8eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_128
uint64_t var_58 = __security_cookie ^ &var_128
uint64_t result

if (*arg4 s<= 0)
    int16_t* rbx_1 = *(arg2 + 0x18) + (zx.q(arg3) u>> 0xd << 1)
    int32_t r12_1 = *(arg1 + 0x1c20)
    int64_t r8
    int64_t r9_3
    
    if (sub_142b8ec20(arg1, arg2, 0xffffffff, zx.d(*rbx_1) << 0x10 | zx.d(rbx_1[1]), arg4) == 0)
        r9_3 = 0
        r8 = 0x101000100
    else
        r9_3 = *(arg1 + 0x10)
        r8 = *(arg1 + 8)
    
    sub_142b8dd50(arg1, 0x1ff, r8, r9_3, arg4)
    int32_t r14_1 = -1
    int64_t rsi
    rsi.b = 0
    void var_d8
    sub_142b74060(&var_d8, &rbx_1[2], 0, arg4)
    
    if (sub_142b743d0(&var_d8, arg4) != 0)
        bool cond:0_1
        
        do
            int32_t var_a4
            int32_t rcx_8 = var_a4
            int64_t var_a8
            int16_t rdx_2 = var_a8.w
            int32_t rax_6
            
            if (rdx_2 s< 0)
                rax_6 = rcx_8
            else
                rax_6 = sx.d(rdx_2) s>> 5
            
            if (rax_6 != 0)
                void* rax_7 = &var_a8:2
                void* var_98
                
                if ((rdx_2.b & 2) == 0)
                    rax_7 = var_98
                int16_t r8_1 = *rax_7
                
                if (r8_1 u<= 0x17f)
                    rbx_1 = zx.q(r8_1)
                label_142b8f026:
                    
                    if (rbx_1.d s>= 0)
                        if (rbx_1.d != r14_1)
                            if (rsi.b != 0)
                                sub_142b8dd50(arg1, r14_1, *(arg1 + 8), *(arg1 + 0x10), arg4)
                                rcx_8 = var_a4
                                rdx_2 = var_a8.w
                            
                            if (rdx_2 s>= 0)
                                rcx_8 = sx.d(rdx_2) s>> 5
                            
                            char rax_9
                            int32_t var_6c
                            
                            if (rcx_8 == 1)
                                rax_9 = sub_142b8ec20(arg1, arg2, 0xffffffff, var_6c, arg4)
                            
                            if (rcx_8 != 1 || rax_9 == 0)
                                sub_142b8dd50(arg1, rbx_1.d, 0x101000100, 0, arg4)
                                rsi.b = 0
                            else
                                rsi.b = 1
                            
                            r14_1 = rbx_1.d
                        else if (rsi.b != 0)
                            sub_142b8dd50(arg1, rbx_1.d, 0x101000100, 0, arg4)
                            rsi.b = 0
                else if (r8_1 - 0x2000 u<= 0x3f)
                    rbx_1 = zx.q(zx.d(r8_1) - 0x1e80)
                    goto label_142b8f026
            
            cond:0_1 = sub_142b743d0(&var_d8, arg4) != 0
        while (cond:0_1)
        
        if (rsi.b != 0)
            sub_142b8dd50(arg1, r14_1, *(arg1 + 8), *(arg1 + 0x10), arg4)
    
    if (*arg4 s<= 0)
        *(arg1 + 8) = sx.q(r12_1) | 0x180000000
        *(arg1 + 0x10) = 0
        rbx_1.b = 1
    else
        rbx_1.b = 0
    
    sub_142b74110(&var_d8)
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_58 ^ &var_128)
return result

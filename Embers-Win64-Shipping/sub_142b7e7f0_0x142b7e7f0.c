// 函数: sub_142b7e7f0
// 地址: 0x142b7e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* r15 = arg5
uint64_t result

if (*arg6 s<= 0)
    int16_t* r13_1 = *(*(arg1 + 0x10) + 0x18) + (zx.q(arg4) u>> 0xd << 1)
    int32_t result_1
    
    if (not(test_bit(arg4, 8)))
        arg4.b = 1
        int32_t result_2 = sub_142b7d330(arg1, arg2, 
            sub_142b7eac0(arg1, arg3, zx.d(r13_1[1]) | zx.d(*r13_1) << 0x10, arg4.b, arg6), arg6)
        result_1 = result_2
        *(r15 + 0x4c) = result_2
        
        if (*arg6 s<= 0)
            r15 = sub_142ae72d0(arg1 + 0x68, result_2)
            goto label_142b7e8b2
        
        result = 0
    else
        result_1 = -1
    label_142b7e8b2:
        int16_t rcx_4 = *(arg2 + 8)
        int32_t rdi_2
        
        if (rcx_4 s< 0)
            rdi_2 = *(arg2 + 0xc)
        else
            rdi_2 = sx.d(rcx_4) s>> 5
        
        void var_d8
        sub_142b74060(&var_d8, &r13_1[2], 0, arg6)
        
        if (sub_142b743d0(&var_d8, arg6) != 0)
            char i
            
            do
                int64_t var_a8
                int16_t rax_8 = var_a8.w
                int32_t r9_3
                
                if (rax_8 s< 0)
                    r9_3 = var_a8:4.d
                else
                    r9_3 = sx.d(rax_8) s>> 5
                
                void var_b0
                sub_142a48d00(arg2, &var_b0, 0, r9_3)
                int32_t var_6c
                int32_t result_3 =
                    sub_142b7d330(arg1, arg2, sub_142b7eac0(arg1, arg3, var_6c, 1, arg6), arg6)
                result_1 = result_3
                *(r15 + 0x4c) = result_3
                
                if (*arg6 s> 0)
                    result_1 = 0
                    break
                
                r15 = sub_142ae72d0(arg1 + 0x68, result_3)
                
                if ((*(arg2 + 8) & 1) == 0 || rdi_2 != 0)
                    int16_t rax_11 = *(arg2 + 8)
                    int32_t rcx_13
                    
                    if (rax_11 s< 0)
                        rcx_13 = *(arg2 + 0xc)
                    else
                        rcx_13 = sx.d(rax_11) s>> 5
                    
                    if (rdi_2 u< rcx_13)
                        if (rdi_2 s> 0x3ff)
                            rax_11 |= 0xffe0
                            *(arg2 + 0xc) = rdi_2
                        else
                            rax_11 = (rax_11 & 0x1f) | rdi_2.w << 5
                        
                        *(arg2 + 8) = rax_11
                else
                    sub_142a4afe0(arg2)
                
                i = sub_142b743d0(&var_d8, arg6)
            while (i != 0)
        
        sub_142b74110(&var_d8)
        result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_118)
return result

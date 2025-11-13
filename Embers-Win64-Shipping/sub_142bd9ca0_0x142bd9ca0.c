// 函数: sub_142bd9ca0
// 地址: 0x142bd9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
void* r14 = arg3

if (arg1[1].d == 0)
    int32_t i = 0
    int64_t rbp_1 = *arg1
    
    if (arg2 u> 1)
        int32_t rax_1
        rax_1.b = arg2 != 0
        arg2 = rax_1
    
    uint64_t r12_2 = zx.q(arg2) * 6
    
    if (arg1[2].d != 1)
        result = 6
    label_142bd9d89:
        arg1[1].d = result.d
    else
        int32_t var_58
        
        do
            int32_t rax_4 = sub_142b96160(*(r14 + 4))
            void* var_68_1 = &(&var_58)[sx.q(i)]
            result =
                sub_142bd9250(&arg1[3 + r12_2], sub_142b96160(*r14) s>> 0x10, rax_4 s>> 0x10, rbp_1)
            
            if (result.d != 0)
                goto label_142bd9d89_1
            
            i += 1
            r14 += 8
        while (i s< 3)
        
        int32_t var_54
        int32_t var_50
        result = sub_142bd8fe0(&arg1[3 + r12_2], var_58, var_54, var_50, rbp_1)
        
        if (result.d != 0)
        label_142bd9d89_1:
            arg1[1].d = result.d

__security_check_cookie(result_1 ^ &var_88)
return result

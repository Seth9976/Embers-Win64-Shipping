// 函数: sub_142b2ed20
// 地址: 0x142b2ed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t result

if (*arg7 s<= 0)
    int64_t rbx_1 = 0
    int64_t r10_1 = sx.q(arg5)
    int64_t var_148[0x20]
    int32_t result_1
    
    if (r10_1.d != sub_142b7f9b0(*(arg1 + 0x48), arg2, arg3, &var_148, 0))
    label_142b2edc1:
        result_1 = arg6
        
        if (result_1 == 0xffffffff)
            int64_t* rcx_2 = *(arg1 + 0x48)
            result_1 = (*(*rcx_2 + 0x18))(rcx_2, arg4, zx.q(r10_1.d), arg7)
        
        int32_t var_158_1
        var_158_1.q = arg7
        sub_142b7ced0(*(arg1 + 0x48), arg2, arg3, result_1, var_158_1)
    else
        if (r10_1.d s> 0)
            do
                if (*(&var_148 + arg4 - &var_148 + (rbx_1 << 3)) != var_148[rbx_1])
                    goto label_142b2edc1
                
                rbx_1 += 1
            while (rbx_1 s< r10_1)
        
        result_1 = arg6
    
    result = zx.q(result_1)
else
    result = zx.q(arg6)

__security_check_cookie(rax_1 ^ &var_178)
return result

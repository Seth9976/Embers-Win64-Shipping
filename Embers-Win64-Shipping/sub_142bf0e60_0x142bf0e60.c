// 函数: sub_142bf0e60
// 地址: 0x142bf0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0x28

int64_t r14 = arg2[6]
char __saved_r15
int32_t result
int512_t zmm0
result, zmm0 = sub_142bf1040(arg2, arg6, arg5, arg3, arg4, __saved_r15)
int32_t result_1 = result

if (result == 0)
    __builtin_memset(arg1, 0, 0x30)
    arg1[7] = 0
    arg1[8] = 0
    arg1[6] = r14
    int64_t* rax
    char r9
    rax, r9 = sub_142b99990(r14, 0x2088, &result_1)
    
    if (result_1 == 0)
        int32_t result_2 = sub_142bf13d0(rax, arg1, arg2, r9, rax.b, zmm0, arg6)
        result_1 = result_2
        
        if (result_2 != 0)
            sub_142b99980(r14, rax)
            return zx.q(result_1)
        
        arg1[2] = rax
    
    uint32_t rax_2 = sub_142bf16d0(arg2, arg6)
    
    if (rax_2 == 0)
        result = result_1
        arg1[1].d = 0x7fffffff
    label_142bf0ffc:
        *(arg1 + 0xc) = 0
        arg1[4] = sub_142bf17f0
        arg1[5] = sub_142bf1750
        *arg1 = 0
    else
        if (rax_2 u>= 0xa000)
            result = result_1
            arg1[1].d = rax_2
            goto label_142bf0ffc
        
        int64_t rax_3 = sub_142b99860(r14, rax_2, &result_1)
        
        if (result_1 != 0)
        label_142bf0fda:
            result = 0
            arg1[1].d = rax_2
            goto label_142bf0ffc
        
        int32_t rax_4
        int512_t zmm1
        rax_4, zmm1 = sub_142bf14a0(rax, 0, rax_3, rax_2, arg6)
        
        if (rax_4 != rax_2)
            if (*(rax + 0x2074) u> 0)
                sub_142bf1570(rax, zmm1)
            
            sub_142b99980(r14, rax_3)
            goto label_142bf0fda
        
        sub_142bf11b0(rax)
        sub_142b99980(r14, rax)
        result = result_1
        arg1[5] = sub_142bf1750
        arg1[2] = 0
        arg1[1].d = rax_2
        *(arg1 + 0xc) = 0
        *arg1 = rax_3
        arg1[4] = 0

return result

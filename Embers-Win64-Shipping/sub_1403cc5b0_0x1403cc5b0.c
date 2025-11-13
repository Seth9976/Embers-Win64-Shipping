// 函数: sub_1403cc5b0
// 地址: 0x1403cc5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rdx_1 = __security_cookie ^ &var_4e8
int64_t result
uint64_t rdi_1

if (arg1 == 2)
    rdi_1 = 0x140
    
    if (arg2 != 0)
    label_1403cc5e2:
        int64_t r8
        int64_t var_a8_1 = r8
        void var_4c8
        int64_t result_1 = arg2(&var_4c8, rdi_1)
        result = result_1
        
        if (result_1 != 0)
            memset(result, 0, rdi_1)
    else
    label_1403cc60b:
        int64_t result_2 = malloc(rdi_1)
        
        if (result_2 == 0)
            result = 0
        else
            result = result_2
            memset(result, 0, rdi_1)
else
    if (arg1 == 1)
        rdi_1 = 0x4b0
        
        if (arg2 == 0)
            goto label_1403cc60b
        
        goto label_1403cc5e2
    
    result = 0
__security_check_cookie(rdx_1 ^ &var_4e8)
return result

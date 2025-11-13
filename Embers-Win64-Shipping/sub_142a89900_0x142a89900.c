// 函数: sub_142a89900
// 地址: 0x142a89900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t result = __security_cookie ^ &var_58
uint64_t result_1 = result
int64_t rbx = 0
int32_t var_38 = 0

if (*arg4 s<= 0)
    char var_34[0xc]
    result = sub_142a4d690(arg1, &var_34, 6, &var_38)
    int32_t rcx = var_38
    
    if (rcx s> 0 || rcx == 0xffffff84)
    label_142a899a3:
        
        if (arg3 != 0)
            *arg4 = 1
    else if (result.d s> 0)
        if (result.d == 4)
            while (true)
                result = sub_142a86230(var_34[rbx])
                
                if (result.b == 0)
                    break
                
                rbx += 1
                
                if (rbx s>= 4)
                    (*(*arg2 + 8))(arg2, &data_143642120, 1)
                    result = (*(*arg2 + 8))(arg2, &var_34, 4)
                    goto label_142a899b6
        
        goto label_142a899a3

label_142a899b6:
__security_check_cookie(result_1 ^ &var_58)
return result

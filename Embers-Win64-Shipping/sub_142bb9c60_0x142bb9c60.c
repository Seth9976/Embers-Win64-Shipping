// 函数: sub_142bb9c60
// 地址: 0x142bb9c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t* rdi = *(arg1 + 0x2e0)
int32_t rbp = 0
int32_t result_2 = 0
int32_t result_1
void var_1c8
arg2[0xf](arg2, &var_1c8, 0x10, &result_1)
int32_t result = result_1

if (result s< 0)
    arg2[3].d = 0xa2
else if (result == 0 || result s> 0x10)
    arg2[3].d = 3
else
    int32_t rcx_1
    
    if (rdi != 0)
        rcx_1 = *rdi
    
    if (rdi == 0 || rcx_1 == 0)
        result = sub_142bbb780(arg1, result, 0)
        result_2 = result
        
        if (result != 0)
            arg2[3].d = result
        else
            rdi = *(arg1 + 0x2e0)
            result = result_1
        label_142bb9d1d:
            int64_t r12_1 = *arg2
            int64_t r13_1 = arg2[2]
            
            if (result s> 0)
                int64_t rsi_1 = 0
                void* r14_1 = &var_1c8
                
                do
                    *arg2 = *r14_1
                    arg2[2] = *(r14_1 + 8)
                    result = arg2[0xa](arg2, 0)
                    r14_1 += 0x18
                    rbp += 1
                    rsi_1 += 4
                    *(rsi_1 + *(rdi + 0x108) - 4) = result
                    *(rsi_1 + *(rdi + 0x110) - 4) = result
                while (rbp s< result_1)
            
            *arg2 = r12_1
            arg2[2] = r13_1
            arg2[3].d = result_2
    else
        if (rcx_1 == result)
            goto label_142bb9d1d
        
        arg2[3].d = 3

__security_check_cookie(rax_1 ^ &var_1f8)
return result

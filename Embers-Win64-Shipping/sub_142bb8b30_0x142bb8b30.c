// 函数: sub_142bb8b30
// 地址: 0x142bb8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r12 = 0
int32_t result_1 = 0
int32_t var_a4
void var_98
uint64_t result = (*(arg2 + 0x78))(arg2, &var_98, 4, &var_a4, result_1)
int32_t r8 = var_a4

if (r8 s< 0)
    *(arg2 + 0x18) = 0xa2
else if (r8 == 0 || r8 s> 4)
    *(arg2 + 0x18) = 3
else
    result = sub_142bbb780(arg1, 0, r8)
    result_1 = result.d
    
    if (result.d != 0)
        *(arg2 + 0x18) = result.d
    else
        int64_t r15_1 = *(arg1 + 0x98)
        
        if (var_a4 s<= 0)
            *(arg2 + 0x18) = result.d
        else
            int64_t* rsi_2 = *(arg1 + 0x2e0) + 8
            void* rdi_1 = &var_98
            
            while (true)
                result = *rdi_1
                
                if (*result == 0x2f)
                    result += 1
                    *rdi_1 = result
                
                int32_t rbx_1 = *(rdi_1 + 8)
                uint64_t rbx_2 = zx.q(rbx_1 - *rdi_1)
                
                if (rbx_1 == *rdi_1)
                    *(arg2 + 0x18) = 3
                    break
                
                int64_t rdx_1 = *rsi_2
                
                if (rdx_1 != 0)
                    sub_142b99980(r15_1, rdx_1)
                
                int64_t rax_2 = sub_142b99860(r15_1, (rbx_2 + 1).d, &result_1)
                *rsi_2 = rax_2
                result = zx.q(result_1)
                
                if (result.d == 0)
                    memcpy(rax_2, *rdi_1, rbx_2.d)
                    r12 += 1
                    *(rbx_2 + rax_2) = 0
                    rdi_1 += 0x18
                    rsi_2 = &rsi_2[1]
                    
                    if (r12 s< var_a4)
                        continue
                    else
                        result = zx.q(result_1)
                
                *(arg2 + 0x18) = result.d
                break

__security_check_cookie(rax_1 ^ &var_c8)
return result

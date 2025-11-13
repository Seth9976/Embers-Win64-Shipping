// 函数: sub_142bb8d80
// 地址: 0x142bb8d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void* rdi = arg1
int32_t r13 = 0
int32_t result_1
int64_t var_1c8[0x30]
arg2[0xf](arg2, &var_1c8, 0x10, &result_1)
uint64_t result = zx.q(result_1)
int32_t temp0 = result.d

if (temp0 s< 0)
    arg2[3].d = 0xa2
else if (temp0 == 0 || result.d s> 0x10)
    arg2[3].d = 3
else
    int64_t rcx_1 = *arg2
    int32_t rbp_1 = 0
    int32_t r12_1 = 0
    uint64_t result_2 = arg2[2]
    int64_t var_248_1 = *(rdi + 0x2e0)
    int32_t var_250_1 = 0
    
    if (result.d s> 0)
        int64_t r15_1 = 0
        
        while (true)
            void* rcx_3 = &var_1c8[r15_1 * 3]
            *arg2 = *rcx_3
            arg2[2] = *(rcx_3 + 8)
            int32_t var_258
            void var_228
            result = arg2[0xf](arg2, &var_228, 4, &var_258)
            int32_t rcx_6
            
            if (r15_1 == 0)
                rbp_1 = var_258
                
                if (rbp_1 s<= 0 || rbp_1 s> 4)
                    arg2[3].d = 3
                    goto label_142bb8f67
                
                result = sub_142bbb780(rdi, result_1, rbp_1)
                r13 = result.d
                
                if (result.d != 0)
                    arg2[3].d = result.d
                    goto label_142bb8f67
                
                rcx_6 = var_258
                var_248_1 = *(rdi + 0x2e0)
                goto label_142bb8ec6
            
            rcx_6 = var_258
            
            if (rcx_6 != rbp_1)
                arg2[3].d = 3
                goto label_142bb8f67
            
        label_142bb8ec6:
            int32_t rsi_1 = 0
            
            if (rcx_6 s> 0)
                void* rdi_2 = &var_228
                int64_t r14_1 = 0
                
                do
                    *arg2 = *rdi_2
                    arg2[2] = *(rdi_2 + 8)
                    rdi_2 += 0x18
                    rsi_1 += 1
                    r14_1 += 4
                    *(r14_1 + *(var_248_1 + (r15_1 << 3) + 0x28) - 4) = arg2[0xa](arg2, 0)
                while (rsi_1 s< var_258)
                
                r12_1 = var_250_1
            
            r12_1 += 1
            r15_1 += 1
            var_250_1 = r12_1
            
            if (r12_1 s>= result_1)
                break
            
            rdi = arg1
    
    *arg2 = rcx_1
    result = result_2
    arg2[2] = result
    arg2[3].d = r13

label_142bb8f67:
__security_check_cookie(rax_1 ^ &var_278)
return result

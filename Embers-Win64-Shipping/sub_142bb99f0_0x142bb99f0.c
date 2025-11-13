// 函数: sub_142bb99f0
// 地址: 0x142bb99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t rsi = *(arg1 + 0x98)
int32_t result_1 = 0
int64_t var_2a8 = rsi
int32_t var_2b0
void var_288
uint64_t result = arg2[0xf](arg2, &var_288, 4, &var_2b0)
int32_t r8 = var_2b0

if (r8 s< 0)
    arg2[3].d = 0xa2
else if (r8 == 0 || r8 s> 4)
    arg2[3].d = 3
else
    int64_t rax_2 = *arg2
    int64_t rax_3 = arg2[2]
    result = sub_142bbb780(arg1, 0, r8)
    result_1 = result.d
    
    if (result.d != 0)
        arg2[3].d = result.d
    else
        void* rcx_2 = *(arg1 + 0x2e0)
        int32_t r15_1 = 0
        
        if (var_2b0 s> 0)
            void* rdi_1 = rcx_2 + 0xb0
            
            while (true)
                *arg2 = *(rdi_1 + &var_288 - rcx_2 - 0xb0)
                void var_280
                arg2[2] = *(&var_280 - rcx_2 + rdi_1 - 0xb0)
                int64_t var_2c8
                int32_t* var_2c0
                int32_t var_2b4
                void var_228
                result = arg2[0xf](arg2, &var_228, 0x14, &var_2b4, var_2c8, var_2c0)
                int32_t r9_2 = var_2b4
                
                if (r9_2 s<= 0 || r9_2 s> 0x14 || *rdi_1 != 0)
                    arg2[3].d = 3
                    goto label_142bb9c32
                
                var_2c0 = &result_1
                var_2c8 = 0
                result = sub_142b99a90(rsi, 4, 0, r9_2 * 2, var_2c8, var_2c0)
                *rdi_1 = result
                int32_t result_2 = result_1
                
                if (result_2 != 0)
                    arg2[3].d = result_2
                    goto label_142bb9c32
                
                int64_t rdx_2 = sx.q(var_2b4)
                int32_t rbp_1 = 0
                *(rdi_1 - 8) = rdx_2.b
                *(rdi_1 + 8) = result + (rdx_2 << 2)
                
                if (rdx_2.d s> 0)
                    int32_t* rsi_1 = nullptr
                    void* r14_1 = &var_228
                    
                    do
                        *arg2 = *r14_1 + 1
                        arg2[2] = *(r14_1 + 8) - 1
                        *(rsi_1 + *rdi_1) = arg2[9](arg2)
                        r14_1 += 0x18
                        rbp_1 += 1
                        rsi_1 = &rsi_1[1]
                        *(rsi_1 + *(rdi_1 + 8) - 4) = arg2[0xa](arg2, 0)
                    while (rbp_1 s< var_2b4)
                    
                    rsi = var_2a8
                
                r15_1 += 1
                rdi_1 += 0x18
                
                if (r15_1 s< var_2b0)
                    continue
                
                result = zx.q(result_1)
                break
        
        *arg2 = rax_2
        arg2[2] = rax_3
        arg2[3].d = result.d

label_142bb9c32:
__security_check_cookie(rax_1 ^ &var_2e8)
return result

// 函数: sub_142b27540
// 地址: 0x142b27540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1c8
int64_t result = __security_cookie ^ &var_1c8
int64_t result_1 = result

if (*arg5 s<= 0)
    if (arg4 == 0 || (arg4 == 1 && *arg3 == 0x67))
        *(arg1 + 0x20) = 0
        *(arg1 + 0x28) = 0
        *(arg1 + 0x38) = 0
        *(arg1 + 0x48) = 0
    else
        struct icu_64::UObject::icu_64::UVector32::VTable* var_180
        sub_142ae7bc0(&var_180, arg5)
        sub_142aa6a20(arg2, arg3, arg4, &var_180, arg5)
        
        if (*arg5 s> 0)
            result = sub_142ae7c50(&var_180)
        else
            int32_t var_178
            int64_t rbp_1 = sx.q(var_178)
            int32_t r9_1 = 0
            
            if (rbp_1.d != 0)
                int64_t var_168
                int64_t r14_1 = var_168
                *(arg1 + 0x28) = *(r14_1 + (sx.q((rbp_1 - 1).d) << 2)) & 0xffff0000
                int32_t i = 0
                int32_t rdi_1 = -1
                int32_t rsi_1 = 0
                int64_t r11_1 = 0
                char var_158[0x100]
                
                if (rbp_1.d s> 0)
                    do
                        int32_t r10_1 = *(r14_1 + (r11_1 << 2))
                        uint64_t r8_2 = zx.q(r10_1 u>> 0x18)
                        
                        if (i s< r8_2.d)
                            void* rdx_2 = &var_158[sx.q(i)]
                            
                            do
                                *rdx_2 = i.b + r10_1.b
                                i += 1
                                rdx_2 += 1
                            while (i s< r8_2.d)
                        
                        if ((r10_1 & 0xff0000) != 0)
                            if (r8_2.d u>= 0x100)
                                __report_rangecheckfailure()
                                noreturn
                            
                            var_158[r8_2] = 0
                            i = (r8_2 + 1).d
                            
                            if (rdi_1 s< 0)
                                rdi_1 = rsi_1
                        
                        rsi_1 += 1
                        r11_1 += 1
                    while (r11_1 s< rbp_1)
                
                if (rbp_1.d s<= 0 || i s<= 0xff)
                    char* rdx_3 = &var_158[sx.q(i)]
                    
                    do
                        *rdx_3 = i.b
                        i += 1
                        rdx_3 = &rdx_3[1]
                    while (i s<= 0xff)
                
                if (rdi_1 s>= 0)
                    r14_1 += sx.q(rdi_1) << 2
                    r9_1 = rbp_1.d - rdi_1
                
                int32_t* var_1a8_1
                var_1a8_1.d = r9_1
                sub_142b273d0(arg1, arg3, arg4, r14_1, var_1a8_1.d, &var_158, arg5)
                result = sub_142ae7c50(&var_180)
            else
                *(arg1 + 0x20) = 0
                *(arg1 + 0x28) = 0
                *(arg1 + 0x38) = 0
                *(arg1 + 0x48) = 0
                result = sub_142ae7c50(&var_180)

__security_check_cookie(result_1 ^ &var_1c8)
return result

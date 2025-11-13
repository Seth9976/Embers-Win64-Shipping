// 函数: sub_14083cdc0
// 地址: 0x14083cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0

if (*(arg1 + 0x250) s> 0)
    do
        int32_t rax_2 = *(arg1 + 0x254)
        int32_t rbp_1 = 0
        
        if (rax_2 s> 0)
            do
                void* rsi_1 = *(*(*(arg1 + 0x258) + (sx.q(rax_2 * i + rbp_1) << 3)) + 0x1f8)
                void* var_58_1 = nullptr
                int32_t var_4c_1 = 4
                int32_t var_50_1 = 0
                void* rax_6 = sub_14086a680()
                void* const rdi_1
                
                if (rax_6 == 0)
                    rdi_1 = nullptr
                else
                    void* rax_7 = sub_142459c10()
                    
                    if (rax_7 == 0)
                        rdi_1 = nullptr
                    else
                        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                        
                        if (rax_8.d s> *(rax_6 + 0x38))
                            rdi_1 = nullptr
                        else
                            rdi_1 = rax_6
                            
                            if (*(*(rax_6 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                rdi_1 = nullptr
                
                void var_78
                void* r8_1 = &var_78
                
                if (rdi_1 != sub_142459c10())
                    sub_140817de0(rsi_1, rax_6, r8_1)
                else
                    sub_140817bd0(rsi_1, rax_6, r8_1)
                
                void* rcx_5 = var_58_1
                void* rbx_2 = &var_78
                int64_t rdi_2 = 0
                
                if (rcx_5 != 0)
                    rbx_2 = rcx_5
                
                int64_t rsi_2 = sx.q(var_50_1) << 3
                uint64_t rsi_3 = rsi_2 u>> 3
                
                if (rbx_2 u> rbx_2 + rsi_2)
                    rsi_3 = 0
                
                if (rsi_3 != 0)
                    do
                        sub_140777700(*rbx_2, arg2)
                        rdi_2 += 1
                        rbx_2 += 8
                    while (rdi_2 != rsi_3)
                    
                    rcx_5 = var_58_1
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                rax_2 = *(arg1 + 0x254)
                rbp_1 += 1
            while (rbp_1 s< rax_2)
        
        i += 1
    while (i s< *(arg1 + 0x250))

int64_t result = sub_141dd7200(arg1, arg2 ^ 1)
__security_check_cookie(rax_1 ^ &var_98)
return result

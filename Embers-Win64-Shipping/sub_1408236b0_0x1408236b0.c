// 函数: sub_1408236b0
// 地址: 0x1408236b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
int32_t i = 0

if (*(arg1 + 0x250) s> 0)
    do
        result = zx.q(*(arg1 + 0x254))
        int32_t j = 0
        
        if (result.d s> 0)
            do
                void* rsi_1 = *(*(*(arg1 + 0x258) + (sx.q(result.d * i + j) << 3)) + 0x1f8)
                void* var_48_1 = nullptr
                int32_t var_3c_1 = 4
                int32_t var_40_1 = 0
                void* rax_4 = sub_14086a680()
                void* const rdi_1
                
                if (rax_4 == 0)
                    rdi_1 = nullptr
                else
                    void* rax_5 = sub_142459c10()
                    
                    if (rax_5 == 0)
                        rdi_1 = nullptr
                    else
                        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                        
                        if (rax_6.d s> *(rax_4 + 0x38))
                            rdi_1 = nullptr
                        else
                            rdi_1 = rax_4
                            
                            if (*(*(rax_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                                rdi_1 = nullptr
                
                void var_68
                void* r8_1 = &var_68
                
                if (rdi_1 != sub_142459c10())
                    sub_140817de0(rsi_1, rax_4, r8_1)
                else
                    sub_140817bd0(rsi_1, rax_4, r8_1)
                
                void* rcx_5 = var_48_1
                void* rbx_2 = &var_68
                int64_t rdi_2 = 0
                
                if (rcx_5 != 0)
                    rbx_2 = rcx_5
                
                int64_t rsi_2 = sx.q(var_40_1) << 3
                uint64_t rsi_3 = rsi_2 u>> 3
                
                if (rbx_2 u> rbx_2 + rsi_2)
                    rsi_3 = 0
                
                if (rsi_3 != 0)
                    do
                        int64_t* rcx_4 = *rbx_2
                        (*(*rcx_4 + 0x270))(rcx_4)
                        rdi_2 += 1
                        rbx_2 += 8
                    while (rdi_2 != rsi_3)
                    
                    rcx_5 = var_48_1
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                result = zx.q(*(arg1 + 0x254))
                j += 1
            while (j s< result.d)
        
        i += 1
    while (i s< *(arg1 + 0x250))

__security_check_cookie(result_1 ^ &var_88)
return result

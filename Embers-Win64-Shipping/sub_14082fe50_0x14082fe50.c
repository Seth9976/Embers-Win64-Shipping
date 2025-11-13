// 函数: sub_14082fe50
// 地址: 0x14082fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
uint64_t result = __security_cookie ^ &var_98
uint64_t result_1 = result
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x250) s> 0)
    do
        result = zx.q(*(arg1 + 0x254))
        int32_t j = 0
        
        if (result.d s> 0)
            do
                void* rbp_1 = *(*(*(arg1 + 0x258) + (sx.q(result.d * i + j) << 3)) + 0x1f8)
                void* var_50_1 = nullptr
                int32_t var_44_1 = 4
                int32_t var_48_1 = 0
                void* rax_4 = sub_14086a680()
                void* rsi_1
                
                if (rax_4 == 0)
                    rsi_1 = nullptr
                else
                    void* rax_5 = sub_142459c10()
                    
                    if (rax_5 == 0)
                        rsi_1 = nullptr
                    else
                        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                        
                        if (rax_6.d s> *(rax_4 + 0x38)
                                || *(*(rax_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                            rsi_1 = nullptr
                        else
                            rsi_1 = rax_4
                
                void var_70
                void* r8_1 = &var_70
                
                if (rsi_1 != sub_142459c10())
                    sub_140817de0(rbp_1, rax_4, r8_1)
                else
                    sub_140817bd0(rbp_1, rax_4, r8_1)
                
                void* rcx_5 = var_50_1
                void* rsi_2 = &var_70
                
                if (rcx_5 != 0)
                    rsi_2 = rcx_5
                
                int64_t rbp_2 = 0
                int64_t r15_1 = sx.q(var_48_1) << 3
                uint64_t r15_2 = r15_1 u>> 3
                
                if (rsi_2 u> rsi_2 + r15_1)
                    r15_2 = 0
                
                if (r15_2 != 0)
                    do
                        int64_t rbx_2 = sx.q(arg2[1].d)
                        int64_t r14 = *rsi_2
                        int32_t rax_11 = (rbx_2 + 1).d
                        arg2[1].d = rax_11
                        
                        if (rax_11 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        rsi_2 += 8
                        rbp_2 += 1
                        *(*arg2 + (rbx_2 << 3)) = r14
                    while (rbp_2 != r15_2)
                    
                    rcx_5 = var_50_1
                    i = i_1
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                result = zx.q(*(arg1 + 0x254))
                j += 1
            while (j s< result.d)
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x250))

__security_check_cookie(result_1 ^ &var_98)
return result

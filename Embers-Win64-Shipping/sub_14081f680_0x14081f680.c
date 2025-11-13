// 函数: sub_14081f680
// 地址: 0x14081f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result = *(arg1 + 0x268)

if ((result.b & 1) != 0)
    *(arg1 + 0x268) = result & 0xfffffffe
    result = sub_14082b700(arg1)

int32_t i = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x20)

if (*(arg1 + 0x250) s> 0)
    int64_t var_78
    
    do
        result = *(arg1 + 0x254)
        int32_t rsi_1 = 0
        
        if (result s> 0)
            do
                void* rbp_1 = *(*(*(arg1 + 0x258) + (sx.q(result * i + rsi_1) << 3)) + 0x1f8)
                void* var_48_1 = nullptr
                int32_t var_3c_1 = 4
                int32_t var_40_1 = 0
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
                
                void var_68
                void* r8_1 = &var_68
                
                if (rdi_1 != sub_142459c10())
                    sub_140817de0(rbp_1, rax_6, r8_1)
                else
                    sub_140817bd0(rbp_1, rax_6, r8_1)
                
                void* rcx_7 = var_48_1
                void* rdi_2 = &var_68
                int64_t r15_1 = 0
                
                if (rcx_7 != 0)
                    rdi_2 = rcx_7
                
                int64_t rbp_2 = sx.q(var_40_1) << 3
                uint64_t rbp_3 = rbp_2 u>> 3
                
                if (rdi_2 u> rdi_2 + rbp_2)
                    rbp_3 = 0
                
                if (rbp_3 != 0)
                    do
                        int64_t* rbx_2 = *rdi_2
                        int64_t r9_1
                        r9_1.b = 1
                        int64_t* var_98_1 = &var_78
                        sub_14087b290(*(arg1 + 0x230), rbx_2, zx.q(i))
                        int64_t* var_98_2 = &var_88
                        sub_14087b290(*(arg1 + 0x238), rbx_2, zx.q(rsi_1))
                        int64_t rdx_5
                        rdx_5.b = 1
                        (*(*rbx_2 + 0x268))(rbx_2, rdx_5)
                        r15_1 += 1
                        rdi_2 += 8
                    while (r15_1 != rbp_3)
                    
                    rcx_7 = var_48_1
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                result = *(arg1 + 0x254)
                rsi_1 += 1
            while (rsi_1 s< result)
        
        i += 1
    while (i s< *(arg1 + 0x250))
    
    int64_t rcx_8 = var_88
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = var_78
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_b8)
return result

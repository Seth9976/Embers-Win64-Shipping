// 函数: sub_141035b00
// 地址: 0x141035b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result_1 = arg3 - 1
int64_t* rbx = arg2
int64_t result = sx.q(result_1)

if (arg3 - 1 s>= 0)
    int64_t result_2
    
    do
        if (arg2[result] != 0)
            if (result_1 != 0xffffffff)
                void var_98
                memset(&var_98, 0, 0x60)
                void* rsi_1 = *(arg1 + 0x18)
                
                if (result_1 != 0xffffffff)
                    void var_90
                    void* rdi_1 = &var_90
                    uint64_t i_1 = zx.q(result_1 + 1)
                    uint64_t i
                    
                    do
                        void* rax_2 = *rbx
                        int64_t rcx_2
                        
                        if (rax_2 == 0)
                            rcx_2 = 0
                        else
                            sub_14105c1a0(rax_2, rsi_1 + 0x1c0)
                            rax_2 = *rbx
                            
                            if (rax_2 == 0)
                                rcx_2 = 0
                            else
                                rcx_2 = *(rax_2 + 0x108)
                        
                        *(rdi_1 - 8) = rcx_2
                        *(rdi_1 + 8) = 0
                        *rdi_1 = -1
                        
                        if (rax_2 != 0)
                            sub_141037220(rsi_1 + 0x1c0, rax_2, 0x100, 0xffffffff)
                        
                        rdi_1 += 0x18
                        rbx = &rbx[1]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                int64_t* rcx_4 = *(*(rsi_1 + 0x1c8) + 0x30)
                result = (*(*rcx_4 + 0x168))(rcx_4, 0, zx.q(result_1 + 1), &var_98)
            
            break
        
        result_1 -= 1
        result_2 = result
        result -= 1
    while (result_2 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_b8)
return result

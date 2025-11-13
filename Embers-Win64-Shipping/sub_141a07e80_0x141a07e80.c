// 函数: sub_141a07e80
// 地址: 0x141a07e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423892a0(arg1)
void* rbp = *(arg1 + 0x640)
int64_t result = sx.q(*(arg1 + 0x648))
void* r15_1 = result * 0x58 + rbp

if (rbp != r15_1)
    int64_t* rdi_1 = rbp + 0x10
    
    do
        if (*(rdi_1 + 0x42) != 0)
            int32_t var_38
            sub_141a0a4e0(&data_1439cbfb0, &var_38, rdi_1)
            int64_t rax = sx.q(var_38)
            void* const rsi_2
            
            if (rax.d == 0xffffffff)
                rsi_2 = nullptr
            else
                rsi_2 = rax * 0x70 + data_1439cbfb0
            
            int64_t rbx_1 = rdi_1[3]
            int64_t* r14_1 = rsi_2 + 0x18
            
            if (rsi_2 == 0)
                r14_1 = nullptr
            
            int32_t var_34
            sub_1419eda60(r14_1, &var_34, rbx_1)
            int64_t rax_1 = sx.q(var_34)
            void* rax_3
            
            if (rax_1.d != 0xffffffff)
                rax_3 = *r14_1 + rax_1 * 0x18
            
            if (rax_1.d == 0xffffffff || rax_3 == 0)
                result = 0
            else
                result = *(rax_3 + 8)
            
            if (result == rbp)
                sub_1419eff80(r14_1, rbx_1)
                int32_t* rax_4 = rsi_2 + 0x20
                int32_t* rcx_2 = rsi_2 + 0x4c
                
                if (rsi_2 == 0)
                    rax_4 = 8
                
                if (rsi_2 == 0)
                    rcx_2 = 0x34
                
                if (*rax_4 != *rcx_2)
                    void* rax_8 = rdi_1[4]
                    
                    if (rax_8 != 0)
                        *(rax_8 + 0x48) = 0
                    
                    void* rax_9 = rdi_1[5]
                    
                    if (rax_9 != 0)
                        *(rax_9 + 0x40) = 0
                    
                    void* rax_10 = rdi_1[6]
                    
                    if (rax_10 != 0)
                        *(rax_10 + 0x38) = 0
                    
                    result = rdi_1[7]
                    
                    if (result != 0)
                        *(result + 0x30) = 0
                else
                    sub_141a13530(&data_1439cbfb0, rdi_1)
                    int32_t var_30
                    sub_141a0a410(&data_1439cc030, &var_30, rdi_1)
                    int64_t rax_6 = sx.q(var_30)
                    void* const rbx_2
                    
                    if (rax_6.d == 0xffffffff)
                        rbx_2 = nullptr
                    else
                        rbx_2 = data_1439cc030 + rax_6 * 0x28
                    
                    void* rbx_3 = *(rbx_2 + 0x18)
                    
                    if (rbx_3 != 0)
                        sub_1419fd4e0(rbx_3)
                        j_sub_140a74f90(rbx_3)
                    
                    result = sub_141a13400(&data_1439cc030, rdi_1)
        
        rbp += 0x58
        rdi_1 = &rdi_1[0xb]
    while (rbp != r15_1)

return result

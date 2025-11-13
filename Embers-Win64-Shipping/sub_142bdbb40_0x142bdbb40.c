// 函数: sub_142bdbb40
// 地址: 0x142bdbb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2) * 0xcc
int64_t rax_1 = *(arg1 + 0x28)
uint32_t rbp = *(rdx + rax_1 + 0xcc)
int32_t r14 = *(rdx + rax_1 + 0xd0)
int32_t i = *(arg1 + 4)
int64_t* result = *(arg1 + 0x10)
int64_t* result_1 = result
uint32_t arg_8 = rbp
int32_t arg_18 = r14
int32_t i_1 = i

while (i != 0)
    void* rbx_1 = *result
    int32_t rcx = 0
    void* rdi_1 = nullptr
    void* rax_2 = rbx_1
    void* rsi_3 = (zx.q(result[1].d) << 6) + rbx_1
    
    if (rbx_1 u< rsi_3)
        do
            if ((*(rax_2 + 0x1c) & 0x20) != 0)
                if (rdi_1 == 0)
                    rdi_1 = rax_2
                
                rcx += 1
            
            rax_2 += 0x40
        while (rax_2 u< rsi_3)
        
        if (rcx u>= 2)
            void* r12_1 = rdi_1
            void* var_58_1 = rdi_1
            
            while (true)
                void* rbx_2 = *(rdi_1 + 8)
                
                if (rbx_2 == r12_1)
                    break
                
                if ((*(rbx_2 + 0x1c) & 0x20) == 0)
                    do
                        rbx_2 = *(rbx_2 + 8)
                    while ((*(rbx_2 + 0x1c) & 0x20) == 0)
                    
                    int32_t rax_6 = *(rdi_1 + 0x30)
                    int32_t rsi_4 = *(rbx_2 + 0x30)
                    int32_t rbp_1
                    int32_t rsi_5
                    int32_t r14_2
                    int32_t r15_1
                    
                    if (rax_6 s> rsi_4)
                        rbp_1 = *(rbx_2 + 0x38)
                        r15_1 = rsi_4
                        r14_2 = *(rdi_1 + 0x38)
                        rsi_5 = rax_6 - r15_1
                    else
                        rbp_1 = *(rdi_1 + 0x38)
                        r15_1 = rax_6
                        r14_2 = *(rbx_2 + 0x38)
                        rsi_5 = rsi_4 - rax_6
                    
                    int32_t r14_3 = r14_2 - rbp_1
                    uint32_t r13_1 = 0x10000
                    
                    if (rsi_5 s> 0)
                        r13_1 = sub_142b91790(r14_3, rsi_5)
                    
                    void* rdi_2 = *(rdi_1 + 8)
                    
                    do
                        int32_t rcx_5 = *(rdi_2 + 0x30) - r15_1
                        int32_t rax_9
                        
                        if (rcx_5 s<= 0)
                            rax_9 = sub_142b93e80(rcx_5, arg_8)
                        else if (rcx_5 s< rsi_5)
                            rax_9 = sub_142b93e80(rcx_5, r13_1)
                        else
                            rax_9 = sub_142b93e80(rcx_5 - rsi_5, arg_8) + r14_3
                        
                        *(rdi_2 + 0x38) = rax_9 + rbp_1
                        rdi_2 = *(rdi_2 + 8)
                    while (rdi_2 != rbx_2)
                    
                    r12_1 = var_58_1
                    rdi_1 = rbx_2
                    
                    if (rbx_2 == r12_1)
                        break
                else
                    rdi_1 = rbx_2
            
            rbp = arg_8
            i = i_1
        else
            if (rcx == 1)
                int32_t rax_3 = sub_142b93e80(*(rdi_1 + 0x30), rbp)
                i = i_1
                r14 = *(rdi_1 + 0x38) - rax_3
                arg_18 = r14
            
            if (rbx_1 u< rsi_3)
                do
                    if (rbx_1 != rdi_1)
                        *(rbx_1 + 0x38) = sub_142b93e80(*(rbx_1 + 0x30), rbp) + r14
                    
                    rbx_1 += 0x40
                while (rbx_1 u< rsi_3)
                
                i = i_1
    
    i -= 1
    r14 = arg_18
    result = &result_1[2]
    i_1 = i
    result_1 = result

return result

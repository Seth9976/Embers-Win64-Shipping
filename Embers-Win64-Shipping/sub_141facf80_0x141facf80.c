// 函数: sub_141facf80
// 地址: 0x141facf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_8 = arg1
int32_t i = 0

if (data_143f3d218 s<= 0)
    return 

int64_t* r15_1 = nullptr

do
    if (sub_142315ab0(&arg_8, i).b != 0 && sub_142315ab0(&data_143f3d220, i).b != 0)
        void* const* rax = data_143f3d210
        int32_t rdi_1 = *(r15_1 + rax + 8)
        
        if (rdi_1 s> 0)
            int32_t rdi_2 = rdi_1 - 1
            
            if (rdi_1 - 1 s>= 0)
                int64_t rsi_2 = sx.q(rdi_2) << 4
                int64_t r14_1 = rsi_2
                
                while (true)
                    int64_t rbx_1 = *(r15_1 + rax)
                    
                    if (*(rsi_2 + rbx_1 + 8) == 0)
                        goto label_141fad073
                    
                    int64_t* rcx_1 = *(rsi_2 + rbx_1)
                    
                    if (rcx_1 == 0)
                        goto label_141fad073
                    
                    if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
                        rax = data_143f3d210
                    label_141fad073:
                        int64_t* rbx_2 = r15_1 + rax
                        sub_140745b20(*(r15_1 + rax) + r14_1)
                        int32_t rdx_4 = rbx_2[1].d
                        int32_t rcx_7 = rdx_4 - rdi_2 - 1
                        
                        if (rcx_7 s>= 1)
                            rcx_7 = 1
                        
                        if (rcx_7 != 0)
                            int64_t rax_5 = *rbx_2
                            memcpy(r14_1 + rax_5, (sx.q(rdx_4 - rcx_7) << 4) + rax_5, rcx_7 << 4)
                            rdx_4 = rbx_2[1].d
                        
                        rbx_2[1].d = rdx_4 - 1
                    else if (*(rsi_2 + rbx_1 + 8) == 0)
                        (*(*nullptr + 0x48))(0, arg2, 0)
                    else
                        int64_t* rcx_2 = *(rsi_2 + rbx_1)
                        (*(*rcx_2 + 0x48))(rcx_2, arg2, 0)
                    
                    r14_1 -= 0x10
                    rsi_2 -= 0x10
                    int32_t temp1_1 = rdi_2
                    rdi_2 -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        break
                    
                    rax = data_143f3d210
    
    i += 1
    r15_1 = &r15_1[2]
while (i s< data_143f3d218)

// 函数: sub_141bb29f0
// 地址: 0x141bb29f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c0) = 0
void* rcx = arg1 + 0x1c8
int64_t* r14 = *rcx
int64_t result = sx.q(*(rcx + 8))
void* r12 = &r14[result]

if (r14 != r12)
    int64_t rbp
    int64_t var_8_1 = rbp
    
    do
        int64_t arg_8 = *r14
        result = sub_140d3e110(&arg_8)
        
        if (result.b != 0)
            int64_t rax_1 = sub_140d3c6e0(&arg_8)
            rbp.b = 0
            *(arg1 + 0x1ec) += 1
            int32_t rcx_3 = *(arg1 + 0x1e0)
            int32_t rax_2 = *(arg1 + 0x1ec)
            int64_t rdi_1 = sx.q(rcx_3 - 1)
            
            if (rcx_3 - 1 s>= 0)
                int64_t rbx_2 = rdi_1 << 4
                int64_t temp1_1
                
                do
                    int64_t rax_3 = *(arg1 + 0x1d8)
                    
                    if (*(rbx_2 + rax_3 + 8) == 0)
                        rbp.b = 1
                    else
                        int64_t* rcx_5 = *(rbx_2 + rax_3)
                        
                        if (rcx_5 == 0)
                            rbp.b = 1
                        else if ((*(*rcx_5 + 0x50))(rcx_5, rax_1) == 0)
                            rbp.b = 1
                    
                    rbx_2 -= 0x10
                    temp1_1 = rdi_1
                    rdi_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rax_2 = *(arg1 + 0x1ec)
            
            *(arg1 + 0x1ec) = rax_2 - 1
            
            if (rbp.b != 0)
                sub_140599630(arg1 + 0x1d8, 0)
            
            int64_t arg_10 = sub_140d3c6e0(&arg_8)
            result = sub_1405a9f90(arg1 + 0x120, &arg_10)
        
        r14 = &r14[1]
    while (r14 != r12)

bool cond:0 = *(rcx + 0xc) == 0
*(rcx + 8) = 0

if (cond:0)
    return result

return sub_1405c5570(rcx, 0) __tailcall

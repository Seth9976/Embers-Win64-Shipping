// 函数: sub_141eaa630
// 地址: 0x141eaa630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x50)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s< 0)
    return 

int64_t rdi_2 = sx.q(rbx_1) << 4
int64_t r15_1 = rdi_2
int64_t r14_2 = sx.q(rbx_1 + 1) << 4
int32_t temp1_1

do
    int128_t var_38 = *(*(arg1 + 0x48) + rdi_2)
    
    if (sub_140d3c6e0(&var_38:8) == arg2)
        int64_t* rcx_1 = var_38.q
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x280))(rcx_1, zx.q(arg3))
            
            if (arg3 != 0)
                int32_t rax_4 = *(arg1 + 0x50)
                int32_t rcx_3 = rax_4 - rbx_1
                
                if (rcx_3 != 1)
                    int64_t rax_5 = *(arg1 + 0x48)
                    memmove(r15_1 + rax_5, r14_2 + rax_5, (rcx_3 - 1) << 4)
                    rax_4 = *(arg1 + 0x50)
                
                *(arg1 + 0x50) = rax_4 - 1
                sub_1405a5010(arg1 + 0x48)
                sub_141eac150(arg1, var_38.q)
    
    r14_2 -= 0x10
    r15_1 -= 0x10
    rdi_2 -= 0x10
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)

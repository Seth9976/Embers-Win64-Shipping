// 函数: sub_1409746d0
// 地址: 0x1409746d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x38)
int32_t rbp = 0
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t rdi
    int64_t arg_10 = rdi
    int64_t rsi_2 = sx.q(rbx_1) * 0x50
    int32_t temp1_1
    
    do
        int64_t rax_3 = *(arg1 + 0x30)
        int64_t* rcx = *(rsi_2 + rax_3 + 8)
        void* r15_1 = rsi_2 + rax_3
        
        if (rcx != 0)
            rax_3 = (*(*rcx + 0x28))(rcx)
        
        if (rcx == 0 || rax_3.b == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        int64_t* rcx_1 = *(arg2 + 8)
        
        if (rcx_1 != 0)
            rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (rcx_1 == 0 || rax_3.b == 0)
            rax_3.b = 0
        else
            rax_3.b = 1
        
        if (rdi.b == rax_3.b)
            char rax_6
            
            if (rdi.b != 0)
                int64_t* rcx_2 = *(r15_1 + 8)
                rax_6 = (**rcx_2)(rcx_2, *(arg2 + 8))
            
            if (rdi.b == 0 || rax_6 != 0)
                rbp += 1
                sub_140975590(arg1, rbx_1)
        
        rsi_2 -= 0x50
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return zx.q(rbp)

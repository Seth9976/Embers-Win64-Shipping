// 函数: sub_142719d90
// 地址: 0x142719d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
char r8 = 0
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t rsi_2 = sx.q(rbx_1) * 0x28
    int64_t r14_1 = rsi_2
    int32_t temp1_1
    
    do
        void* r15_2 = *arg1 + rsi_2
        
        if (*(r15_2 + 4) == **arg2)
            int64_t* rbp_1 = arg2[1]
            
            if (*rbp_1 != 0)
                void* rax_3 = rbp_1[2]
                void* rcx_1 = &rbp_1[4]
                
                if (rax_3 != 0)
                    rcx_1 = rax_3
                
                (*rbp_1)((*(*rcx_1 + 8))(rcx_1), r15_2)
            
            int32_t rdx_3 = arg1[1].d
            int32_t rax_8 = rdx_3 - rbx_1 - 1
            
            if (rax_8 s>= 1)
                rax_8 = 1
            
            if (rax_8 != 0)
                int64_t r9_1 = *arg1
                memcpy(r14_1 + r9_1, r9_1 + sx.q(rdx_3 - rax_8) * 0x28, rax_8 * 0x28)
                rdx_3 = arg1[1].d
            
            r8 = 1
            arg1[1].d = rdx_3 - 1
        
        r14_1 -= 0x28
        rsi_2 -= 0x28
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return zx.q(r8)

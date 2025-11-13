// 函数: sub_142c3aee0
// 地址: 0x142c3aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rbp = 1

if (arg2 u> 1)
    int16_t* r12_1 = arg1 + 2
    int32_t* r15_1 = arg4 + 4
    result = arg2
    
    do
        int32_t rdi_1 = rbp
        
        if (rbp != 0)
            uint64_t rbx_1
            
            do
                rbx_1 = zx.q(rdi_1 - 1)
                
                if (arg3(arg1 + (rbx_1 << 1), arg1 + (zx.q(rbp) << 1)) s<= 0)
                    break
                
                rdi_1 = rbx_1.d
            while (rbx_1.d != 0)
            
            if (rbp != rdi_1)
                int16_t rbx_2 = *r12_1
                uint64_t rcx_1 = zx.q(rdi_1)
                uint64_t rax_3 = zx.q(rbp - rdi_1)
                uint64_t rdi_2 = zx.q(rdi_1 + 1)
                int16_t* rsi_2 = arg1 + (rcx_1 << 1)
                memmove(arg1 + (rdi_2 << 1), rsi_2, rax_3.d * 2)
                *rsi_2 = rbx_2
                
                if (arg4 != 0)
                    int32_t rdi_3 = *r15_1
                    int32_t* rbx_3 = arg4 + (rcx_1 << 2)
                    memmove(arg4 + (zx.q(rdi_2.d) << 2), rbx_3, (rax_3 << 2).d)
                    *rbx_3 = rdi_3
            
            result = arg2
        
        rbp += 1
        r12_1 = &r12_1[1]
        r15_1 = &r15_1[1]
    while (rbp u< result)

return result

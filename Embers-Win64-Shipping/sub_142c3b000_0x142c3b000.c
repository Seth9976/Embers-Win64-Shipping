// 函数: sub_142c3b000
// 地址: 0x142c3b000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rbp = 1

if (arg2 u> 1)
    void* r13_2 = arg1 - arg4
    void* var_58_1 = r13_2
    int16_t* r15_1 = arg4 + 2
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
                int16_t rbx_2 = *(r15_1 + r13_2)
                uint64_t rax_3 = zx.q(rdi_1) * 2
                uint32_t count = (rbp - rdi_1) * 2
                int16_t* rsi_2 = rax_3 + arg1
                uint64_t rax_5 = zx.q(rdi_1 + 1) * 2
                memmove(rax_5 + arg1, rsi_2, count)
                *rsi_2 = rbx_2
                
                if (arg4 != 0)
                    int16_t* rdi_3 = rax_3 + arg4
                    int16_t rbx_3 = *r15_1
                    memmove(rax_5 + arg4, rdi_3, count)
                    *rdi_3 = rbx_3
                
                r13_2 = var_58_1
            
            result = arg2
        
        rbp += 1
        r15_1 = &r15_1[1]
    while (rbp u< result)

return result

// 函数: sub_14240f990
// 地址: 0x14240f990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140b5f8e0(arg2.d)

if (result.b != 0)
    int32_t rax = *(arg1 + 0x98)
    result = zx.q(rax - 1)
    int64_t rsi_1 = sx.q(result.d)
    
    if (rax - 1 s>= 0)
        int64_t rdi_2 = rsi_1 * 0x28
        int64_t temp1_1
        
        do
            int64_t rbp_1 = *(arg1 + 0x90)
            
            if (*(rdi_2 + rbp_1) == arg2)
                int64_t r15_1 = sx.q(arg3[1].d)
                int32_t rax_1 = (r15_1 + 1).d
                arg3[1].d = rax_1
                
                if (rax_1 s> *(arg3 + 0xc))
                    sub_1405c4ec0(arg3)
                
                int64_t rdx_1 = r15_1 * 5
                int64_t rcx_2 = *arg3
                *(rcx_2 + (rdx_1 << 3)) = *(rdi_2 + rbp_1)
                *(rcx_2 + (rdx_1 << 3) + 8) = *(rdi_2 + rbp_1 + 8)
                *(rcx_2 + (rdx_1 << 3) + 0x10) = *(rdi_2 + rbp_1 + 0x10)
                *(rcx_2 + (rdx_1 << 3) + 0x18) = *(rdi_2 + rbp_1 + 0x18)
                result = *(rdi_2 + rbp_1 + 0x20)
                *(rcx_2 + (rdx_1 << 3) + 0x20) = result
                
                if (result != 0)
                    *(result + 8) += 1
            
            rdi_2 -= 0x28
            temp1_1 = rsi_1
            rsi_1 -= 1
        while (temp1_1 - 1 s>= 0)

return result

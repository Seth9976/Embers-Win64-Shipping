// 函数: sub_14240f3a0
// 地址: 0x14240f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140b5f8e0(arg2.d)

if (result.b != 0)
    int32_t rdi_1 = *(arg1 + 0x88)
    int32_t result_1 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        result = sx.q(result_1)
        int64_t rsi_2 = result * 0x28
        int64_t r15_1 = rsi_2
        int32_t result_2
        
        do
            int64_t rbp_1 = *(arg1 + 0x80)
            
            if (*(rsi_2 + rbp_1) == arg2)
                int64_t r13_1 = sx.q(arg3[1].d)
                int32_t rax = (r13_1 + 1).d
                arg3[1].d = rax
                
                if (rax s> *(arg3 + 0xc))
                    sub_1405c4ec0(arg3)
                
                result = sub_1423fb8b0(*arg3 + r13_1 * 0x28, r15_1 + rbp_1)
            
            r15_1 -= 0x28
            rsi_2 -= 0x28
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)

return result

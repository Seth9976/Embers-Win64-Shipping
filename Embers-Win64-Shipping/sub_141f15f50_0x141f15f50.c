// 函数: sub_141f15f50
// 地址: 0x141f15f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0

if (arg2 s>= 0)
    int64_t rax_1 = sx.q(*(arg1 + 0x440))
    int32_t r9_1 = 0
    int32_t r10_1 = 0
    
    if (rax_1.d s> 0)
        int64_t* rcx = *(arg1 + 0x438)
        int64_t rdx = 0
        
        do
            void* rax_2 = *rcx
            r9_1 += *(rax_2 + 0x4c)
            
            if (arg2 s< r9_1)
                int64_t result = *(rax_2 + 0x10)
                *arg3 = r10_1
                return result
            
            r10_1 += 1
            rdx += 1
            rcx = &rcx[1]
        while (rdx s< rax_1)

return 0

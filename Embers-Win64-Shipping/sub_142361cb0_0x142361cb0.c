// 函数: sub_142361cb0
// 地址: 0x142361cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2:4.d == 0 & sub_140b5b8a0(arg2.d, 0)) == 0)
    int64_t rax_1 = sx.q(*(arg1 + 0xc0))
    
    if (rax_1.d s> 0)
        int64_t* rdx_1 = *(arg1 + 0xb8)
        int64_t rcx_1 = 0
        
        do
            void* const result = *rdx_1
            
            if (result != 0 && *(result + 0x28) == arg2)
                return result
            
            rcx_1 += 1
            rdx_1 = &rdx_1[1]
        while (rcx_1 s< rax_1)

return nullptr

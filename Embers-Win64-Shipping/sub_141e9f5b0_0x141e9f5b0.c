// 函数: sub_141e9f5b0
// 地址: 0x141e9f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = sx.q(*(arg1 + 0x250))

if (rax_3.d s> 0)
    int64_t* rcx = *(arg1 + 0x248)
    int64_t r8_1 = 0
    
    do
        void* result = *rcx
        
        if (result != 0 && *(result + 0x18) == *arg2)
            return result
        
        r8_1 += 1
        rcx = &rcx[1]
    while (r8_1 s< rax_3)

return 0

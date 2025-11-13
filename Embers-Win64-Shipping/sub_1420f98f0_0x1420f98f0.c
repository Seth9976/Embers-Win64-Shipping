// 函数: sub_1420f98f0
// 地址: 0x1420f98f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = sx.q(*(arg1 + 0x150))

if (rax_3.d s> 0)
    int64_t* rcx = *(arg1 + 0x148)
    int64_t rdx_1 = 0
    
    do
        void* result = *rcx
        
        if ((*(result + 0x1f4) & 0x21) == 0x21)
            return result
        
        rdx_1 += 1
        rcx = &rcx[1]
    while (rdx_1 s< rax_3)

return 0

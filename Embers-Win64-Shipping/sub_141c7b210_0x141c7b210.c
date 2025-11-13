// 函数: sub_141c7b210
// 地址: 0x141c7b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x20)
int32_t r10 = *(arg1 + 0x1c)

if (r8 s< arg2)
    char* rax_1 = *(arg1 + 8)
    int64_t rsi_1 = *(arg1 + 0x10)
    
    do
        uint32_t rdx = 0
        
        if (rax_1 != rsi_1)
            rdx = zx.d(*rax_1)
            rax_1 = &rax_1[1]
            *(arg1 + 8) = rax_1
        
        r8 += 8
        *(arg1 + 0x20) = r8
        int32_t rdx_2 = rdx << (0x20 - r8.b) | r10
        *(arg1 + 0x1c) = rdx_2
        r10 = rdx_2
    while (r8 s< arg2)

*(arg1 + 0x1c) = r10 << arg2.b
*(arg1 + 0x20) = r8 - arg2
return zx.q(r10 u>> (0x20 - arg2.b))

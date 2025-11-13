// 函数: sub_142815640
// 地址: 0x142815640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x28)
uint64_t r10 = 0

if (i != 0)
    do
        void* result = *(*(arg1 + 0x20) + (r10 << 3))
        char* rax_1 = *(result + 0x20)
        void* r9_2 = arg2 - rax_1
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_1)
            j = zx.d(*(rax_1 + r9_2))
            
            if (rdx != j)
                break
            
            rax_1 = &rax_1[1]
        while (j != 0)
        
        if (rdx - j == 0)
            for (void* j_1 = *(result + 0x18); j_1 != 0; j_1 = *(j_1 + 0x18))
                result = j_1
            
            return result
        
        r10 = zx.q(r10.d + 1)
    while (r10.d u< i)

return 0

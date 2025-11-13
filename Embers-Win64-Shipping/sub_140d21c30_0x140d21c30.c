// 函数: sub_140d21c30
// 地址: 0x140d21c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 0x10); i != 0; i = *(i + 0x40))
    for (int32_t j = 0; j s>= 0; j += 1)
        if (j s>= *(i + 0x1e0))
            break
        
        int64_t r10_1 = *(i + 0x1d8)
        int64_t r8_2 = sx.q(j) * 2
        
        if (*(r10_1 + (r8_2 << 3) + 0xc) == 0 && arg2 != 0)
            void* rcx = *(r10_1 + (r8_2 << 3))
            int64_t rdx = sx.q(*(arg2 + 0x38))
            
            if (rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == arg2 + 0x30)
                int64_t rcx_2 = sx.q(*(r10_1 + (r8_2 << 3) + 8))
                
                if (rcx_2.d != 0)
                    return arg1 + rcx_2

return 0

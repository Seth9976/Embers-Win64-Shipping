// 函数: sub_142be8ca0
// 地址: 0x142be8ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
uint32_t r8_6 = ((zx.d(*arg1) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[3])

if (r8_6 u> 0)
    do
        uint64_t rdx_1 = zx.q((r8_6 + r9) u>> 1)
        void* r10_2 = &arg1[zx.q((rdx_1 << 2).d)]
        uint32_t rax_7 = (zx.d(*(r10_2 + 4)) << 8 | zx.d(*(r10_2 + 5))) << 8 | zx.d(*(r10_2 + 6))
        
        if (arg2 u>= rax_7)
            if (arg2 u<= zx.d(*(r10_2 + 7)) + rax_7)
                return 1
            
            r9 = (rdx_1 + 1).d
        else
            r8_6 = rdx_1.d
    while (r9 u< r8_6)

return 0

// 函数: sub_142c1e7d0
// 地址: 0x142c1e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
uint32_t r8_2 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
int32_t r8_3 = r8_2 - 1

if (r8_2 - 1 s>= 0)
    do
        uint64_t rax_2 = zx.q((r8_3 + r9) u>> 1)
        uint64_t rdx = zx.q(rax_2.d)
        uint64_t rax_3 = rax_2 * 3
        void* r10_1 = arg1 + 4 + (rax_3 << 1)
        int32_t rax_7
        
        if (arg2 u>= zx.d(*(arg1 + 4 + (rax_3 << 1) + 1)) + (zx.d(*(arg1 + 4 + (rax_3 << 1))) << 8))
            rax_7.b = arg2 u> (zx.d(*(r10_1 + 2)) << 8) + zx.d(*(r10_1 + 3))
        
        if (arg2 u< zx.d(*(arg1 + 4 + (rax_3 << 1) + 1)) + (zx.d(*(arg1 + 4 + (rax_3 << 1))) << 8)
                || rax_7 s< 0)
            r8_3 = (rdx - 1).d
        else
            if (rax_7 s<= 0)
                uint64_t rcx_5 = rdx * 3
                return zx.q((zx.d(*(arg1 + 4 + (rcx_5 << 1) + 4)) << 8)
                    + zx.d(*(arg1 + 4 + (rcx_5 << 1) + 5)))
            
            r9 = (rdx + 1).d
    while (r9 s<= r8_3)

return 0

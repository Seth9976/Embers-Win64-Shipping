// 函数: sub_142c1e900
// 地址: 0x142c1e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_1 = zx.d(*(arg1 + 2)) << 8
int32_t rax_1 = zx.d(*(arg1 + 3)) - 1
int32_t r9_2 = r9_1 + rax_1

if (r9_1 + rax_1 s>= 0)
    do
        uint64_t rax_3 = zx.q((r10 + r9_2) u>> 1)
        int32_t r8_1 = rax_3.d
        uint32_t rcx =
            zx.d(zx.w(*(arg1 + 4 + (rax_3 << 1))) * 0x100 + zx.w(*(arg1 + 4 + (rax_3 << 1) + 1)))
        int32_t rax_5
        
        if (arg2 u>= rcx)
            rax_5.b = arg2 != rcx
        
        if (arg2 u< rcx || rax_5 s< 0)
            r9_2 = r8_1 - 1
        else
            if (rax_5 s<= 0)
                return zx.q(r8_1)
            
            r10 = r8_1 + 1
    while (r10 s<= r9_2)

return 0xffffffff

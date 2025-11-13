// 函数: sub_142c003c0
// 地址: 0x142c003c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_1 = zx.d(*(arg1 + 6)) << 8
int32_t rax_1 = zx.d(*(arg1 + 7)) - 1
int32_t r9_2 = r9_1 + rax_1
uint16_t rax_6
uint16_t rdx_3

if (r9_1 + rax_1 s< 0)
label_142c00431:
    rdx_3 = zx.w(*(arg1 + 4))
    rax_6 = zx.w(*(arg1 + 5))
else
    while (true)
        uint64_t rax_3 = zx.q((r10 + r9_2) u>> 1)
        uint64_t r8_1 = zx.q(rax_3.d)
        uint32_t rcx =
            zx.d(zx.w(*(arg1 + (rax_3 << 2) + 8)) * 0x100 + zx.w(*(arg1 + (rax_3 << 2) + 9)))
        int32_t rax_5
        
        if (arg2 u>= rcx)
            rax_5.b = arg2 != rcx
        
        if (arg2 u< rcx || rax_5 s< 0)
            r9_2 = (r8_1 - 1).d
        else
            if (rax_5 s<= 0)
                if (r8_1.d u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
                    rdx_3 = zx.w(*(arg1 + ((r8_1 + 2) << 2) + 2))
                    rax_6 = zx.w(*(arg1 + ((r8_1 + 2) << 2) + 3))
                else
                    rdx_3 = 0
                    rax_6 = 0
                
                break
            
            r10 = (r8_1 + 1).d
        
        if (r10 s> r9_2)
            goto label_142c00431

return zx.q(sx.d(rax_6 + rdx_3 * 0x100))

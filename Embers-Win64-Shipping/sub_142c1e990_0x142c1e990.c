// 函数: sub_142c1e990
// 地址: 0x142c1e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_1 = zx.d(*(arg1 + 2)) << 8
int32_t rax_1 = zx.d(*(arg1 + 3)) - 1
int32_t r9_2 = r9_1 + rax_1
void* r8_2

if (r9_1 + rax_1 s< 0)
label_142c1ea0f:
    r8_2 = &data_14369a5ac
else
    while (true)
        uint64_t rax_3 = zx.q((r9_2 + r10) u>> 1)
        uint64_t rdx = zx.q(rax_3.d)
        uint64_t rax_4 = rax_3 * 3
        void* r8_1 = arg1 + 4 + (rax_4 << 1)
        int32_t rax_7
        
        if (arg2 u>= (zx.d(*(arg1 + 4 + (rax_4 << 1))) << 8) + zx.d(*(arg1 + 4 + (rax_4 << 1) + 1)))
            rax_7.b = arg2 u> (zx.d(*(r8_1 + 2)) << 8) + zx.d(*(r8_1 + 3))
        
        if (arg2 u< (zx.d(*(arg1 + 4 + (rax_4 << 1))) << 8) + zx.d(*(arg1 + 4 + (rax_4 << 1) + 1))
                || rax_7 s< 0)
            r9_2 = (rdx - 1).d
        else
            if (rax_7 s<= 0)
                r8_2 = arg1 + 4 + rdx * 6
                break
            
            r10 = (rdx + 1).d
        
        if (r10 s> r9_2)
            goto label_142c1ea0f

uint16_t r9_3 = zx.w(*r8_2)
uint32_t r10_1 = zx.d(*(r8_2 + 1))

if (r9_3 * 0x100 + r10_1.w u> zx.w(*(r8_2 + 2)) * 0x100 + zx.w(*(r8_2 + 3)))
    return 0xffffffff

return zx.q(((zx.d(*(r8_2 + 4)) - zx.d(r9_3.b)) << 8) + zx.d(*(r8_2 + 5)) - r10_1 + arg2)

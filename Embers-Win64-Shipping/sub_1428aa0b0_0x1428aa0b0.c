// 函数: sub_1428aa0b0
// 地址: 0x1428aa0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rcx = *(arg1 + 8)
int32_t rdx = *arg1
int32_t r8

if (rdx == 0)
    int32_t i_2 = *(rcx + 0x14)
    void* r10_1 = rcx[3]
    r8 = i_2 << 0x14
    
    if (i_2 s> 0)
        int32_t r9_1 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            char rcx_3 = r9_1.b
            r10_1 += 1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x2aaaaaab, r9_1)
            r9_1 += 3
            int32_t rdx_4 = temp2_1 s>> 2
            r8 ^= zx.d(*(r10_1 - 1)) << (rcx_3 - ((rdx_4 + (rdx_4 u>> 0x1f)) * 0x18).b)
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rdx == 1)
    r8 = sub_1428a8d60(*rcx)
else if (rdx == 2)
    r8 = sub_1428a8d60(rcx[1])
else
    if (rdx != 3)
        return 0
    
    r8 = rcx[2].d

return zx.q(*arg1 << 0x1e) | (zx.q(r8) & 0x3fffffff)

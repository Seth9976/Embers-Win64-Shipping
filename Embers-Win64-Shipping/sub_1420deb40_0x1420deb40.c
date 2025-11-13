// 函数: sub_1420deb40
// 地址: 0x1420deb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = 0
int64_t* rdx = *(arg1 + 0x98)
void* result = &rdx[sx.q(*(arg1 + 0xa0))]
uint64_t r9_1 = sx.q(*(arg1 + 0xa0)) << 3 u>> 3

if (rdx u> result)
    r9_1 = 0

if (r9_1 != 0)
    do
        result = *rdx
        
        if (result != 0)
            *(result + 0x5a) &= 0x7f
        
        rdx = &rdx[1]
        r8 += 1
    while (r8 != r9_1)

*(arg1 + 0x1f5) |= 8
return result

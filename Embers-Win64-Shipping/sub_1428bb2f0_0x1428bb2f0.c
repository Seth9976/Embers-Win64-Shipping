// 函数: sub_1428bb2f0
// 地址: 0x1428bb2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = -1
int64_t r9 = -1

do
    r9 += 1
while (arg1[r9] != 0)

do
    r8 += 1
while (arg2[r8] != 0)

if ((r8 + 1).d s< r9.d)
    void* r10_3 = &arg1[sx.q(r9.d) - sx.q(r8.d)]
    void* rcx = r10_3
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rcx)
        i = zx.d(*(rcx + arg2 - r10_3))
        
        if (r8_1 != i)
            break
        
        rcx += 1
    while (i != 0)
    
    if (r8_1 - i == 0 && *(r10_3 - 1) == 0x20)
        return zx.q((r10_3 - 1).d - arg1.d)

return 0

// 函数: sub_142b922e0
// 地址: 0x142b922e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0

void* r8 = arg1 + 0x18
void* r10 = r8 + (zx.q(*(arg1 + 0x14)) << 3)

if (r8 u>= r10)
    return 0

do
    char* rax_3 = *(**r8 + 8)
    void* r9_2 = arg2 - rax_3
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_3)
        i = zx.d(*(rax_3 + r9_2))
        
        if (rdx != i)
            break
        
        rax_3 = &rax_3[1]
    while (i != 0)
    
    if (rdx - i == 0)
        return *r8
    
    r8 += 8
while (r8 u< r10)

return 0
